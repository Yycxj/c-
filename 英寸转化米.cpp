#include<stdio.h>
int main()
{
	double foot/*Ӣ��*/,inch/*Ӣ��*/;
	
   printf("��ֱ�������ߵ�Ӣ�ߺ�Ӣ�� \n(�� ��/5 7/��ʾ����ߴ硣)\n");
   scanf("%lf %lf",&foot,&inch);
   
       printf("\n\n���˵������%f��\n",(foot+inch/12)*0.3048);
    
    
      return 0;
}
