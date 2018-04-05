#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[1000];
    scanf("%s",a);
    int n[200]={0};
    int i,flag=0;
    for(i=(strlen(a)-1);i>=0;i--)
    {
        n[a[i]]++;
    }
    for(i=strlen(a)-1;i>=0;i--)
    {
        if(n[a[i]]>1)
        {
            printf("%c",a[i]);
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("-1");


}
