#include<stdio.h>
int main()
{
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	int ihour,iminute;
	 
        printf("请输入第一个时间\n（如用/3 5/表示3时5分）\n");
		    scanf("%d %d",&hour1,&minute1);
		printf("\n\n请输入第二个时间\n（如用/3 5/表示3时5分）\n");
		    scanf("%d %d",&hour2,&minute2);
	     ihour=hour1-hour2;
	     iminute=minute1-minute2;
	     if(iminute<0){
	     	iminute+=60;
	     	ihour--;
	       }
	    printf("两时间的差值为%d时%d分",ihour,iminute);
	        
	        
	        return 0;
	        
		 }
