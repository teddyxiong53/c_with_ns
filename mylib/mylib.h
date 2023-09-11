#ifndef __MYLIB_H__
#define __MYLIB_H__

#include "mod1/mod1.h"
#include "mod2/mod2.h"
// using fullname as shortname
#define  USING_FN(fullname, shortname) fullname shortname = shortname

struct mylib {
    struct mod1 mod1;
    // struct mod2 mod2;
};

extern struct mylib mylib;

#endif // __MYLIB_H__
