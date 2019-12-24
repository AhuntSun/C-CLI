// EXP4.4.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;

interface class IFruit//����һ��ˮ���Է��Ľӿ�
{//����һ����ˮ���ķ�ʽ��
	Void Eat(); 
};

interface class DFruit//����һ��ˮ��ʳ�ԵĽӿ�
{ //����һ����ʾˮ�������ȡ��¡�������ʳ�Եĺ���
	Void Diets();  
};

//����һ��ˮ������(������)
ref class Fruit abstract
{
public:
	int nLifeValue; //��������ֵ
	String^ sName;  //����ˮ��������
	virtual void Shape() abstract;//���������
	virtual void ForEat() abstract;
};

//����һ���㽶��ʵ�ֽӿ�
ref class Banana :public Fruit, public IFruit, public DFruit
{
public:
	Banana(int lifeValue, String ^na)//�вι��캯��
	{
		nLifeValue = lifeValue;
		sName = na;
	};
	virtual void Shape() override//���������������ʵ��
	{
		Console::WriteLine("�㽶�ǳ����εġ�");
	}
	virtual void ForEat() override//���������������ʵ��
	{ 
		Eat();//����ʳ�Ժ���
		Diets();//�����Է�����
	}
	virtual void Diets()  {//������ʵ��
		Console::WriteLine("�㽶�����Եģ�");
	}
	virtual void Eat() {
		Console::WriteLine("���㽶Ҫ��Ƥ�ԣ�");
	}
};

//����һ����ƻ��������ʵ�ֽӿ�
ref class Apple :public Fruit, public IFruit, public DFruit
{
public:
	Apple(int lifeValue, String ^na)//�вι��캯��
	{
		nLifeValue = lifeValue;
		sName = na;
	}
	virtual void Shape() override{//���������������ʵ��
		Console::WriteLine("ƻ����԰�εġ�");
	}
	virtual void ForEat() override//���������������ʵ��
	{
		Eat();//��������
		Diets();
	}
	virtual void Diets() {//����ʵ��
		Console::WriteLine("ƻ�������Եģ�");
	}
	virtual void Eat() {
		Console::WriteLine("ƻ�����Բ���Ƥֱ�ӳԣ�");
	}
};

//����һ������֦������ʵ�ֽӿ�
ref class Litchi :public Fruit, public IFruit, public DFruit
{
public:
	Litchi (int lifeValue, String ^na)//�вι��캯��
	{
		nLifeValue = lifeValue;
		sName = na;
	}
	virtual void Shape() override{//���������������ʵ��
		Console::WriteLine("��֦�Ǳ�Բ�εġ�");
	}
	virtual void ForEat() override//���������������ʵ��
	{
		Eat();//��������
		Diets();
	}
	virtual void Diets() {//����ʵ��
		Console::WriteLine("��֦�����Եģ�");
	}
	virtual void Eat() {
		Console::WriteLine("��֦Ҫ��Ƥ�ԣ�");
	}
};

//����һ����ˮ����ʳ�������Ϸ����������Eat����
ref  class EatFruit
{
	//��Fruit��Ϊ�����Ĳ�����ʵ�ֳ�ˮ���ò�ͬ�ķ�ʽ   
	int eLifeValue=0;
public:
	void Fruit(Fruit ^fru)
	{
		fru->Shape(); //���û��ඨ����麯��
		fru->ForEat();//ͨ�����û��ඨ����麯�������ýӿڶ�����麯��
		eLifeValue += fru->nLifeValue;
		Console::WriteLine("�Թ���{0},��������{1}�������Ѵ�{2}��", fru->sName, fru->nLifeValue, eLifeValue);
	}
};

int main(array<System::String ^> ^args)
{
	EatFruit ^fru1= gcnew EatFruit();   //������ˮ�����ʵ�� ��ʳ�ͣ���Ϸ�ͣ�  
	EatFruit ^fru2 = gcnew EatFruit();//������һ��ʳ��
	Banana ^banana = gcnew Banana(10, "�㽶1");  //�����㽶���ʵ���㽶1 
	Apple ^apple = gcnew Apple(20, "ƻ��2"); //����ƻ�����ʵ�� ƻ��2
	Litchi ^litchi = gcnew Litchi(30, "��֦3"); //����ƻ�����ʵ�� ƻ��2
	fru1->Fruit(banana);
	fru1->Fruit(apple);
	fru2->Fruit(banana);//��ʳ�ͳ�����ˮ��
	fru2->Fruit(apple);
	fru2->Fruit(litchi);
    return 0;
}
