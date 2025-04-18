#define REGS_FOREACH(_) _(x) _(y)
#define RUN_LOGIC x1 = !x && y ; \
                  y1 = !x && !y ; 
#define DEFINE(x) static int x, x##1 ; 
#define UPDATE(x) x = x##1 ; 
#define PRINT(x) printf(#x " = %d; ", x) ; 

int main() {
    REGS_FOREACH(DEFINE) ; 
    while(1) {
        RUN_LOGIC ; 
        REGS_FOREACH(PRINT) ; 
        REGS_FOREACH(UPDATE) ; 
        putchar('\n') ; sleep(1) ; 
    }
}
