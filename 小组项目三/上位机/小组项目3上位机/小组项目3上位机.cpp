// С����Ŀ3��λ��.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"

using namespace С����Ŀ3��λ��;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	Application::Run(gcnew Form1());
	return 0;
}
