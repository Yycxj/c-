#include<stdio.h>
int main()
{
	int number=0;
	int n=0;
	int x=0;
	  printf("请输入要求位数的自然数：\n");
	  scanf("%d",&number);
	 x=number;
	 
	 if(x==0){
	 	printf("\n\n%d的位数是1",number);
	 }
	 else {
	 	while (x>0){
		x/=10;
	 	n++;
	 }
	 printf("\n\n%d的位数是%d",number,n);
	 } 
	 
	       return 0;
	       
	
}
