#pragma once

namespace EXP52 {

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
	//在该类的构造函数中调用了InitializeComponent方法，在该方法中初始化该按钮和窗体等控件并且可以添加事件委托
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
			this->Load += gcnew System::EventHandler(this, &Form1::OnLoad);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::OnKeyDown);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::OnKeyPress);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Form1_MouseDown);
			this->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::Mousewheel);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void OnLoad(System::Object^  sender, System::EventArgs^  e) {
		this->Text = L"设置窗体属性";   // 重置标题
		this->CenterToScreen();   // 居中
		this->Opacity = 0.8;   // 透明度为80%
	}

			 //鼠标左键的事件处理函数详细定义
	private: System::Void Form1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		double scale = 1.0;
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			scale = 0.9;
		if (e->Button == System::Windows::Forms::MouseButtons::Right)
			scale = 1.1;
		System::Drawing::Size size = this->Size;
		if (scale != 1.0) {
			int w = (int)(size.Width * scale);
			int h = (int)(size.Height * scale);
			this->Size = System::Drawing::Size(w, h);
		}
	}
			 //鼠标移动的事件处理函数详细定义
	private: System::Void Mousewheel(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		//首先把窗体的显示位置设置为手动
		this->StartPosition = FormStartPosition::Manual;
		System::Drawing::Point pt = this->Location;
		pt.X -= e->Delta / 10;
		pt.Y -= e->Delta / 10;

		this->Location = pt;
	}
			 //KeyDown的事件处理函数详细定义
	private: System::Void OnKeyDown(System::Object^  sender,
		System::Windows::Forms::KeyEventArgs^  e)
	{
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
			 //KeyPress的事件处理函数详细定义
	private: System::Void OnKeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
		if (e->KeyChar == (wchar_t)(System::Windows::Forms::Keys::Escape))
			this->Close();
		else {
			String^ str = String::Concat(L"KeyPress: ", 
				e->KeyChar.ToString());
			this->Text = str; //测试使用和注释这条语句所产生的效果
			//MessageBox::Show(str);
		}
	}
};
}

