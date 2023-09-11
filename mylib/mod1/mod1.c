#include "mod1.h"

void func1()
{
    printf("mod1 func1\n");
}
void func2()
{
    printf("mod1 func2\n");
}

struct mod1 mod1 = {
    .func1 = func1,
    .func2 = func2,
};