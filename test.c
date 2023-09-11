#include "mylib.h"
// USING_NS(mylib.mod1, mod1);
// USING_FN(mod1_func2, func2);

int main(int argc, char const *argv[])
{
    mylib_init();
    mylib.mod1.func1();
    // mylib.mod1.func2();
    // func2();
    return 0;
}
