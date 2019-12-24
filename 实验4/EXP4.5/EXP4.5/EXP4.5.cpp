// EXP4.5.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;

delegate void CorDelegate(String ^name);
// 全局函数

void Nets(String ^name) //全局的“网络业务"
{
	Console::WriteLine(L"代理{0}的网络业务！", name);
}

// 静态成员和一般公有成员
ref class Common
{
public:
	static void Water(String ^name); // 静态成员 水费业务
	static void Elc(String ^name);// 静态成员   电费托收（方法二需定义为一般公有成员）
	void House(String ^name);// 一般公有成员  房产业务
	void Car(String ^name);// 一般公有成员   汽车业务
	//void Elc(String ^name);// 一般公有成员   电费托收（方法二需定义为一般公有成员）
};

void Common::Water(System::String ^name)
{
	Console::WriteLine(L"代理{0}的水费业务！", name);
}//函数的类外实现（注意函数名前所属类的修饰语句）

void Common::House(System::String ^name)
{
	Console::WriteLine(L"代理{0}的房产业务！", name);
}//函数的类外实现（注意函数名前所属类的修饰语句）

void Common::Car(System::String ^name)
{
	Console::WriteLine(L"代理{0}的汽车业务！", name);
}//函数的类外实现（注意函数名前所属类的修饰语句）

void Common::Elc(System::String ^name)
{
	Console::WriteLine(L"代理{0}的电费托收！", name);
}//函数的类外实现（注意函数名前所属类的修饰语句）

int main(array<System::String ^> ^args)
{
	CorDelegate^ Cor1; //创建具体的代理公司
	//4.  添加和去除代理业务
	//委托的构造函数(有两种方式)
	//①方式一是直接将被委托的函数指针作为其构造函数参数：
	Cor1 = gcnew CorDelegate(&Nets); // 在委托对象中增加Nets全局函数
	//向一个多播委托链中添加或去除一个委托，最简单的也是最方便是使用重载的“ + ”和“ - ”运算符。
	Cor1 += gcnew CorDelegate(&Common::Water); // 通过重载“+”运算符在委托对象中增加引用类Common中的静态成员函数
	//增加电费托收方法一(要相应地把Elc设置为Common中的静态成员函数)
	Cor1 += gcnew CorDelegate(&Common::Elc);
	//②方式二是使用两个参数，第1个参数用来指定在CLR堆上通过gcnew运算符创建的某个类的实例对象的引用，
	//而第2个参数用来指定该对象的某个实例函数的地址：
	Common ^ business1 = gcnew Common();//引用类Common的实例对象的引用
	Cor1 += gcnew CorDelegate(business1, &Common::House); // 在引用类实例对象中增加公有成员函数
	Cor1 += gcnew CorDelegate(business1, &Common::Car); // 公有成员函数
	//增加电费托收方法二
	//Cor1 += gcnew CorDelegate(business1, &Common::Elc);
	//5.  执行委托（有两种）
	Cor1->Invoke(L"李明"); //①执行委托方式一：通过委托对象的Invoke函数执行委托（对应委托方式一）
	// 取消委托
	Cor1 -= gcnew CorDelegate(&Common::Water);//把引用类Common中的静态成员函数Water从委托对象Cor1中取消
	Console::WriteLine(L"取消某个业务后。");
	Cor1(L"李明");//②执行委托方式二：直接使用调用委托对象执行委托（对应委托方式二）
    return 0;
}
