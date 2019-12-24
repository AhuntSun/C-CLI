// EXP4.6.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;
public delegate void DelegateButton();//����ί��

ref class Buttons     {//����������
public:
	event DelegateButton ^EventBtnClick;  //���������¼�
	event DelegateButton ^EventBtnDBClick;  //����˫���¼�
	event DelegateButton ^EventBtnMove;  //�����ƶ��¼�
	
	event DelegateButton ^EventBtnRClick;  //�������һ��¼�

private:  //��������ֶκ�����
	String ^name; //��ť������
	String ^text;  //��ť��ʾ���ı�

public:  Buttons()//������Ĺ��캯��
{  //�����¼�
	//�¼�EventBtnClick��Ӧ������Btn_EventClick
	this->EventBtnClick += gcnew DelegateButton(this, &Buttons::Btn_EventClick);
	//�¼�EventBtnDBClick��Ӧ������Btn_EventDBClick
	this->EventBtnDBClick += gcnew DelegateButton(this, &Buttons::Btn_EventDBClick);
	
	//�����¼�EventBtnRClick��Ӧ������Btn_EventRClick
	this->EventBtnRClick += gcnew DelegateButton(this, &Buttons::Btn_EventRClick);

}
 
property String ^Name//��������ֶκ�����
{
	String ^get(){ return name; }//�ֱ������Ե�set��get����
	void set(String ^value){ name = value; }
}

public:  property String ^Text//��������ֶκ�����
{
	String^ get(){ return text; }
	void set(String ^value)
	{
		text = value;
	}
}
//���������¼��ķ���
public:
	//�÷��������¼�EventBtnClick
	void Click()
	{
		Console::WriteLine("�����¼�����굥��...");
		EventBtnClick();//��Ӧ���¼�������ΪBtn_EventClick();
	}

	//�÷��������¼�EventBtnDBClick
	void DBClick()
	{
		Console::WriteLine("�����¼������˫��...");
		EventBtnDBClick();//��Ӧ���¼�������ΪBtn_EventDBClick();
	}

	//�÷��������¼�EventBtnMove
	void Move()
	{
		Console::WriteLine("�����¼�������ƶ�...");
		EventBtnMove();
	}

	//�÷������������¼�EventBtnRClick
	void RClick()
	{
		Console::WriteLine("���������¼�������һ�ing����������");
		EventBtnRClick();//��Ӧ���¼�������ΪBtn_EventRClick();
	}

public:
	void Btn_EventClick()//�¼�EventBtnClick�������Ķ���
	{
		Console::WriteLine("�㵥����{0}��ť,��ť��������{1}", Text, Name);
	}

	void Btn_EventDBClick()//�¼�EventBtnDBClick�������Ķ���
	{
		Console::WriteLine("��˫����{0}��ť,��ť��������{1}", Text, Name);
	}

	//���ڶ��������¼�EventBtnRClick�Ĵ�����
	void Btn_EventRClick()
	{
		Console::WriteLine("�㵥����{0}��ť,��ť��������{1}", Text, Name);
	}
};

static void Btn_EventMove()//���ⶨ���¼�EventBtnMove�ľ�̬������
{
	Console::Write("���ƶ�����ڰ�ť��Ʈ��");
}

int main(array<System::String ^> ^args)
{
	//�����û�����button1����ʼ��Name��Text����
	Buttons ^button1 = gcnew Buttons;
	button1->Name = "Button1";
	button1->Text = "ȷ��";
	//�����¼�  ����button1��Ӧ�¼�EventBtnMove�Ĵ�����ΪBtn_EventMove
	button1->EventBtnMove += gcnew DelegateButton(Btn_EventMove);
	//�����¼�
	button1->Click();//�����¼�EventBtnClick
	button1->DBClick();//�����¼�EventDBBtnClick
	button1->Move();//�����¼�EventBtnMove
	Console::WriteLine("  ��ť��{0}", button1->Text);
	//�����û�����button2����ʼ��Name��Text����
	Buttons ^button2 = gcnew Buttons;
	button2->Name = "Button2";
	button2->Text = "ȡ��";
	//�����¼�  ����button2��Ӧ�¼�EventBtnMove�Ĵ�����ΪBtn_EventMove
	button2->EventBtnMove += gcnew DelegateButton(Btn_EventMove);
	button2->Click();//�����¼�EventBtnClick
	button2->DBClick();//�����¼�EventDBBtnClick
	button2->Move();//�����¼�EventBtnMove
	Console::WriteLine("  ��ť��{0}", button2->Text);
	button1->Text = "OK"; //�޸Ķ���button1��ť���ı�
	button1->Click();
	Console::WriteLine();
	//�������button3�����������һ��¼�
	Buttons ^button3 = gcnew Buttons;
	button3->Name = "Button3";
	button3->Text = "����";
	button3->RClick();
	Console::WriteLine("��ť��{0}", button3->Text);
	return 0;
}
