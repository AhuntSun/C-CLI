#pragma once

namespace EXP3 {

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
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::NumericUpDown^  posYud;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  posXud;
	private: System::Windows::Forms::Label^  label1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->posYud = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->posXud = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posYud))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posXud))->BeginInit();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->splitContainer1->Panel1->Controls->Add(this->posYud);
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->posXud);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->splitContainer1->Panel2->Cursor = System::Windows::Forms::Cursors::Cross;
			this->splitContainer1->Panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::On_2Paint);
			this->splitContainer1->Panel2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::On_2MouseDown);
			this->splitContainer1->Size = System::Drawing::Size(384, 221);
			this->splitContainer1->SplitterDistance = 141;
			this->splitContainer1->TabIndex = 0;
			// 
			// posYud
			// 
			this->posYud->Location = System::Drawing::Point(72, 104);
			this->posYud->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->posYud->Name = L"posYud";
			this->posYud->Size = System::Drawing::Size(48, 21);
			this->posYud->TabIndex = 3;
			this->posYud->ValueChanged += gcnew System::EventHandler(this, &Form1::On_1ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(16, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Y����";
			// 
			// posXud
			// 
			this->posXud->Location = System::Drawing::Point(72, 56);
			this->posXud->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->posXud->Name = L"posXud";
			this->posXud->Size = System::Drawing::Size(48, 21);
			this->posXud->TabIndex = 1;
			this->posXud->ValueChanged += gcnew System::EventHandler(this, &Form1::On_1ValueChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"����", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(16, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(51, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"X����";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(384, 221);
			this->Controls->Add(this->splitContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"�зִ������";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posYud))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->posXud))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
			   private: Drawing::Point m_ptPos;
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		m_ptPos = Drawing::Point(0, 0);     // ���õ�λ������ĳ�ֵ
		// ������ߴ����пؼ�����ֵ
		this->posXud->Value = (Decimal)m_ptPos.X;
		this->posYud->Value = (Decimal)m_ptPos.Y;
		// �����ұߴ���Panel2�е�����
		this->splitContainer1->Panel2->Invalidate();
	}
private: System::Void On_2Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	Graphics^ pGH = e->Graphics;
	Rectangle rc = Rectangle(m_ptPos.X - 4, m_ptPos.Y - 4, 8, 8);
	pGH->FillRectangle(Brushes::Blue, rc);
}
private: System::Void On_2MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	// ������ߴ����пؼ�����ֵ        
	this->posXud->Value = (Decimal)e->X;
	this->posYud->Value = (Decimal)e->Y;
}
private: System::Void On_1ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	m_ptPos.X = (int)posXud->Value;
	m_ptPos.Y = (int)posYud->Value;
	this->splitContainer1->Panel2->Invalidate();
}
};
}

