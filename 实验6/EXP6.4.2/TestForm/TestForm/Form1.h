#pragma once

namespace TestForm {

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
	private: System::Windows::Forms::Button^  button1;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(32, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(208, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"测试窗口";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 166);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"测试窗口";
			this->ResumeLayout(false);

		}
		using namespace MessageBox;
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		DialogResult dr;

		dr = MessageBox.Show("测试一下消息对话框！", "测试测试", MessageBoxButtons.YesNoCancel, MessageBoxIcon.Warning, MessageBoxDefaultButton.Button1);

		if (dr == DialogResult.Yes)

			MessageBox.Show("你选择的为“是”按钮", "系统提示1");

		else if (dr == DialogResult.No)

			MessageBox.Show("你选择的为“否”按钮", "系统提示2");

		else if (dr == DialogResult.Cancel)

			MessageBox.Show("你选择的为“取消”按钮", "系统提示3");

		else

			MessageBox.Show("你没有进行任何的操作！", "系统提示4");
	}
	};
}

