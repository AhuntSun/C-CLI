#pragma once

namespace EXP522 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
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
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
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
		case System::Windows::Forms::Keys::Up:      //向上  
			nYStep = -1;    break;
		case System::Windows::Forms::Keys::Down: //向下
			nYStep = 1;           break;
		case System::Windows::Forms::Keys::Left:    //向左
			nXStep = -1; break;
		case System::Windows::Forms::Keys::Right: // 向右
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
			this->Text = str; //测试使用和注释这条语句所产生的效果
			//MessageBox::Show(str);
		}
	}
};
}

