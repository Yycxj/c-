#include<stdio.h>
main()
{int year=0;
    printf("������Ҫ�жϵ����:");
    scanf("%d",&year);
if (year%4!=0)
    printf("ƽ��");
else
{
	   if (year%100==0)
               printf("ƽ��");
       else 
               printf("����");
   
  }       return 0;
  
}



