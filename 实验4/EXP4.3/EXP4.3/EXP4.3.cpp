// EXP4.3.cpp: ����Ŀ�ļ���
#include "stdafx.h"
using namespace System;
ref class CCreature  abstract//�������û���CCreature
{
public:
	int nPower; //��������
	int nLifeValue; //��������ֵ
	String^ sName; //�����ɫ������
public:
	virtual void Attack(CCreature ^ pCreature) = 0;//�ڻ����ж����麯��
	virtual int  Hurted(int nPower) = 0;
	virtual int FightBack(CCreature ^ pCreature) = 0;
	CCreature(int Power, int lifeValue, String ^name) :nPower(Power), nLifeValue(lifeValue), sName(name){}
};//������вι��캯��

ref class CDragon : public CCreature { //�������������CDragon��
public:
	virtual void Attack(CCreature ^ pCreature) override
	{
		//���ֹ��������Ĵ��루�Ի�����ͬ���麯�������أ�
		Console::WriteLine(L"CDragon {0} �� {1} ����", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);//���������ָ�����������ص�ͬ���麯��
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override
	{
		//�������˶����Ĵ��루�Ի�����ͬ���麯�������أ�
		Console::WriteLine(L"CDragon {0} �⵽��������", this->sName);
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature ^ pCreature) override
	{
		//���ַ��������Ĵ��루�Ի�����ͬ���麯�������أ�
		Console::WriteLine(L"CDragon {0} �� {1} ��������", this->sName, pCreature->sName);
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
	CDragon(int Power, int lifeValue, String ^name) :CCreature(Power, lifeValue, name){}
};//������CDragon���вι��캯��

ref class CWolf : public CCreature {//�������������CWolf��
public:
	CWolf(int Power, int lifeValue, String^name) :CCreature(Power, lifeValue, name){}
	//������CWolf���вι��캯��
	virtual void Attack(CCreature^ pCreature) override{
		//���ֹ��������Ĵ��루���ػ���ͬ���麯����
		Console::WriteLine(L"CWolf {0} ��{1}����", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override{
		//�������˶����Ĵ��루���ػ���ͬ���麯����
		Console::WriteLine(L"CWolf {0} �⵽��������", this->sName);
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature^ pCreature)  override{
		//���ַ��������Ĵ��루���ػ���ͬ���麯����
		Console::WriteLine(L"CWolf {0} ��{1}��������", this->sName, pCreature->sName);
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
};

ref class CGhost : public CCreature {//�������������CGhost��
public:
	CGhost(int Power, int lifeValue, String^name) :CCreature(Power, lifeValue, name){}
	//������CGhost���вι��캯��
	virtual void Attack(CCreature^ pCreature) override{
		//���ֹ��������Ĵ��루���ػ���ͬ���麯����
		Console::WriteLine(L"CGhost {0} ��{1}����", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override{
		//�������˶����Ĵ��루���ػ���ͬ���麯����
		Console::WriteLine(L"CGhost {0} �⵽��������", this->sName);
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature^ pCreature)  override{
		//���ַ��������Ĵ��루���ػ���ͬ���麯����
		Console::WriteLine(L"CGhost {0} ��{1}��������", this->sName, pCreature->sName);
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
};

ref class CThunderBird : public CCreature {//������������� CThunderBird��
public:
	CThunderBird(int Power, int lifeValue, String ^name) :CCreature(Power, lifeValue, name){}
	// CThunderBird������вι��캯��
	virtual void Attack(CCreature ^ pCreature) override{
		//���ֹ��������Ĵ��루���ػ���ͬ���麯����
		pCreature->Hurted(nPower);
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override{
		//�������˶����Ĵ��루���ػ���ͬ���麯����
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature ^ pCreature)  override{
		//���ַ��������Ĵ��루���ػ���ͬ���麯����
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
};
int main(array<System::String ^> ^args)
{
	CDragon^Dragon = gcnew CDragon(30, 400, "drag");
	//����CDragon������������CDragon���󲢳�ʼ��
	CWolf  ^Wolf = gcnew CWolf(20, 300, "wolf");
	CGhost^Ghost = gcnew CGhost(30, 500, "ghost");
	CThunderBird ^ Bird = gcnew CThunderBird(10, 200, "bird");
	Dragon->Attack(Wolf);//(1)���ö��������ò�ͬ�ĺ���
	Dragon->Attack(Ghost);//(2) 
	Dragon->Attack(Bird);
	return 0;
}