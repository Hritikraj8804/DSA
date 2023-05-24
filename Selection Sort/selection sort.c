#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int x[n],i,j,t;
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            if(x[j]<x[min])
            {
                min=j;
            }
        }
        t=x[i];
        x[i]=x[min];
        x[min]=t;
    }
    for(i=0;i<n;i++)
    printf("%d  ",x[i]);
}
