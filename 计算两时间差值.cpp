#include<stdio.h>
int main()
{
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	int time1,time2,time3/*l����ʱ�����ķ�����*/;
	 
        printf("�������һ��ʱ��\n������/3 5/��ʾ3ʱ5�֣�\n");
		    scanf("%d %d",&hour1,&minute1);
		printf("\n\n������ڶ���ʱ��\n������/3 5/��ʾ3ʱ5�֣�\n");
		    scanf("%d %d",&hour2,&minute2);
	      time1=hour1*60+minute1;
	      time2=hour2*60+minute2;
	      time3=time1-time2;
	     
	     printf("\n\n��ʱ��Ĳ�ֵΪ%dСʱ%d����",time3/60,time3%60);
	        
			return 0;
			
	 	    
}
