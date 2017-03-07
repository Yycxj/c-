int max(int x,int y)
{int z;
z=x>y?x:y;
return(z);
}



#include<stdio.h>
main()
{int max(int x,int y);
int a,b,c;
printf("请输入两个数字:");
scanf("%d,%d",&a,&b);
c=max(a,b);
printf("较大的数字是%d",c);
return 0;


}
