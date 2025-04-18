#include <memory>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std ;
int main() {
   int ia[6] = {27, 210, 12, 47, 109, 83} ; 
   vector<int, allocator<int>> vi(ia, ia + 6) ; 

   cout << count_if(vi.begin(), vi.end(), not1(bind2nd(less<int>(), 40))) ; 
    // 通常将not1(bind2nd(less<int>(), 40)))这部分叫做predicate(谓语)，用于给出对错，提供判断的依据

    return 0 ; 
}
