#pragma once

namespace pingfen_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Publish_sm 摘要
	/// </summary>
	public ref class Publish_sm : public System::Windows::Forms::Form
	{
	public:
		Publish_sm(void)
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
		~Publish_sm()
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
			this->textBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"宋体", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(40, 37);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(218, 50);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"最后得分是去掉\r\n最高分最低分后的平均分";
			// 
			// Publish_sm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(296, 139);
			this->Controls->Add(this->textBox1);
			this->Name = L"Publish_sm";
			this->Text = L"说明";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
