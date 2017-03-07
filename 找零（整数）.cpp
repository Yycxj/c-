#include<stdio.h>
int main()
{
	int price=0,get_money=0;
		
	 printf("请输入收取金额:\n");
	    scanf("%d",&get_money);
	 printf("\n请输入商品价格:\n");
	    scanf("%d",&price);
	if (get_money<price)
	        printf("\n\n收取或输入金额错误\n");
	else{		
			   printf("\n\n找零的金额为：%d",get_money-price);	    
	 
}
	   return 0; 
	   
	   
}
