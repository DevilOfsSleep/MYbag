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
    printf("����������");
    scanf("%d",word);
    if(word==password)
    {
        printf("������ȷ\n");
    }
   else
   {
       printf("�������!\n");
       count++;
       if(count==3)
       {
       printf("����������ν���");
          break;
       }
   }
    }
    /*
 int i=0;                          //while ����if �ļ�ǿ��
   while(i<10)
   {
       printf("���ǵ�%d��\n",i);
       i++;
   }*/
   //1-100���ۼ�
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
   //1-100��ż�����
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
   printf("1-100��ż����Ϊ%d",sum);
   */
   //��ѭ����ʵ������������������˳�ϵͳ Ŀǰ����������ʾ����

}
