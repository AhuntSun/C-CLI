#pragma once

namespace 我的星期去哪了 {

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
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox2;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox3;
	protected:


	protected:

	protected:




	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox2 = (gcnew System::Windows::Forms::CheckedListBox());
			this->checkedListBox3 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::PeachPuff;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(8, 16);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(152, 172);
			this->checkedListBox1->TabIndex = 0;
			// 
			// checkedListBox2
			// 
			this->checkedListBox2->BackColor = System::Drawing::Color::PeachPuff;
			this->checkedListBox2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox2->FormattingEnabled = true;
			this->checkedListBox2->Location = System::Drawing::Point(264, 16);
			this->checkedListBox2->Name = L"checkedListBox2";
			this->checkedListBox2->Size = System::Drawing::Size(152, 172);
			this->checkedListBox2->TabIndex = 1;
			// 
			// checkedListBox3
			// 
			this->checkedListBox3->BackColor = System::Drawing::Color::PeachPuff;
			this->checkedListBox3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->checkedListBox3->FormattingEnabled = true;
			this->checkedListBox3->Location = System::Drawing::Point(8, 208);
			this->checkedListBox3->Name = L"checkedListBox3";
			this->checkedListBox3->Size = System::Drawing::Size(408, 130);
			this->checkedListBox3->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Gold;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(176, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"->";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(176, 64);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 4;
			this->button2->Text = L">>";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Gold;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(176, 112);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 32);
			this->button3->TabIndex = 5;
			this->button3->Text = L"<-";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Gold;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(176, 160);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(72, 32);
			this->button4->TabIndex = 6;
			this->button4->Text = L"<<";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(430, 348);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkedListBox3);
			this->Controls->Add(this->checkedListBox2);
			this->Controls->Add(this->checkedListBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"我的星期都去哪了";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		//添加窗口Load事件的事件处理函数
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		// 初始化事件在左侧的checkedListBox加载星期信息：星期一到星期五
		checkedListBox1->Items->Add("星期一");
		checkedListBox1->Items->Add("星期二");
		checkedListBox1->Items->Add("星期三");
		checkedListBox1->Items->Add("星期四");
		checkedListBox1->Items->Add("星期五");
		checkedListBox1->Items->Add("星期六");
		checkedListBox1->Items->Add("星期日");
		checkedListBox1->CheckOnClick = true;
		checkedListBox2->CheckOnClick = true;
		checkedListBox3->CheckOnClick = true;
	}
			 //为“->”按钮添加事件处理函数
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	// 部分项移至右侧->
	for each (String^ o in checkedListBox1->CheckedItems)//运用foreach循环遍历checkedListBox1中选中项的星期信息
	{
		checkedListBox2->Items->Add(o);//把选中项的星期信息添加到checkedListBox2的Items属性中
	}
	for (int i = checkedListBox1->Items->Count-1; i >=0; i--)//遍历 checkedListBox1里Items属性的数据
	{
		if (checkedListBox1->CheckedItems->Contains(checkedListBox1->Items[i]))//判断checkedListBox1选中的Items属性是否在checkedListBox1中
		{
			checkedListBox3->Items->Add(checkedListBox1->Items[i]->ToString() + "被移至右侧");//在checkedListBox3的Items属性中添加相应信息
			checkedListBox1->Items->Remove(checkedListBox1->Items[i]);//删除checkedListBox1中Items属性的选中项
		}
	}
}
		 //为“<<”按钮添加事件处理函数
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	// 右侧全部移至左侧<<
	for each (String^  o in checkedListBox2->Items)//遍历checkedListBox2的Items属性
	{
		checkedListBox1->Items->Add(o);//在checkedListBox1中添加checkedListBox2的Items属性
	}
	checkedListBox2->Items->Clear();//清空checkedListBox2的Items属性
	checkedListBox3->Items->Add("右侧全部移到左侧");//在checkedListBox3的Items中添加相应信息
}
		 //为"<-"按钮添加事件处理函数
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	// 右侧移到左侧部分项<-
	for each (String^  o in checkedListBox2->CheckedItems)//遍历checkedListBox2中的选中项
	{
		checkedListBox1->Items->Add(o);//在checkedListBox1中添加checkedListBox2中的选中项
	}
	for (int i = checkedListBox2->Items->Count-1; i >=0; i--)//遍历 checkedListBox2里Items属性的数据
	{
		if (checkedListBox2->CheckedItems->Contains(checkedListBox2->Items[i]))//判断checkedListBox2选中的Items属性是否在checkedListBox2中
		{
			checkedListBox3->Items->Add(checkedListBox2->Items[i]->ToString() + "被移至左侧"); //在checkedListBox3的Items属性中添加相应信息
			checkedListBox2->Items->Remove(checkedListBox2->Items[i]);//删除checkedListBox2中Items属性的选中项
		}
	}
}
		 //为“>>”按钮添加事件处理函数
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	// 左侧全部移到右侧>>
	for each (String^ o in checkedListBox1->Items)//遍历checkedListBox1的Items属性
	{
		checkedListBox2->Items->Add(o);//在checkedListBox2中添加checkedListBox1的Items属性
	}
	checkedListBox1->Items->Clear();//清空checkedListBox1的Items属性
	checkedListBox3->Items->Add("左侧全部移到右侧");//在checkedListBox3的Items中添加相应信息
}
};
}

