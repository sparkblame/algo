#include <stdio.h>
#define N 8
int main ()
{
    int a[N]={6,3,7,9,2,1,5,4};
    for (int i = 1; i < N; i++)
    {
        int j,key=a[i];
        for (j = i-1; j >= 0; j--)
        {
            if (a[j]>key)
            {   
                a[j+1]=a[j];
            }
            else
            {
                break;
            }
        }
        a[j+1]=key;
    }
    for (int i = 0; i < N; i++)
    {
        printf ("%d ",a[i]);
    }
    printf("\n");
    
    printf("hello world!");
}


