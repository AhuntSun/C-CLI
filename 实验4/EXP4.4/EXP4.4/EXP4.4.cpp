// EXP4.4.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;

interface class IFruit//定义一个水果吃法的接口
{//定义一个吃水果的方式的
	Void Eat(); 
};

interface class DFruit//定义一个水果食性的接口
{ //定义一个显示水果寒、热、温、凉四种食性的函数
	Void Diets();  
};

//定义一个水果基类(抽象类)
ref class Fruit abstract
{
public:
	int nLifeValue; //代表能量值
	String^ sName;  //代表水果的名字
	virtual void Shape() abstract;//定义抽象函数
	virtual void ForEat() abstract;
};

//定义一个香蕉类实现接口
ref class Banana :public Fruit, public IFruit, public DFruit
{
public:
	Banana(int lifeValue, String ^na)//有参构造函数
	{
		nLifeValue = lifeValue;
		sName = na;
	};
	virtual void Shape() override//基类抽象函数的重载实现
	{
		Console::WriteLine("香蕉是长条形的。");
	}
	virtual void ForEat() override//基类抽象函数的重载实现
	{ 
		Eat();//声明食性函数
		Diets();//声明吃法函数
	}
	virtual void Diets()  {//函数的实现
		Console::WriteLine("香蕉是凉性的！");
	}
	virtual void Eat() {
		Console::WriteLine("吃香蕉要剥皮吃！");
	}
};

//定义一个吃苹果的类来实现接口
ref class Apple :public Fruit, public IFruit, public DFruit
{
public:
	Apple(int lifeValue, String ^na)//有参构造函数
	{
		nLifeValue = lifeValue;
		sName = na;
	}
	virtual void Shape() override{//基类抽象函数的重载实现
		Console::WriteLine("苹果是园形的。");
	}
	virtual void ForEat() override//基类抽象函数的重载实现
	{
		Eat();//函数声明
		Diets();
	}
	virtual void Diets() {//函数实现
		Console::WriteLine("苹果是中性的！");
	}
	virtual void Eat() {
		Console::WriteLine("苹果可以不剥皮直接吃！");
	}
};

//定义一个吃荔枝的类来实现接口
ref class Litchi :public Fruit, public IFruit, public DFruit
{
public:
	Litchi (int lifeValue, String ^na)//有参构造函数
	{
		nLifeValue = lifeValue;
		sName = na;
	}
	virtual void Shape() override{//基类抽象函数的重载实现
		Console::WriteLine("荔枝是扁圆形的。");
	}
	virtual void ForEat() override//基类抽象函数的重载实现
	{
		Eat();//函数声明
		Diets();
	}
	virtual void Diets() {//函数实现
		Console::WriteLine("荔枝是温性的！");
	}
	virtual void Eat() {
		Console::WriteLine("荔枝要剥皮吃！");
	}
};

//定义一个吃水果的食客类或游戏客类来调用Eat方法
ref  class EatFruit
{
	//用Fruit作为方法的参数来实现吃水果用不同的方式   
	int eLifeValue=0;
public:
	void Fruit(Fruit ^fru)
	{
		fru->Shape(); //调用基类定义的虚函数
		fru->ForEat();//通过调用基类定义的虚函数来调用接口定义的虚函数
		eLifeValue += fru->nLifeValue;
		Console::WriteLine("吃过了{0},增加能量{1}，能量已达{2}！", fru->sName, fru->nLifeValue, eLifeValue);
	}
};

int main(array<System::String ^> ^args)
{
	EatFruit ^fru1= gcnew EatFruit();   //创建吃水果类的实例 （食客，游戏客）  
	EatFruit ^fru2 = gcnew EatFruit();//创建多一个食客
	Banana ^banana = gcnew Banana(10, "香蕉1");  //创建香蕉类的实例香蕉1 
	Apple ^apple = gcnew Apple(20, "苹果2"); //创建苹果类的实例 苹果2
	Litchi ^litchi = gcnew Litchi(30, "荔枝3"); //创建苹果类的实例 苹果2
	fru1->Fruit(banana);
	fru1->Fruit(apple);
	fru2->Fruit(banana);//新食客吃三种水果
	fru2->Fruit(apple);
	fru2->Fruit(litchi);
    return 0;
}
