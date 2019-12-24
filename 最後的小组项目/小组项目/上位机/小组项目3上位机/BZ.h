#pragma once

namespace 小组项目3上位机 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// BZ 摘要
	/// </summary>
	public ref class BZ : public System::Windows::Forms::Form
	{
	public:
		BZ(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~BZ()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"楷体", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(17, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(337, 312);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"\r\n   本监测系统可实时显示三个\r\n下位机传输的参数，将参数\r\n绘制在曲线图中，并且可以\r\n显示实时数据的平均值。系\r\n统将数据存入数据库，可以\r\n通过调入数据"
				L"库查看数据库\r\n存储的历史数据。";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &BZ::textBox1_TextChanged);
			// 
			// BZ
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->ClientSize = System::Drawing::Size(379, 350);
			this->Controls->Add(this->textBox1);
			this->Name = L"BZ";
			this->Text = L"BZ";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
