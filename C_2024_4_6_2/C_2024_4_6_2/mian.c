#define _CRT_SECURE_NO_DEPRECATE    
/*
	ģ���û���½����������ֻ�ܵ�½����
	ֻ����������������:���������ȷ����ʾ��¼���;������ζ�����������Ƴ�����
	Ĭ������Ϊ:liang.147+
*/
/*
	֪ʶ��:�ַ����ԱȲ����� == ��Ҫʹ�ÿ⺯��strcmp(ͷ�ļ�string.h)
	int strcmp(const char* str1,const char* str2)
	str1:Ҫ���бȽϵĵ�һ���ַ���;				str2:Ҫ���бȽϵĵڶ����ַ���
	@�����Ƿ���ֵС��0����str1С��str2
	@�����������ַ���һ��������ֵΪ0
	@�����Ƿ���ֵ����0����str1����str2
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
int main()
{
	int Sign_In_Num = 0;
	char password[20] = { 0 };								//Ҫ�����������󳤶�����
	while (Sign_In_Num < 3) {								//��������
		printf("���볤�����Ϊ20λ,������ĸ�����֡�����[������Ų�����]\n");
		printf("����������:>");
		scanf("%s", password);								//��������
		if (0 == strcmp(password, "liang.147+")) {			//�����ַ����Ա�
			printf("��½�ɹ�\n");
			break;											//������ȷ�������¼�ɹ�������������ѭ��
		}
		else {
			printf("����������������룬������%d�λ���!\n",3-Sign_In_Num-1 );
			Sleep(3000);									//����3000ms
			system("cls");									//��������
		}
		Sign_In_Num++;										//������1
	}
	if (3 == Sign_In_Num) {									//�������������������
		printf("������������Ѿ��ﵽ���ޣ������Ѿ��Զ��˳�!\n");
	}
	return 0;
}