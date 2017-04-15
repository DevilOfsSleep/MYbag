#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    int  password = 12345;
    int word;
    int count = 0;
    for(;;)
    {
    printf("请输入密码");
    scanf("%d",word);
    if(word==password)
    {
        printf("输入正确\n");
    }
   else
   {
       printf("输入错误!\n");
       count++;
       if(count==3)
       {
       printf("输入错误三次结束");
          break;
       }
   }
    }
    /*
 int i=0;                          //while 就是if 的加强版
   while(i<10)
   {
       printf("这是第%d遍\n",i);
       i++;
   }*/
   //1-100的累加
   /*
   int i=1;
   int sum=0;
   while(i<101)
   {
       sum+=i;
       i++;
   }
   printf("sum=%d",sum);
   */
   //1-100的偶数相加
  /* int i=0;
   int sum=0;
   while(i<101)
   {
       if(i%2==0)
       {
           sum=sum+i;
       }
       i++;
   }
   printf("1-100的偶数和为%d",sum);
   */
   //用循环来实现三次密码输入错误退出系统 目前用整型来表示密码

}
