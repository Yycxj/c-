#include<stdio.h>
int main()
{
	int hour1=0,minute1=0;
	int hour2=0,minute2=0;
	int ihour,iminute;
	 
        printf("�������һ��ʱ��\n������/3 5/��ʾ3ʱ5�֣�\n");
		    scanf("%d %d",&hour1,&minute1);
		printf("\n\n������ڶ���ʱ��\n������/3 5/��ʾ3ʱ5�֣�\n");
		    scanf("%d %d",&hour2,&minute2);
	     ihour=hour1-hour2;
	     iminute=minute1-minute2;
	     if(iminute<0){
	     	iminute+=60;
	     	ihour--;
	       }
	    printf("��ʱ��Ĳ�ֵΪ%dʱ%d��",ihour,iminute);
	        
	        
	        return 0;
	        
		 }
