#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	int number_by_pc=rand()%100;
	int number_by_hum=0;
   	int count=0;
   	/*	number_by_cp=;
   		number_by_cp%=100; */
			printf("我已经想好了一个数字\n\n");
			printf("请你猜一个数字:\n");
			scanf("%d",&number_by_hum);
		
		do{
			count++;
			if (number_by_hum<number_by_pc){
				printf("你输入的数字小了,请重新输入一个数字：\n");
				scanf("%d",&number_by_hum);}
			else if (number_by_hum>number_by_pc) {
				printf("你输入的数字大了,请重新输入一个数字；\n");
				scanf("%d",&number_by_hum);}
		}
		while (number_by_pc!=number_by_hum);
		
		
			printf("恭喜您 您输入的数字是正确的！！\n您共猜了%d次。\n正确的数字是%d",count,number_by_hum);
			
			
				return 0;
				
			
	
}
