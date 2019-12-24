// EXP2.1.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;
	
//void alter(double ^a, double ^b) //使用跟踪句柄的方式实现放大器的函数
//{
//	double ^z = a;      //按规则进行放大
//	*a = *a + *b;
//	*b = *z**b;//此方法大大的错
//}


//void Swap(double&a,double&b)  //交换器的函数(运用引用的形式实现)
	//{	double c = a;
	//	a= b;//交换两个数
	//	b = c;}

void alter(double^a, double^b)    //放大器的函数(运用跟踪句柄的形式实现)
{
	double c = *a;
	*a = c + *b;//按规则进行放大
	*b = *b * c;
}
int main(array<System::String ^> ^args)
{		
	//double ^x, ^y;//定义跟踪句柄x,y
//		Console::WriteLine("请输入x，y的值");
//		x = Double::Parse(Console::ReadLine());//输入句柄x指向对象的值
//		y = Double::Parse(Console::ReadLine());;//输入句柄y指向对象的值
//		while (*x != 0.0&& *y != 0.0)  //*x表示句柄x指向对象的值，*y同理，当两个值同时为0时就退出  
//		{	alter(x,y);  //使用放大器
//			//Swap(x, y); //使用交换器
//			Console::WriteLine("经过放大器后x={0}，y={1},",*x,*y); //输出经放大器和交换器后的数值，*x换成x亦可
//			x = Double::Parse(Console::ReadLine());//读入x数据
//			y = Double::Parse(Console::ReadLine());;//读入y数据
//		}
		array<int>^ value = { 3, 5, 6, 8, 6 };

		for each(int item in value)      // 遍历数组

			Console::Write(L"{0, 5}, ", item);

		Console::WriteLine();
		return 0;
	}

