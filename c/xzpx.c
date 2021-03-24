#include <stdio.h>
int main()
{
    int z=0;
    scanf("%d", &z);
    int i,j,t,a[z];    
    printf("请输入%d个数 空格分开：\n",z);
    for(i=1;i<(z+1);i++)
        scanf("%d",&a[i]);    //从键盘中输入要排序的10个数字
    for(i=1;i<=(z-1);i++)
        for (j=i+1;j<=z;j++)
            if(a[i]<a[j])    //如果前一个数比后一个数大，则利用中间变量t实现两值互换
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
    printf("排序后的顺序是：\n");
    for(i=1;i<=z;i++)
        printf("%5d", a[i]);    //输出排序后的数组
    printf("\n");
    return 0;
}