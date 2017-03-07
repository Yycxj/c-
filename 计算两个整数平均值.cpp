#include<stdio.h>
int main()
{
	int a,b;
	double c;
	   printf("请输入两个整数\n（如用/3 5/表示求3和5的平均值）\n");
	      scanf("%d %d",&a,&b);
	    c=(a+b)/2.0;
	
	   printf("\n\n%d和%d的平均值是%f",a,b,c);
	   
	       return 0;
}
