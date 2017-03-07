#include<stdio.h>
main()
{int a,b,c,x;

scanf("%d",&x);
a=x%10;
b=x/10%10;
c=x/100;
if (a>0)
printf("%d%d%d",a,b,c);

else if(a=0,b>0)
printf("%d%d",b,c);

else 
printf("%d",c);

return (0);
}
