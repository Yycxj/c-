#include<stdio.h>
int main()
{
	int number=0;
	int n=0;
	int x=0;
	  printf("������Ҫ��λ������Ȼ����\n");
	  scanf("%d",&number);
	 x=number;
	 
	 if(x==0){
	 	printf("\n\n%d��λ����1",number);
	 }
	 else {
	 	while (x>0){
		x/=10;
	 	n++;
	 }
	 printf("\n\n%d��λ����%d",number,n);
	 } 
	 
	       return 0;
	       
	
}
