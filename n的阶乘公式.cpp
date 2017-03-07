#include<stdio.h>
int fat(int n)
{int z;
if(n==1) z=1;
else
z=n*fat(n-1);
return(z);

}


main()
{int x=0 ,A=0;
int fat(int n);
    printf("请输入数据：");
    scanf("%d",&x);
if(x<0)
    printf("输入数据错误");
else if (x==0)
    printf("1");
else
    A=fat(x);
    printf("%d",A);

}

    
