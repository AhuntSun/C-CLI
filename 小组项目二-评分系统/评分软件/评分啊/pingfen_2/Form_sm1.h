#pragma once

namespace pingfen_2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form_sm1 ժҪ
	/// </summary>
	public ref class Form_sm1 : public System::Windows::Forms::Form
	{
	public:
		Form_sm1(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~Form_sm1()
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(36, 41);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(269, 63);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Ԥ�Ƚ�ѡ���������ݽ����⣬��ί��Ϣ¼�����\r\n�ְ汾�ѽ�������Ϣ¼��";
			// 
			// Form_sm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 166);
			this->Controls->Add(this->textBox1);
			this->Name = L"Form_sm1";
			this->Text = L"˵��";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
