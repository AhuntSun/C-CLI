#pragma once
#include "InputDlg.h"
namespace   {

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
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(216, 64);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(72, 32);
			this->button1->TabIndex = 0;
			this->button1->Text = L"添加";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Tan;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(24, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"学号";
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::Azure;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(24, 144);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(160, 164);
			this->listBox1->TabIndex = 2;
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::Azure;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->IntegralHeight = false;
			this->comboBox1->Location = System::Drawing::Point(24, 64);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 20);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			this->comboBox1->SelectionChangeCommitted += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Tan;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(24, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"学生成绩记录";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(216, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(72, 32);
			this->button2->TabIndex = 5;
			this->button2->Text = L"删除";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Turquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(216, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(72, 32);
			this->button3->TabIndex = 6;
			this->button3->Text = L"修改";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(320, 366);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"学生成绩操作";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//为组合框控件添加SelectedIndexChanged事件处理函数
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		int nIndex = comboBox1->SelectedIndex;//获取组合框选中项索引
		if (nIndex < 0)return;
		StuScore ^stu = safe_cast<StuScore^>(theStudents[nIndex]);//若选中索引不小于0则获取链表中对应索引的数据
		listBox1->Items->Clear();//清空items属性的数据
		listBox1->Items->Add("姓名：" + stu->strName);//依次在items属性中添加姓名
		listBox1->Items->Add("学号：" + stu->strID);//添加学号
		for (int i = 0; i < 3; i++)//添加三门成绩
		{
			String ^str = String::Format("成绩{0}:{1}", i + 1, stu->fScore[i]);
			listBox1->Items->Add(str);
		}
	}
			 private:ArrayList^ theStudents;//创建一个链表对象句柄
//为“添加”按钮添加事件处理函数	
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (theStudents == nullptr)//判断链表是否为空
			theStudents = gcnew ArrayList();//初始化链表对象
		InputDlg ^dlg = gcnew InputDlg;//创建InputDlg对象句柄以调用InputDlg窗体
		if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())//判断是否点击了InputDlg窗体的确认按钮
		{
			StuScore^stu = dlg->theScore;//用InputDlg窗口的StuScore对象初始化该窗口的StuScore对象
			theStudents->Add(stu);//在链表中添加该窗口的StuScore对象
			int nIndex = comboBox1->Items->Add(stu->strID);//在comboBox1的items属性里添加stu的strID属性
			comboBox1->SelectedIndex = nIndex;//把comboBox1的选中项设为stu对象的strID属性
		}
		//检查“姓名”和“学号”的内容不能为空，学号不能有重复项。
		String^ strText = dlg->textBox1->Text;
		strText = strText->Trim();//Trim()函数的作用去除字符串两边的空格
		if (String::IsNullOrEmpty(strText))//判断textBox1的文本是否为空
		{
			MessageBox::Show(L"姓名不能为空！", L"提示");//显示提示语句
			return;
		}

		int nIndex = -1;
		strText = dlg->textBox2->Text;
		strText = strText->Trim();
		nIndex = this->comboBox1->FindString(strText);//查找strText是否有重复项
		if (nIndex >= 0)   // 有重复项
			MessageBox::Show(String::Format("列表项[{0}]已添加过了！", strText), L"提示");//显示提示信息
		else
		{
			StuScore ^stu = dlg->theScore;//StuScore类的类对象取得InputDlg窗口中的姓名、学号、成绩
			theStudents->Add(stu);//在链表中添加姓名、学号、成绩
			int nIndex = comboBox1->Items->Add(stu->strID);//把nIndex的值设为添加的stu数据中的strID属性
			comboBox1->SelectedIndex = nIndex;//选中添加的学号
		}
	}
		 //添加“删除”按钮的事件处理函数
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex < 0) // 判断comboBox1是否有选择项
		this->button2->Enabled = false;//禁用“删除”按钮
	else
		this->button2->Enabled = true;
	int nIndex = this->comboBox1->SelectedIndex;//选中项的索引赋值给nIndex
	if (nIndex >= 0)//组合框选中索引非空
	{
		comboBox1->Items->RemoveAt(nIndex);//删除对应索引的Items值
		comboBox1->SelectedIndex = -1;
		// 取消选择
		listBox1->Items->Clear(); //清空对应的列表框的内容
		theStudents->RemoveAt(nIndex);//删除存在链表中的该索引的信息
		comboBox1->Text = "";//清空组合框中选中显示的学号strID
	}
}
		 //为“修改”按钮添加事件处理函数
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = comboBox1->SelectedIndex;//把选中的学号strID赋值给nIndex，即选中要修改的strID
	InputDlg ^dlg = gcnew InputDlg;//创建InputDlg窗体对象句柄，调用InputDlg 窗口
	dlg->theScore = safe_cast<StuScore^>(theStudents[nIndex]);//在InputDlg窗体中获得选中项的所有信息
	dlg->textBox1->Text = dlg->theScore->strName;//在InputDlg中依次获得：名字
	dlg->textBox2->Text = dlg->theScore->strID;//学号
	dlg->numericUpDown1->Value = (int)(dlg->theScore->fScore[0]);//成绩1
	dlg->numericUpDown2->Value = (int)(dlg->theScore->fScore[1]);//成绩2
	dlg->numericUpDown3->Value = (int)(dlg->theScore->fScore[2]);//成绩3
	if (Windows::Forms::DialogResult::OK == dlg->ShowDialog())//调用的窗口InputDlg是否点击“确认”按钮
	{
		theStudents->RemoveAt(nIndex);//链表中删除相应索引项的数据
		comboBox1->Items->RemoveAt(nIndex);//删除组合框中选中索引的学号
		listBox1->Items->Clear();//清空列表框
		theStudents->Insert(nIndex, dlg->theScore);//在链表中插入修改后的信息
		comboBox1->Items->Add(dlg->theScore->strID);//组合框的items属性中添加修改的学号
		comboBox1->SelectedIndex = nIndex;//选中修改的学号;
	}}
		 //为组合框控件SelectionChangeCommitted事件添加事件处理函数
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->SelectedIndex < 0)   // 判断组合框是是否有任何选择项
		this->button2->Enabled = false;//没有选择项则禁用“修改”按钮
	else
		this->button2->Enabled = true;
}
};
}

