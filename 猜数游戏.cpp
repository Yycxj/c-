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
			printf("���Ѿ������һ������\n\n");
			printf("�����һ������:\n");
			scanf("%d",&number_by_hum);
		
		do{
			count++;
			if (number_by_hum<number_by_pc){
				printf("�����������С��,����������һ�����֣�\n");
				scanf("%d",&number_by_hum);}
			else if (number_by_hum>number_by_pc) {
				printf("����������ִ���,����������һ�����֣�\n");
				scanf("%d",&number_by_hum);}
		}
		while (number_by_pc!=number_by_hum);
		
		
			printf("��ϲ�� ���������������ȷ�ģ���\n��������%d�Ρ�\n��ȷ��������%d",count,number_by_hum);
			
			
				return 0;
				
			
	
}
