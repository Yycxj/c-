#include<stdio.h>
int main()
{
	double foot/*英尺*/,inch/*英寸*/;
	
   printf("请分别输入身高的英尺和英寸 \n(如 用/5 7/表示五尺七寸。)\n");
   scanf("%lf %lf",&foot,&inch);
   
       printf("\n\n此人的身高是%f米\n",(foot+inch/12)*0.3048);
    
    
      return 0;
}
