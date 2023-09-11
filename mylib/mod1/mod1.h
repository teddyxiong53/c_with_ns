#ifndef __MOD1_H__
#define __MOD1_H__

typedef void (*mod1_func1)();
typedef void (*mod1_func2)();

struct mod1 {
    mod1_func1 func1;
    mod1_func2 func2;
};
extern struct mod1 mod1;

#endif // __MOD1_H__
