#include<stdio.h>

int main()
{
    int i,j,a[3],m;
    for(i=0;i<3;i++)
        scanf("%d",&a[i]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<2-i;j++)
        {
            if(a[j]>a[j+1])
            {
                m = a[j];
                a[j] = a[j+1];
                a[j+1] = m;
            }
        }
    }
    char z;
    scanf("%c",&z);
    char b[3];
    for(i=0;i<3;i++)
        scanf("%c",&b[i]);
    for(i=0;i<3;i++)
    {
        if(b[i] == 'A')
            printf("%d",a[0]);
        else if(b[i] == 'B')
            printf("%d",a[1]);
        else if(b[i] == 'C')
            printf("%d",a[2]);
        if(i!=2)
            printf(" ");
    }
    return 0;
}
