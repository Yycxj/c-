#include<stdio.h>
int main()
{
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	int time1,time2,time3/*l两个时间相差的分钟数*/;
	 
        printf("请输入第一个时间\n（如用/3 5/表示3时5分）\n");
		    scanf("%d %d",&hour1,&minute1);
		printf("\n\n请输入第二个时间\n（如用/3 5/表示3时5分）\n");
		    scanf("%d %d",&hour2,&minute2);
	      time1=hour1*60+minute1;
	      time2=hour2*60+minute2;
	      time3=time1-time2;
	     
	     printf("\n\n两时间的差值为%d小时%d分钟",time3/60,time3%60);
	        
			return 0;
			
	 	    
}
