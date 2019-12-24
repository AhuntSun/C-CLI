// EXP2.3.cpp: 主项目文件。
#include "stdafx.h"
using namespace System;
#include<time.h>
#include"stdlib.h"
void shuffle(int wDeck[4][13])//洗牌函数
{  
	int r;
	int card, row, column;//定义变量
	for (card = 1; card <= 52; card++)//遍历二维数组
	{
		r = rand();
		row = r % 4;
		r = rand();
		column = r % 13;
		while (wDeck[row][column] != 0)//已发牌，再产生
		{  
			r = rand();
			row = r % 4;
			r = rand();
			column = r % 13;
		}
		wDeck[row][column] = card;
	}
}

void deal(int wDeck[4][13], array<String^>^ wFace, array<String^>^ wSuit, array<String^, 2>^ wPai) //发牌函数
{ 
	int card, row, column;//定义变量
	Console::WriteLine(L"       A                      B                       C                       D");//输出指示
	for (card = 1; card <= 52; card++)
	{
		for (row = 0; row <= 3; row++)
		{
			for (column = 0; column <= 12; column++)//嵌套for循环实现发牌
			{
				if (wDeck[row][column] == card)
				{
					wPai[(card - 1) % 4, (card - 1) % 13] = wFace[column] + " of " + wSuit[row];
					if ((card - 1) % 4 == 3)
					{
						Console::WriteLine(L"{0,5} of {1,-8}", wFace[column], wSuit[row]);//按格式输出结果
					}
					else
						Console::Write(L"{0,5} of {1,-8}\t", wFace[column], wSuit[row]);
				}
			}
		}
	}
}

void sort(array<String^, 2>^ wPai)//实现整理功能的函数
{
	int card, row, column;
	array<String^>^ sPai = gcnew array<String^>(52);
	for (row = 0; row <= 3; row++)
	{
		for (column = 0; column <= 12; column++)
			sPai[row * 13 + column] = wPai[row, column];
	}
	for (row = 0; row <= 3; row++)
	{
		Array::Sort(sPai, row * 13, 13);//排序函数对sPai实现排序
	}
	Console::WriteLine(L"       A                      B                       C                       D");//输出指示
	for (column = 0; column <= 12; column++)
		Console::WriteLine(L"    {0,-19},    {1,-19},    {2,-19},    {3,-19}",
		sPai[column], sPai[13 + column], sPai[26 + column], sPai[39 + column]);
}

int main(array<System::String ^> ^args)
{		array<String^>^ wSuit = { "Hearts", "Diamonds", "Clubs", "Spades" };//定义存放牌属性 的数组
		array<String^>^ wFace = { "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };//定义存放牌种类的数组
		array<String^, 2>^ wPai = gcnew  array<String^, 2>(4, 13);   //定义二维数组
		int wDeck[4][13] = { 0 };//把二维数组置零
		array<array<String^>^>^ sPai = gcnew array<array<String^>^>(4);//定义数组的组数
		int card, row;
		sPai[card % 4][card % 13] = wFace[column] + " of " + wSuit[row];//发牌时
		for (row = 0; row <= 3; row++)//进行每个人的排序
		{
			Array::Sort(sPais[row]);
		}
		for (column = 0; column <= 12; column++)
			Console::WriteLine(L"{0,-19}  ,  {1,-19},   {2,-19} ,{3,-19}",
			sPai[0][column], Pais[1][column], Pais[2][column], Pais[3][column]);//整理输出
		for (row = 0; row < 4;row++)//初始化数组的数组
			sPai[row] = gcnew array<String^>(13);

		Console::WriteLine(L"发牌如下：");
		srand(unsigned(time(NULL)));
		shuffle(wDeck);    //调用洗牌函数
		deal(wDeck, wFace, wSuit, wPai);  //调用发牌函数
		Console::WriteLine(L"排序整理后的牌如下：");
		sort(wPai);  //调用整理排序及输出函数
    return 0;
}
