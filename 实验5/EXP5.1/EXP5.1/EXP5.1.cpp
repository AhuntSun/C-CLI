// EXP5.1.cpp: ����Ŀ�ļ���

#include "stdafx.h"
#include "Form1.h"

using namespace EXP51;

[STAThreadAttribute]//ָ����COM�߳�ģ�ͣ�STA��Ϊ���߳�
int main(array<System::String ^> ^args)//����Ӧ�ó������ں���
{
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();//�������ӻ���ʽ
	Application::SetCompatibleTextRenderingDefault(false); //�����¿ؼ����ı���Ⱦ��ʽ
	//false��GDI+��ʽ��true����ͳ��GDI��ʽ

	// ���������ڲ�������
	Application::Run(gcnew Form1());//��ǰ�߳��Ͽ�ʼ���б�׼Ӧ�ó�����Ϣѭ��
	//Form1��ʾ������ָ��Formʵ���Ĵ�����ʾ
	return 0;
}
