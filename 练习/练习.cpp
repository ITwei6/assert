//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x,i;
//	scanf("%d",&x);
//	for(i=2;i<=x-1;i++)
//	{
//		if(x%i==0)
//		{
//			printf("这个数不是素数\n");
//			return 0;//直接退出main函数
//		}
//		
//	}
//	printf("这个数是素数");
//	return 0;
//     int i=0;
//     for(i=100;i<=200;i++)
//     {
//     	if(i%3==0)
//        continue;
//        printf(" %d",i);
//	 }
//	 printf("\n");
//	 return 0;
//    int i,j,x;
//    j=1;
//    for(i=9;i>=1;i--)
//    {
//    	j=(j+1)*2;
//    
//    	printf("%d\n",j);
//	}
//   
//#include <stdio.h>
//#include<string.h>
//int main()
//{

//      int password;
//      int i,x,flsg;
//      flsg=1;
//      
//      while(i<=3)
//      {    printf("请输入密码\n");
//           scanf("%d",&password);
//	       system("cls");
//       if(password==123456)
//         {
//         	while(flsg==1)
//         	{
//			 
//         	printf("请输入操作选项");
//         	scanf("%d",&x);
//		 	switch(x)
//             {
//		           case 1: printf("查询余额\n");break;
//      	           case 2: printf("取款\n");break;
//      	           case 3: printf("存款\n");break;
//      	           case 4: printf("转账\n");break;
//      	           case 5: printf("打印\n");break;
//      	           case 6: printf("退卡\n");flsg=0;
//      	     }
//         	}
//			   break;
//		}
//	    else
//	    {
//	    	if(i<3)
//	    	  printf("密码错误\n");
//	        else
//	          printf("密码错误3次，无法输入\n");
//            i++;	
//		}
//	    
//	  }
//      
//     char c1,c2;
//     c1='a';
//     int a=19;
//     c2='Y';
//     printf("%d %c",c1,a);
//  {
//  	   char arr1[10]="hello";
//  	   char arr2[20]="666666666666";
//  	   memset(arr1,'3',4);
//       printf("%s",arr1);  
//  
//  return 0;
//  }
//#include <stdio.h>
//#include<string.h>
//void swap(int* pa, int* pb )
//{
//	
//	int t;
//	t=*pa;
//	*pa=*pb;
//	*pb=t;
//	
//}
//void  swap(int x,int y)//形参--形式上的参数只有调用的时候会实例化；才会分配内存；                       //形参的改变不会影响实参的变化；
//{                       //形参实例化后相当于实参的一份拷贝
//	int t;
//	t=a;
//	a=b;
//	b=t;
//}
//
//
//
//
//int main()
//{
//	
//	int a=10;
//	int b=20;
//	printf("a=%d b=%d",a,b);
//
//	int* pa=&a;
//	int* pb=&b;
//    swap(&a,&b);
//	printf("a=%d b=%d",a,b);
//	
//	return 0;
//}
//
//
//#include <stdio.h>
//#include<string.h>
//int is_prime(n)
//{
//	for(n=2;;n++)
//	{
//          n%		
//	}
//}
//int main()
//{
//	
//	int i=0;
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i)==1),1
//		printf("%d",i);
//	}
//	return 0;
//}

//#include <stdio.h>//二分查找法，折半法；
//int binary_search(int arr[],int k,int sz)
//{   
//    int left=0;
//    int right=sz-1;    
//   while(left<=right)
//  {	   
//	int mid=(left+right)/2;
//	if(arr[mid]<k)
//	{
//		left=mid+1;
//	}
//	else if (arr[mid]>k)
//	{
//		right=mid-1;
//	}
//	else
//	{
//		return mid;
//	}
//  }
//    return -1;
//}
//int main()
//{
//    int arr[]={1,2,3,4,5,6,7,8,9,10};
//    int k=5;
//    int sz=sizeof(arr)/sizeof(arr[0]);
// int ret = binary_search(arr,k,sz);
//    if(ret==-1)
//    {
//	printf("找不到呀\n");
//	}
//    else 
//    {
//	printf("找到了呀：%d",ret);
//    }
// 	
//	 return 0;
// 
//    
//}
//#include <stdio.h>
//  int is_pirme(int i)
//  {
//  	int j;
//  	for(j=2;j<=i-1;j++)
//  	{
//  		if(i%j==0)
//  		return 0;
//	  }
//     return 1;
//  }
//  
//  int main()
//  {
//   
//   int i;
//    for(i=100;i<=200;i++)
//    {
//    	int ret= is_pirme(i);
//     if(ret==1)
//   printf(" %d ",i);
//	}
//   
//   
//   return 0;
//  }
//#include <stdio.h>
//int is_leap_year(int year)
//{
//	if((year%4==0&&year%100!=0)||(year%400==0))
//	return 1;
//	else
//	return 0;
//}
//int main()
//{
//	
//	
//	int year=0;
//	for(year=1000;year<=2500;year++)
//	{
//		int ret =is_leap_year(year);
//		if(ret==1)
//		printf(" %d ",year);	
//	}
//	
//	
//	return 0;
//}
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "hello";
	int len = strlen(arr);
	printf("%d", len);
		
	return 0;
}