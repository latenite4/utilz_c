
#include <stdlib.h>
#include <common.h>
#include <stdio.h>
#include "./utilz.h"

// fcheck(bool err, bool ex, char* errStr) - function to check previous return status
//   error - bool to determine whether error has occurred.
//   ex - if error has occured, then exit here
//   errStr - text to explain error which just happened on console
void fcheck(int err, int ex, char* errStr, char*f , int l)
{
    if(err )
    {
        if (ex)
        {
            printf("\n error exit %s %s:%d\n",errStr,f,l);
            exit(ERREXIT);
        }
        printf("\n no error exit %s %s:%d\n",errStr,f,l);

    }
    // if no err, then exit here

}

// utilzTest() - link test for utilz .so
void utilzTest()
{
    printf("utilz version %s\n",UTILZVERSION);

}
