#define _CRT_SECURE_NO_DEPRECATE    
/*
	模拟用户登陆场景，并且只能登陆三次
	只允许输入三次密码:如果密码正确，提示登录完成;如果三次都输入错误，则推出程序
	默认密码为:liang.147+
*/
/*
	知识点:字符串对比不能用 == 。要使用库函数strcmp(头文件string.h)
	int strcmp(const char* str1,const char* str2)
	str1:要进行比较的第一个字符串;				str2:要进行比较的第二个字符串
	@·若是返回值小于0，则str1小于str2
	@·若是两个字符串一样，返回值为0
	@·若是返回值大于0，则str1大于str2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
int main()
{
	int Sign_In_Num = 0;
	char password[20] = { 0 };								//要给定密码的最大长度限制
	while (Sign_In_Num < 3) {								//次数限制
		printf("密码长度最大为20位,包含字母、数字、符号[特殊符号不可用]\n");
		printf("请输入密码:>");
		scanf("%s", password);								//输入密码
		if (0 == strcmp(password, "liang.147+")) {			//密码字符串对比
			printf("登陆成功\n");
			break;											//输入正确后，输出登录成功字样，并跳出循环
		}
		else {
			printf("密码错误，请重新输入，您还有%d次机会!\n",3-Sign_In_Num-1 );
			Sleep(3000);									//休眠3000ms
			system("cls");									//清屏函数
		}
		Sign_In_Num++;										//次数加1
	}
	if (3 == Sign_In_Num) {									//密码输入次数到达三次
		printf("密码输入次数已经达到上限，程序已经自动退出!\n");
	}
	return 0;
}