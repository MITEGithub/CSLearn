regcomp()如果成功，该函数返回 0。 否则返回一个错误代码（这个错误代码是regerror()（可用于函数调用）。 而且，*preg*的内容是不可预测的。

> 
#include <regex.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   regex_t    preg;
   char       *string = "a very simple simple simple string";
   char       *pattern = "¥¥(sim[a-z]le¥¥) ¥¥1";
   int        rc;
   size_t     nmatch = 2;
   regmatch_t pmatch[2];

   if (0 != (rc = regcomp(&preg, pattern, 0))) {
      printf("regcomp() failed, returning nonzero (%d)¥n", rc);
      exit(EXIT_FAILURE);
   }

   if (0 != (rc = regexec(&preg, string, nmatch, pmatch, 0))) {
      printf("Failed to match '%s' with '%s',returning %d.¥n",
             string, pattern, rc);
   }
   else {
      printf("With the whole expression, "
             "a matched substring ¥"%.*s¥" is found at position %d to %d.¥n",
             pmatch[0].rm_eo - pmatch[0].rm_so, &string[pmatch[0].rm_so],
             pmatch[0].rm_so, pmatch[0].rm_eo - 1);
      printf("With the sub-expression, "
             "a matched substring ¥"%.*s¥" is found at position %d to %d.¥n",
             pmatch[1].rm_eo - pmatch[1].rm_so, &string[pmatch[1].rm_so],
             pmatch[1].rm_so, pmatch[1].rm_eo - 1);
   }
   regfree(&preg);
   return 0;

   /****************************************************************************
      The output should be similar to :

      With the whole expression, a matched substring "simple simple" is found
      at position 7 to 19.
      With the sub-expression, a matched substring "simple" is found
      at position 7 to 12.
   ****************************************************************************/
}
c
> 

> 参考网站https://www.ibm.com/docs/ja/i/7.3?topic=functions-regcomp-compile-regular-expression