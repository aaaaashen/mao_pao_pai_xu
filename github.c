#include <stdio.h>
#include <string.h>
void main()
{
int i,j,k,len,count=0;
char a[100]={0};
printf("请输入数组");
scanf("%s",a);
len=strlen(a);
for(i=0;i<len-1;i++)
{
    for(j=0;j<len-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
            count++;
        }
    }
    if(count==len)
    {
        break;
    }
}
printf("冒泡排序后输出为：");
for(i=0;i<len;i++)
{
    printf("%c",a[i]);
}
}
