#include<stdio.h>
int main()
{
	int price=0,get_money=0;
		
	 printf("��������ȡ���:\n");
	    scanf("%d",&get_money);
	 printf("\n��������Ʒ�۸�:\n");
	    scanf("%d",&price);
	if (get_money<price)
	        printf("\n\n��ȡ�����������\n");
	else{		
			   printf("\n\n����Ľ��Ϊ��%d",get_money-price);	    
	 
}
	   return 0; 
	   
	   
}
