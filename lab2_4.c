#include<stdio.h>
int main()
{
    char c;
    int b;
    scanf("%c",&c);
    scanf("%d",&b);
    if(b>0&&b<32)
    {
        if(c>=65&&b%10==5&&c<=90)
            printf("%c",92);
        if(b%2!=0)
        {
            if(c>=65&&c<=73)
                printf("(^_^)");
            else if(c<=82&&c>73)
                printf("(*o*)");
            else if(c>82&&c<=90)
                printf("(T_T)");
        }
        else
            {
            if(c>=65&&c<=73)
                printf("{@_@}");
            else if(c<=82&&c>73)
                printf("{*v*}");
            else if(c>82&&c<=90)
                printf("{x_x}");
        }
        if(c>=65&&b%10==5&&c<=90)
                printf("/");
    }
    return 0;
}
