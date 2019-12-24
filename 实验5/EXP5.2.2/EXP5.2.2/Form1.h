#pragma once

namespace EXP522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 ժҪ
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::Form1_KeyPress);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		int nXStep = 0, nYStep = 0;
		System::Drawing::Point pt = this->Location;
		String ^str, ^strShift, ^strCtrl, ^strAlt;
		switch (e->KeyData) {
		case System::Windows::Forms::Keys::Up:      //����  
			nYStep = -1;    break;
		case System::Windows::Forms::Keys::Down: //����
			nYStep = 1;           break;
		case System::Windows::Forms::Keys::Left:    //����
			nXStep = -1; break;
		case System::Windows::Forms::Keys::Right: // ����
			nXStep = 1;           break;
		default:
			if (e->Shift) strShift = L"Shift + ";      else strShift = L"";
			if (e->Control) strCtrl = L"Ctrl + ";     else strCtrl = L"";
			if (e->Alt) strAlt = L"Alt + ";      else strAlt = L"";
			str = String::Concat(L"KeyDown: ", strShift, strCtrl, strAlt, e->KeyCode);
			this->Text = str;
			break;
		}
		if ((nXStep != 0) || (nYStep != 0))
		{
			pt.X += nXStep;             pt.Y += nYStep;
			this->StartPosition = FormStartPosition::Manual;
			this->Location = pt;
		}
	}
	private: System::Void Form1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (wchar_t)(System::Windows::Forms::Keys::Escape))
			this->Close();
		else {
			String^ str = String::Concat(L"KeyPress: ", e->KeyChar.ToString());
			this->Text = str; //����ʹ�ú�ע�����������������Ч��
			//MessageBox::Show(str);
		}
	}
};
}

