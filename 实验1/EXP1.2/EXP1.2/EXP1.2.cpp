// EXP1.2.cpp: ����Ŀ�ļ���

#include "stdafx.h"
using namespace System;
int main(array<System::String ^> ^args)
{	double r , h = 4.0, dResult; //���弰���ָ�ֵdouble�ͱ���
	int nID;//����int�ͱ���
	Console::Write("������뾶r=");//���ָ����Ϣ
	r = double::Parse(Console::ReadLine ());//���������ֵ��ַ�����ʾ��ʽת��Ϊ����Ч˫���ȸ�����
	while (1){//���ѭ���ṹ
		Console::WriteLine("1--����Բ�ܳ�");//���ָ����Ϣ
		Console::WriteLine("2--����Բ���");//ͬ��
		Console::WriteLine("3--����Բ�����");//ͬ��
		Console::WriteLine("4--����Բ�����");//ͬ��
		Console::WriteLine("0--�˳�");//ͬ��
		Console::Write("��ѡ��<0..4>:");//ͬ��
		nID = Int32::Parse(Console::ReadLine());//���������ֵ��ַ�����ʾ��ʽת��Ϊ���ĵ�Ч32λ�з�������
		if (nID == 0) break;//��nID==0ʱ����whileѭ��
		switch (nID)//��Ϊswitchѭ������������nID��ֵ���в�ͬ������
	{	case 1:  dResult = Math::PI * r * 2.0;//nID==1ʱ����Բ���ܳ��������������dResult
			Console::WriteLine("Բ�ܳ�Ϊ: {0}", dResult.ToString());//���Բ���ܳ�
			break;//����ѭ������ͬ
		case 2:  dResult = Math::PI * r * r;//nID==2ʱ����Բ������������������dResult
			Console::WriteLine("Բ���Ϊ: {0}", dResult.ToString());//���Բ�����
			break;
		case 3:  dResult = Math::PI * r * r * r * 4.0 / 3.0; //nID == 3ʱ����Բ�������������������dResult
			Console::WriteLine("Բ�����Ϊ: {0}", dResult.ToString());//���Բ������
			break;
		case 4:  dResult = Math::PI * r * r * h; //nID == 4ʱ����Բ��������������������dResult
			Console::WriteLine("Բ�����Ϊ: {0}", dResult.ToString());//���Բ�������
			break;
		}
	}
    return 0;
}
