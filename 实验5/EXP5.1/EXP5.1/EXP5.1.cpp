// EXP5.1.cpp: 主项目文件。

#include "stdafx.h"
#include "Form1.h"

using namespace EXP51;

[STAThreadAttribute]//指定了COM线程模型（STA）为单线程
int main(array<System::String ^> ^args)//窗口应用程序的入口函数
{
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();//启动可视化样式
	Application::SetCompatibleTextRenderingDefault(false); //设置新控件的文本渲染方式
	//false：GDI+方式；true：传统的GDI方式

	// 创建主窗口并运行它
	Application::Run(gcnew Form1());//当前线程上开始运行标准应用程序消息循环
	//Form1表示将参数指定Form实例的窗体显示
	return 0;
}
