#include<stdio.h>
main()
{int year=0;
    printf("请输入要判断的年份:");
    scanf("%d",&year);
if (year%4!=0)
    printf("平年");
else
{
	   if (year%100==0)
               printf("平年");
       else 
               printf("闰年");
   
  }       return 0;
  
}



