#ifndef _API_H
#define _API_H
#include "Glob_Var.h"
#include "Intepretor.h"
#include <string>
using namespace std;

/*
	������ȸ���ģ��.
	�����û������룬����Interpreter������ͨ���������������
	����ģ��Ĺ���ʵ���û�������.
*/
struct  InputLink
{
	string Input;
	InputLink *next;
};
//����������ַ�
class Deal_Input
{
public:
	Deal_Input();//��������д���
	~Deal_Input();//��������
	void InitiaInput();//��ʼ�������ַ���
	void OutputLink();//�����ַ�������
	InputLink *Head;//�����ִ���ͷ��
	InputLink *Now;//���ڴ����������ִ�
	int NowDealNumber;//���ڴ������ַ��������


};

MSG GetCommand(SQL_Create **);//�õ����������
#endif