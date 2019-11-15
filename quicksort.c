#include"sort.h"
int  partition (int a[],int p,int q)
{
    int x=a[p];
    int i=p;
    int tmp;
    for (int j = p+1; j <= q; j++)
    {
        if (a[j] <= x)
        {
            i++;
            tmp =a[i];
            a[i] = a[j];
            a[j]=tmp;
        }
    }
    tmp=a[i];
    a[i] = a[p];
    a[p]=tmp;

    return i;
}

int main(int argc, char const *argv[])
{
    int a[N] = {6,10, 13, 5, 8, 3, 2};
    quicksort(a,N);
    printArray(a,N);
    return 0;
}
void qSort(int a[],int p,int q)
{
    int r;
    if (p<q)
    {
        r=partition(a,p,q);
        qSort(a,p,r+1);
        qSort(a,r+1,q);
    }
    
}
void quicksort(int a[],int n)
{
    qSort(a,0,n-1);
}
void printArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf ("%d",a[i]);
    }
}