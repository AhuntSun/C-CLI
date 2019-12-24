#pragma once
using namespace System;
//在.h头文件中定义StuScore引用类
ref class StuScore
{
public:
	StuScore(void);//构造函数
	String ^strName;//数据成员
	String ^strID;
	array <float>^ fScore;//数组
};

