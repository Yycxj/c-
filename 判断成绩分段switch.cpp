#include<stdio.h>
main()
{int grade;
     printf("������ѧ���ɼ�:");
        scanf("%d",&grade);
switch(grade/10)
{case 10:
 case 9:printf("����");break;
 case 8:
 case 7:printf("����");break;
 case 6:printf("�ϸ�");break;
 default:printf("���ϸ�");
    
 
}
   return 0;
}
