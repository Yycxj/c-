#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,max=0;
	  printf("������Ҫ�Ƚϵ������������������ּ����ÿո������\n");
	  scanf("%d %d %d",&a,&b,&c);
	
     if (a>b){
	      max=a;
	    if(max>c){max=c;}
		}
     else {max=b;
         if (c>max)
         max=c;
	 }
	 printf("\n\nmax=%d",max);
	 
	    return 0;
	 
	 }
	  
