// ѧ���ɼ�����.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"
//#include "InputDlg.h"

using namespace ѧ���ɼ�����;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// ���������ڲ�������
	Application::Run(gcnew Form1());
	//Application::Run(gcnew InputDlg());
	return 0;
}
