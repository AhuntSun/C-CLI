// EXP4.5.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;

delegate void CorDelegate(String ^name);
// ȫ�ֺ���

void Nets(String ^name) //ȫ�ֵġ�����ҵ��"
{
	Console::WriteLine(L"����{0}������ҵ��", name);
}

// ��̬��Ա��һ�㹫�г�Ա
ref class Common
{
public:
	static void Water(String ^name); // ��̬��Ա ˮ��ҵ��
	static void Elc(String ^name);// ��̬��Ա   ������գ��������趨��Ϊһ�㹫�г�Ա��
	void House(String ^name);// һ�㹫�г�Ա  ����ҵ��
	void Car(String ^name);// һ�㹫�г�Ա   ����ҵ��
	//void Elc(String ^name);// һ�㹫�г�Ա   ������գ��������趨��Ϊһ�㹫�г�Ա��
};

void Common::Water(System::String ^name)
{
	Console::WriteLine(L"����{0}��ˮ��ҵ��", name);
}//����������ʵ�֣�ע�⺯����ǰ�������������䣩

void Common::House(System::String ^name)
{
	Console::WriteLine(L"����{0}�ķ���ҵ��", name);
}//����������ʵ�֣�ע�⺯����ǰ�������������䣩

void Common::Car(System::String ^name)
{
	Console::WriteLine(L"����{0}������ҵ��", name);
}//����������ʵ�֣�ע�⺯����ǰ�������������䣩

void Common::Elc(System::String ^name)
{
	Console::WriteLine(L"����{0}�ĵ�����գ�", name);
}//����������ʵ�֣�ע�⺯����ǰ�������������䣩

int main(array<System::String ^> ^args)
{
	CorDelegate^ Cor1; //��������Ĵ���˾
	//4.  ��Ӻ�ȥ������ҵ��
	//ί�еĹ��캯��(�����ַ�ʽ)
	//�ٷ�ʽһ��ֱ�ӽ���ί�еĺ���ָ����Ϊ�乹�캯��������
	Cor1 = gcnew CorDelegate(&Nets); // ��ί�ж���������Netsȫ�ֺ���
	//��һ���ಥί��������ӻ�ȥ��һ��ί�У���򵥵�Ҳ�������ʹ�����صġ� + ���͡� - ���������
	Cor1 += gcnew CorDelegate(&Common::Water); // ͨ�����ء�+���������ί�ж���������������Common�еľ�̬��Ա����
	//���ӵ�����շ���һ(Ҫ��Ӧ�ذ�Elc����ΪCommon�еľ�̬��Ա����)
	Cor1 += gcnew CorDelegate(&Common::Elc);
	//�ڷ�ʽ����ʹ��������������1����������ָ����CLR����ͨ��gcnew�����������ĳ�����ʵ����������ã�
	//����2����������ָ���ö����ĳ��ʵ�������ĵ�ַ��
	Common ^ business1 = gcnew Common();//������Common��ʵ�����������
	Cor1 += gcnew CorDelegate(business1, &Common::House); // ��������ʵ�����������ӹ��г�Ա����
	Cor1 += gcnew CorDelegate(business1, &Common::Car); // ���г�Ա����
	//���ӵ�����շ�����
	//Cor1 += gcnew CorDelegate(business1, &Common::Elc);
	//5.  ִ��ί�У������֣�
	Cor1->Invoke(L"����"); //��ִ��ί�з�ʽһ��ͨ��ί�ж����Invoke����ִ��ί�У���Ӧί�з�ʽһ��
	// ȡ��ί��
	Cor1 -= gcnew CorDelegate(&Common::Water);//��������Common�еľ�̬��Ա����Water��ί�ж���Cor1��ȡ��
	Console::WriteLine(L"ȡ��ĳ��ҵ���");
	Cor1(L"����");//��ִ��ί�з�ʽ����ֱ��ʹ�õ���ί�ж���ִ��ί�У���Ӧί�з�ʽ����
    return 0;
}
