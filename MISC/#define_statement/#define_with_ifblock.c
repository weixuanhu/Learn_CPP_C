#ifdef __cplusplus
extern "C" {
#endif

#include <stdio.h>

#define aMacro(x)
    {
        x
    }

int main(int argc, char* argv[])
    {
        aMacro(x);
        // printf("macro is: %d", aMacro(1));
        return 0;
    }

#ifdef __cplusplus
}
#endif