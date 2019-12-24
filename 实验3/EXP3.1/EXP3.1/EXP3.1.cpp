#include "stdafx.h"
#include "stdlib.h"
using namespace System;
ref class Cube
{
private:
	double Length, Heigt, Width, Volume;// 长,高,宽和体积
public:
	Cube() : Length(0), Width(0), Heigt(0)// 显式默认构造函数（无参）
	{
		Volume = Length * Width * Heigt;
		Console::WriteLine(L"默认构造函数，体积为：{0}", Volume);//输出调用情况
	}
	
	Cube(double l, double w, double h) : Length(l), Width(w), Heigt(h)//有三个参构造函数
	{
		Volume = Length * Width * Heigt;
		Console::WriteLine(L"有参构造函数，体积为：{0}", Volume);
	}
	
	Cube(double l, double w) : Length(l), Width(w)//有两个参数的构造函数
	{	Volume = Length * Width;
		Console::WriteLine(L"2个参数的构造函数，面积为：{0}", Volume);
	}
	
	Cube(Cube ^cube)//复制构造函数:左起的第一个参数是引用类的跟踪句柄
	{	Length = cube->Length;
		Width = cube->Width;
		Heigt = cube->Heigt;
		Volume = Length * Width* Heigt;;
		Console::WriteLine(L"A3个参数的复制构造函数，体积为：{0}", Volume);
	}

	Cube(Cube %cube) //复制构造函数:左起的第一个参数是引用类的引用对象
	{ 
		Length = cube.Length;
		Width = cube.Width;
		Heigt = cube.Heigt;
		Volume = Length * Width* Heigt;;
		Console::WriteLine(L"B3个参数的复制构造函数，体积为：{0}", Volume);
	}

	~Cube()//定义析构函数
	{
		Console::WriteLine("调用析造函数，体积为：{0}", Volume );
	}
	
	!Cube()//定义终结器函数
	{
		Console::WriteLine(L"调用终结函数，体积为：{0}", Volume);
	}

	literal double p = 0.9;//在字面值字段中定义参数p
	void ShowQua(void)
	{
		Console::WriteLine("这个立方体的质量为：{0}", Volume*p);
	}
	
	double Length, Width, Volume;
	initonly double Heigt;//把高定义为只读字段

	Cube(double l, double w) : Length(l), Width(w)
	{
		Volume = Length * Width;
		Heigt = 2 * Heigt;  //只能在构造函数中修改只读句段
		Console::WriteLine(L"2个参数的构造函数，面积为：{0}", Volume);

	}
	void ShowQua(void)
	{
		Heigt = 2 * Heigt; //不能在构造函数外修改只读句段
		Console::WriteLine("这个立方体的质量为：{0}", Volume*p);
	}

	void ShowRes(void)//成员函数，实现输出立方体的体积
	{
		Console::WriteLine("这个立方体的体积为：{0}", Volume);
	}
};
int main(array<System::String ^> ^args)
{
	Cube^ cube1 = gcnew Cube;// A:调用无参构造函数
	Cube^ cube2 = gcnew Cube(4, 5, 6);// B:调用有参构造函数
	Cube  a, b(2, 3, 4);//直接定义Cube对象a，b，a调用无参构造函数。b调用有参构造函数
	Cube  c(4, 5);//定义两个参数的对象
	Cube ^d = gcnew Cube(5, 6);//定义两个对象的参数跟踪句柄
	Cube ^cube3 = gcnew Cube(cube2);//A:调用跟踪句柄复制构造函数构造对象
	Cube ^cube4 = gcnew Cube(*cube2);//B:调用引用类复制构造函数构造对象
	Cube cube5(cube2);//A:调用跟踪句柄复制构造函数构造对象
	Cube ^cube6 = gcnew Cube(b);//B:调用引用类复制构造函数构造对象
	Cube cube7(b);//B:调用引用类复制构造函数构造对象
	delete cube2;//释放对象cube2内存空间，之后可少调用一次析构函数
	cube2->ShowRes();
	cube2->ShowQua();//调用字面值字段中的函数求密度
	system("pause");
	return 0;
}