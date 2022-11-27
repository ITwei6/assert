//#include <stdio.h>
//int main()
//{

//    char ch1='a';
//    char ch2='b';
//    char ch3='c';
//    ch1=getchar();
//    getchar();
//	ch2=getchar();
//    getchar();
//    ch3=getchar();
//    printf("%c %c %c\n",ch1,ch2,ch3);
//    printf("%d %d %d\n",ch1,ch2,ch3);
//    putchar(ch3);
//    putchar(ch2);
//    putchar(ch1);
//	return  0;

//    int a,b,c,d;
//    a=10;b=11;c=12;
//    d=b+c||b-c||a;
//    printf("%d",d);
//    return 0;

//int i;
//for(i=2000;i<=2500;i++)
//{
//  if(i%4==0&&i%100!=0||i%400==0)
//	printf("%d\n",i);
//}

//   int x,y;
//   scanf("%d%d",&x,&y);
//   if(x>0)
//      if(y>0)
//      printf("第一象限：\n");
//      else  
//      printf("第四象限：\n");
//   else
//      if(y>0)
//      printf("第二象限：\n");
//      else
//      printf("第三象限：\n");

//    
//    int x,y;
//	scanf("%d",&x);
//	y=x/10;
//	switch(y)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5: printf("不 及格\n");	break;
//	
//	case 6: printf("就那样吧\n");break;
//	case 7: printf("就那样吧\n");break;
//	   
//	case 8: printf("可以\n");	break;
//	 
//	case 9: printf("666");	break;
//	case 10:printf("牛逼");
//	}
//    



//      double height,weight,fat,stweight,overweight;
//      printf("请输入体重：\n");
//      scanf("%if%if%if",&height,&weight,&fat);
//      stweight=(height-150)*0.6+48;//
//      overweight=(weight-stweight)/stweight;
//      printf("超重为%.1if%%\n",overweight*100);
//      if(overweight<0.1)
//           printf("体重正常\n");
//      else if(overweight<0.2)
//           printf("体重超重\n");
//	  else if(overweight<0.3)
//	  {
//	  	   if(fat>0.3)
//	  	   printf("轻度肥胖症\n");
//	  	   
//      }
//      else if(overweight<0.5)
//      {
//      	   if(fat>0.35&&fat<=0.45)
//      	   printf("重度肥胖症\n");
//	  }
//	  else {
//	  	if(fat>0.45)
//	  	 printf("重度肥胖症\n");
//	  } 


//     int x,password;
//     
//     printf("请输入密码：\n");
//     scanf("%d",&password);
//     if(password==123456)
//    {
//	 printf("1查询余额                2取款\n");
//     printf("3存款                    4转账\n");
//     printf("5打印清单                6退卡\n");
//     scanf("%d",&x);
//     switch(x)
//     {
//	 case 1: printf("查询余额\n"); break;
//     case 2: printf("取款\n"); break;
//     case 3: printf("存款\n"); break; 
//     case 4: printf("转账\n"); break;  
//     case 5: printf("打印清单\n"); break;
//     case 6: printf("退卡\n"); break; 
//}
//
//  }
//     else
//     printf("密码错误");
//
//    int a,b,c;
//    scanf("%d%d%d",&a,&b,&c);
//    if(a+b>c&&a+c>b&&b+c>a)
//       printf("可以构成三角形\n");
//    else
//       printf("不可以构成三角形\n");
// return 0;



////////////       猜数字游戏！！！！！！！！！！！
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void game()
{   int guess=0;
	int ret = rand()%100+1;
//	printf("%d\n",ret); 
     
     while(1)
     {
     	  printf("请猜数字\n");
     	  scanf("%d",&guess);
     	if(guess>ret)
     	  printf("你猜大了喔\n");
     	else if(guess<ret)
     	  printf("你猜小了喔\n");
     	else 
		  printf("你猜对了喔");  
	 }
	
}
void menu()
{
	printf("***********************\n");
	printf("**  1:game    0:exit **\n");
	printf("***********************\n");
}
int main()
{     	srand((unsigned int)time(NULL));
		int input = 0;
	do
	{
	
		menu();
		printf("请输入数字：\n");
		scanf("%d",&input);
		switch(input)
		{
			case 1: 
			    printf("开始进入猜数字游戏\n");
			    game();
				break;
			case 0: 
			    printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
	} while(input);
	
	return 0;
}