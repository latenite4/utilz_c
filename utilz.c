
#include <stdlib.h>
#include <common.h>
#include <stdio.h>

// fcheck(bool err, bool ex, char* errStr) - function to check previous return status
//   error - bool to determine whether error has occurred.
//   ex - if error has occured, then exit here
//   errStr - text to explain error which just happened on console
void fcheck(int err, int ex, char* errStr)
{
    if(err != NOERROR)
    {
        if (ex)
        {
            printf("\n error exit %s \n",errStr);
            exit(ERREXIT);
        }
        printf("\n no error exit %s \n",errStr);

    }
    // if no err, then exit here

}

// utilzTest() - link test for utilz .so
void utilzTest()
{
    printf("hello from utilzTest()\n");

}
// for linker
int main()
{
    return 0;
}