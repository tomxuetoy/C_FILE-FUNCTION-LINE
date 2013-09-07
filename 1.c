#include <stdio.h>
#include <stdlib.h>
 
void test()
{
    printf("cur func : %s ; cur line : %d\n", __FUNCTION__, __LINE__);
    return;
}
 
void main()
{
    printf("cur file : %s ; cur func : %s ; cur line : %d\n", __FILE__, __FUNCTION__, __LINE__);
    test();
    return;
}
/* 
$ a.exe
cur file : 1.c ; cur func : main ; cur line : 12
cur func : test ; cur line : 6
 
 * */
