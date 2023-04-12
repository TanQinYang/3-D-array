#include <stdio.h>
#include <stdlib.h>

int main()
{
int arr[2][3][5]={{{1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15}},
                {{1,2,3,4,5},
                {6,7,8,9,10},
                {11,12,13,14,15}}};
int i;
int n;
int a;
for(i=0;i<=1;i++)
{
    for(a=0;a<=2;a++)
{
      printf("\n");
        for(n=0;n<=4;n++)
            printf("%d\t ",arr[i][a][n]);
}
}
return 0;
}
