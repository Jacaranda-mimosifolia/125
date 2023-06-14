#include<stdio.h>
int main()
{
	//array 数组首元素的地址；&array 整个数组的首地址
	int array[6]={1,2,3,4,5,6};
	int (*p)[6]=&array;
	printf("p=&array=\t%p\t整个数组的首地址\n",p);    //p 整个数组的首地址 
	printf("*p=array=\t%p\t数组首元素的地址\n",*p);  //*p 数组首元素的地址 
	printf("**p=array[0]=\t%d\t\t\t数组首元素的值\n\n",**p);//**p 数组首元素的值 
	
	//一维数组
	int array1[3]={1,2,3}; 
	int *p1=array1;
	int (*p2)[3]=&array1;
	printf("%p,%d\n",p1,*p1);
	printf("%p,%p,%d\n",p2,*p2,**p2);
	//打印 
	for(int i=0;i<3;i++)
		printf("array1[%d]=%d\n",i,*(*p2+i)); 

	//二维数组 
	int array2[3][2]={1,2,3,4,5,6};
	int (*p3)[2]=array2;
	printf("\n%p,%p,%d",array2,*array2,**array2);
	printf("\n%p,%p,%d\n",p3,*p3,**p);
	//打印 
	for(int i=0;i<3;i++)
		for(int j=0;j<2;j++)
			printf("array3[%d][%d]=%d\n",i,j,*(*(p3+i))+j);
	return 0;
}
