#pragma once

namespace С����Ŀ3��λ�� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// BZ ժҪ
	/// </summary>
	public ref class BZ : public System::Windows::Forms::Form
	{
	public:
		BZ(void)
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
			this->textBox1->Font = (gcnew System::Drawing::Font(L"����", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->textBox1->Location = System::Drawing::Point(17, 13);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(337, 312);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"\r\n   �����ϵͳ��ʵʱ��ʾ����\r\n��λ������Ĳ�����������\r\n����������ͼ�У����ҿ���\r\n��ʾʵʱ���ݵ�ƽ��ֵ��ϵ\r\nͳ�����ݴ������ݿ⣬����\r\nͨ����������"
				L"��鿴���ݿ�\r\n�洢����ʷ���ݡ�";
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
