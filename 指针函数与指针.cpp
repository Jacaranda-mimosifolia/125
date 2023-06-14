#include<stdio.h>
#include<stdlib.h>
#define MALLOC(type,size) (type*)malloc(size)
int main()
{
	char *p[5]={};//指针函数 
	for(int i=0;i<5;i++)
	{
		p[i]=MALLOC(char,100);//开辟内存空间 
		scanf("%s",p[i]);
	}
	for(int i=0;i<5;i++)
	{
		puts(p[i]);
		free(p[i]);
	}
	return 0;
}

