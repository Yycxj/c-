int max(int x,int y)
{int z;
z=x>y?x:y;
return(z);
}



#include<stdio.h>
main()
{int max(int x,int y);
int a,b,c;
printf("��������������:");
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("�ϴ��������%d",c);
return 0;


}
