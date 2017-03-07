#include<stdio.h>
int main()
{
	int number=0;
	int a=0,p_NO=0,b=0;
		printf("请输入一个自然数\n");
		scanf("%d",&number);
		printf("%d",number);
	while (number>0){
		
		a=number%10;
		
		p_NO=p_NO*10+a;
		number/=10;
		printf("\na=%d number=%d  p_NO=%d",a,number,p_NO);
		 
		
	}
		printf("\n\np_NO=%d",p_NO);
	      return 0;
	      
	
}
