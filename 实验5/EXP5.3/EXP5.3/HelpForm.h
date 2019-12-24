#pragma once

namespace EXP53 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// HelpForm 摘要
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
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
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(1, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(317, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"用鼠标拖动游戏窗体使其与主窗体的左上角重合。";
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(320, 120);
			this->Controls->Add(this->label1);
			this->Name = L"HelpForm";
			this->Text = L"游戏说明窗口";
			this->Load += gcnew System::EventHandler(this, &HelpForm::HelpForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void HelpForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
