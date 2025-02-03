//c progam to  demonstarte Macros

#include<stdio.h>

#define Ramesh_Sir 99
#define Vinod_Sir 3.14
#define Rekha_Maam "NMIT"
#define Pavan_Sir 'B'

int main()
{
    printf("Integer Value = %d\n",Ramesh_Sir);
    printf("PI Value = %.2f\n",Vinod_Sir);
    printf("String = %s\n",Rekha_Maam);
    printf("Character = %c\n",Pavan_Sir);

    return 0;
}
