// EXP4.6.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;
public delegate void DelegateButton();//定义委托

ref class Buttons     {//定义引用类
public:
	event DelegateButton ^EventBtnClick;  //声明单击事件
	event DelegateButton ^EventBtnDBClick;  //声明双击事件
	event DelegateButton ^EventBtnMove;  //声明移动事件
	
	event DelegateButton ^EventBtnRClick;  //新增的右击事件

private:  //定义类的字段和属性
	String ^name; //按钮的名字
	String ^text;  //按钮显示的文本

public:  Buttons()//引用类的构造函数
{  //订阅事件
	//事件EventBtnClick对应处理函数Btn_EventClick
	this->EventBtnClick += gcnew DelegateButton(this, &Buttons::Btn_EventClick);
	//事件EventBtnDBClick对应处理函数Btn_EventDBClick
	this->EventBtnDBClick += gcnew DelegateButton(this, &Buttons::Btn_EventDBClick);
	
	//新增事件EventBtnRClick对应处理函数Btn_EventRClick
	this->EventBtnRClick += gcnew DelegateButton(this, &Buttons::Btn_EventRClick);

}
 
property String ^Name//定义类的字段和属性
{
	String ^get(){ return name; }//分别定义属性的set和get函数
	void set(String ^value){ name = value; }
}

public:  property String ^Text//定义类的字段和属性
{
	String^ get(){ return text; }
	void set(String ^value)
	{
		text = value;
	}
}
//定义引发事件的方法
public:
	//该方法引发事件EventBtnClick
	void Click()
	{
		Console::WriteLine("触发事件，鼠标单击...");
		EventBtnClick();//对应的事件处理函数为Btn_EventClick();
	}

	//该方法引发事件EventBtnDBClick
	void DBClick()
	{
		Console::WriteLine("触发事件，鼠标双击...");
		EventBtnDBClick();//对应的事件处理函数为Btn_EventDBClick();
	}

	//该方法引发事件EventBtnMove
	void Move()
	{
		Console::WriteLine("触发事件，鼠标移动...");
		EventBtnMove();
	}

	//该方法引发新增事件EventBtnRClick
	void RClick()
	{
		Console::WriteLine("新增触发事件，鼠标右击ing。。。。。");
		EventBtnRClick();//对应的事件处理函数为Btn_EventRClick();
	}

public:
	void Btn_EventClick()//事件EventBtnClick处理函数的定义
	{
		Console::WriteLine("你单击了{0}按钮,按钮的名字是{1}", Text, Name);
	}

	void Btn_EventDBClick()//事件EventBtnDBClick处理函数的定义
	{
		Console::WriteLine("你双击了{0}按钮,按钮的名字是{1}", Text, Name);
	}

	//类内定义新增事件EventBtnRClick的处理函数
	void Btn_EventRClick()
	{
		Console::WriteLine("你单击了{0}按钮,按钮的名字是{1}", Text, Name);
	}
};

static void Btn_EventMove()//类外定义事件EventBtnMove的静态处理函数
{
	Console::Write("你移动鼠标在按钮上飘过");
}

int main(array<System::String ^> ^args)
{
	//定义用户对象button1并初始化Name，Text属性
	Buttons ^button1 = gcnew Buttons;
	button1->Name = "Button1";
	button1->Text = "确定";
	//订阅事件  对象button1对应事件EventBtnMove的处理函数为Btn_EventMove
	button1->EventBtnMove += gcnew DelegateButton(Btn_EventMove);
	//引发事件
	button1->Click();//引发事件EventBtnClick
	button1->DBClick();//引发事件EventDBBtnClick
	button1->Move();//引发事件EventBtnMove
	Console::WriteLine("  按钮是{0}", button1->Text);
	//定义用户对象button2并初始化Name，Text属性
	Buttons ^button2 = gcnew Buttons;
	button2->Name = "Button2";
	button2->Text = "取消";
	//订阅事件  对象button2对应事件EventBtnMove的处理函数为Btn_EventMove
	button2->EventBtnMove += gcnew DelegateButton(Btn_EventMove);
	button2->Click();//引发事件EventBtnClick
	button2->DBClick();//引发事件EventDBBtnClick
	button2->Move();//引发事件EventBtnMove
	Console::WriteLine("  按钮是{0}", button2->Text);
	button1->Text = "OK"; //修改对象button1按钮的文本
	button1->Click();
	Console::WriteLine();
	//定义对象button3引发新增的右击事件
	Buttons ^button3 = gcnew Buttons;
	button3->Name = "Button3";
	button3->Text = "新增";
	button3->RClick();
	Console::WriteLine("按钮是{0}", button3->Text);
	return 0;
}
