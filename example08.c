#include <stdio.h>
#define enr
//#define both
//#define out

int main(){
    // run this part only if "enr" is defined
    #ifdef enr
    int x = 1;
    #include "example08.b.c"
    #endif
    // run this if "out" is defined
    #ifdef out
    #include "example08.a.c"
    #endif
    // since "both" is defined above, this will run
    #ifdef both
    #include "example08.a.c"

    #endif

    return 0;

}
