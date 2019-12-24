// EXP4.3.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;
ref class CCreature  abstract//定义引用基类CCreature
{
public:
	int nPower; //代表攻击力
	int nLifeValue; //代表生命值
	String^ sName; //代表角色的名字
public:
	virtual void Attack(CCreature ^ pCreature) = 0;//在基类中定义虚函数
	virtual int  Hurted(int nPower) = 0;
	virtual int FightBack(CCreature ^ pCreature) = 0;
	CCreature(int Power, int lifeValue, String ^name) :nPower(Power), nLifeValue(lifeValue), sName(name){}
};//基类的有参构造函数

ref class CDragon : public CCreature { //定义派生类怪物CDragon类
public:
	virtual void Attack(CCreature ^ pCreature) override
	{
		//表现攻击动作的代码（对基类中同名虚函数的重载）
		Console::WriteLine(L"CDragon {0} 向 {1} 攻击", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);//基类对象句柄指向派生类重载的同名虚函数
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override
	{
		//表现受伤动作的代码（对基类中同名虚函数的重载）
		Console::WriteLine(L"CDragon {0} 遭到攻击受伤", this->sName);
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature ^ pCreature) override
	{
		//表现反击动作的代码（对基类中同名虚函数的重载）
		Console::WriteLine(L"CDragon {0} 向 {1} 发出反击", this->sName, pCreature->sName);
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
	CDragon(int Power, int lifeValue, String ^name) :CCreature(Power, lifeValue, name){}
};//派生类CDragon的有参构造函数

ref class CWolf : public CCreature {//定义派生类怪物CWolf类
public:
	CWolf(int Power, int lifeValue, String^name) :CCreature(Power, lifeValue, name){}
	//派生类CWolf的有参构造函数
	virtual void Attack(CCreature^ pCreature) override{
		//表现攻击动作的代码（重载基类同名虚函数）
		Console::WriteLine(L"CWolf {0} 向{1}攻击", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override{
		//表现受伤动作的代码（重载基类同名虚函数）
		Console::WriteLine(L"CWolf {0} 遭到攻击受伤", this->sName);
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature^ pCreature)  override{
		//表现反击动作的代码（重载基类同名虚函数）
		Console::WriteLine(L"CWolf {0} 向{1}发出反击", this->sName, pCreature->sName);
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
};

ref class CGhost : public CCreature {//定义派生类怪物CGhost类
public:
	CGhost(int Power, int lifeValue, String^name) :CCreature(Power, lifeValue, name){}
	//派生类CGhost的有参构造函数
	virtual void Attack(CCreature^ pCreature) override{
		//表现攻击动作的代码（重载基类同名虚函数）
		Console::WriteLine(L"CGhost {0} 向{1}攻击", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override{
		//表现受伤动作的代码（重载基类同名虚函数）
		Console::WriteLine(L"CGhost {0} 遭到攻击受伤", this->sName);
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature^ pCreature)  override{
		//表现反击动作的代码（重载基类同名虚函数）
		Console::WriteLine(L"CGhost {0} 向{1}发出反击", this->sName, pCreature->sName);
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
};

ref class CThunderBird : public CCreature {//定义派生类怪物 CThunderBird类
public:
	CThunderBird(int Power, int lifeValue, String ^name) :CCreature(Power, lifeValue, name){}
	// CThunderBird派生類的有参构造函数
	virtual void Attack(CCreature ^ pCreature) override{
		//表现攻击动作的代码（重载基类同名虚函数）
		pCreature->Hurted(nPower);
		pCreature->FightBack(this);
	}
	virtual int  Hurted(int nPower)  override{
		//表现受伤动作的代码（重载基类同名虚函数）
		nLifeValue -= nPower;
		return nLifeValue;
	}
	virtual int FightBack(CCreature ^ pCreature)  override{
		//表现反击动作的代码（重载基类同名虚函数）
		pCreature->Hurted(nPower / 2);
		return nPower / 2;
	}
};
int main(array<System::String ^> ^args)
{
	CDragon^Dragon = gcnew CDragon(30, 400, "drag");
	//定义CDragon对象句柄，创建CDragon对象并初始化
	CWolf  ^Wolf = gcnew CWolf(20, 300, "wolf");
	CGhost^Ghost = gcnew CGhost(30, 500, "ghost");
	CThunderBird ^ Bird = gcnew CThunderBird(10, 200, "bird");
	Dragon->Attack(Wolf);//(1)运用对象句柄调用不同的函数
	Dragon->Attack(Ghost);//(2) 
	Dragon->Attack(Bird);
	return 0;
}