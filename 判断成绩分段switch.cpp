#include<stdio.h>
main()
{int grade;
     printf("请输入学生成绩:");
        scanf("%d",&grade);
switch(grade/10)
{case 10:
 case 9:printf("优秀");break;
 case 8:
 case 7:printf("良好");break;
 case 6:printf("合格");break;
 default:printf("不合格");
    
 
}
   return 0;
}
