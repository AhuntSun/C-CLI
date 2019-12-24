#pragma once

namespace EXP2 {
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Note 摘要
	/// </summary>
	public ref class Note : public System::Windows::Forms::Form
	{
	public:
		Note(void)
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
		~Note()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  文件FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^  保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  另存为AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  打印PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  打印预览VToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  关闭CToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  编辑EToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  撤消UToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  重复RToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  剪切TToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  复制CToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  粘贴PToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  全选AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  格式ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  字体ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  颜色ToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::FontDialog^  fontDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;










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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Note::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->文件FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->另存为AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->打印PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->打印预览VToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->关闭CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->编辑EToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->撤消UToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->重复RToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->剪切TToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->复制CToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->粘贴PToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->全选AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->格式ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->字体ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->颜色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->文件FToolStripMenuItem,
					this->编辑EToolStripMenuItem, this->格式ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 25);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->Visible = false;
			// 
			// 文件FToolStripMenuItem
			// 
			this->文件FToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->文件FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->toolStripSeparator,
					this->保存SToolStripMenuItem, this->另存为AToolStripMenuItem, this->toolStripSeparator1, this->打印PToolStripMenuItem, this->打印预览VToolStripMenuItem,
					this->toolStripSeparator2, this->关闭CToolStripMenuItem
			});
			this->文件FToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::MatchOnly;
			this->文件FToolStripMenuItem->MergeIndex = 0;
			this->文件FToolStripMenuItem->Name = L"文件FToolStripMenuItem";
			this->文件FToolStripMenuItem->Size = System::Drawing::Size(58, 21);
			this->文件FToolStripMenuItem->Text = L"文件(&F)";
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(156, 6);
			// 
			// 保存SToolStripMenuItem
			// 
			this->保存SToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->保存SToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"保存SToolStripMenuItem.Image")));
			this->保存SToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->保存SToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->保存SToolStripMenuItem->MergeIndex = 3;
			this->保存SToolStripMenuItem->Name = L"保存SToolStripMenuItem";
			this->保存SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->保存SToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->保存SToolStripMenuItem->Text = L"保存(&S)";
			this->保存SToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::保存ToolStripMenuItem_Click);
			// 
			// 另存为AToolStripMenuItem
			// 
			this->另存为AToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->另存为AToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->另存为AToolStripMenuItem->MergeIndex = 4;
			this->另存为AToolStripMenuItem->Name = L"另存为AToolStripMenuItem";
			this->另存为AToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->另存为AToolStripMenuItem->Text = L"另存为(&A)";
			this->另存为AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::另存为ToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator1->MergeIndex = 5;
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(156, 6);
			// 
			// 打印PToolStripMenuItem
			// 
			this->打印PToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->打印PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印PToolStripMenuItem.Image")));
			this->打印PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印PToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->打印PToolStripMenuItem->MergeIndex = 6;
			this->打印PToolStripMenuItem->Name = L"打印PToolStripMenuItem";
			this->打印PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::P));
			this->打印PToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->打印PToolStripMenuItem->Text = L"打印(&P)";
			// 
			// 打印预览VToolStripMenuItem
			// 
			this->打印预览VToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->打印预览VToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"打印预览VToolStripMenuItem.Image")));
			this->打印预览VToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->打印预览VToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->打印预览VToolStripMenuItem->MergeIndex = 7;
			this->打印预览VToolStripMenuItem->Name = L"打印预览VToolStripMenuItem";
			this->打印预览VToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->打印预览VToolStripMenuItem->Text = L"打印预览(&V)";
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toolStripSeparator2->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->toolStripSeparator2->MergeIndex = 8;
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(156, 6);
			// 
			// 关闭CToolStripMenuItem
			// 
			this->关闭CToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->关闭CToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->关闭CToolStripMenuItem->MergeIndex = 9;
			this->关闭CToolStripMenuItem->Name = L"关闭CToolStripMenuItem";
			this->关闭CToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->关闭CToolStripMenuItem->Text = L"关闭&C";
			this->关闭CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::退出XToolStripMenuItem_Click);
			// 
			// 编辑EToolStripMenuItem
			// 
			this->编辑EToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->编辑EToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(8) {
				this->撤消UToolStripMenuItem,
					this->重复RToolStripMenuItem, this->toolStripSeparator3, this->剪切TToolStripMenuItem, this->复制CToolStripMenuItem, this->粘贴PToolStripMenuItem,
					this->toolStripSeparator4, this->全选AToolStripMenuItem
			});
			this->编辑EToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->编辑EToolStripMenuItem->MergeIndex = 2;
			this->编辑EToolStripMenuItem->Name = L"编辑EToolStripMenuItem";
			this->编辑EToolStripMenuItem->Size = System::Drawing::Size(59, 21);
			this->编辑EToolStripMenuItem->Text = L"编辑(&E)";
			// 
			// 撤消UToolStripMenuItem
			// 
			this->撤消UToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->撤消UToolStripMenuItem->Name = L"撤消UToolStripMenuItem";
			this->撤消UToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->撤消UToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->撤消UToolStripMenuItem->Text = L"撤消(&U)";
			this->撤消UToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::All_Click);
			// 
			// 重复RToolStripMenuItem
			// 
			this->重复RToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->重复RToolStripMenuItem->Name = L"重复RToolStripMenuItem";
			this->重复RToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Y));
			this->重复RToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->重复RToolStripMenuItem->Text = L"重复(&R)";
			this->重复RToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::重复RToolStripMenuItem_Click);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(158, 6);
			// 
			// 剪切TToolStripMenuItem
			// 
			this->剪切TToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->剪切TToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"剪切TToolStripMenuItem.Image")));
			this->剪切TToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->剪切TToolStripMenuItem->Name = L"剪切TToolStripMenuItem";
			this->剪切TToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->剪切TToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->剪切TToolStripMenuItem->Text = L"剪切(&T)";
			this->剪切TToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::剪切TToolStripMenuItem_Click);
			// 
			// 复制CToolStripMenuItem
			// 
			this->复制CToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->复制CToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"复制CToolStripMenuItem.Image")));
			this->复制CToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->复制CToolStripMenuItem->Name = L"复制CToolStripMenuItem";
			this->复制CToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->复制CToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->复制CToolStripMenuItem->Text = L"复制(&C)";
			this->复制CToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::复制CToolStripMenuItem_Click);
			// 
			// 粘贴PToolStripMenuItem
			// 
			this->粘贴PToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->粘贴PToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"粘贴PToolStripMenuItem.Image")));
			this->粘贴PToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->粘贴PToolStripMenuItem->Name = L"粘贴PToolStripMenuItem";
			this->粘贴PToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->粘贴PToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->粘贴PToolStripMenuItem->Text = L"粘贴(&P)";
			this->粘贴PToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::粘贴PToolStripMenuItem_Click);
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(158, 6);
			// 
			// 全选AToolStripMenuItem
			// 
			this->全选AToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->全选AToolStripMenuItem->Name = L"全选AToolStripMenuItem";
			this->全选AToolStripMenuItem->Size = System::Drawing::Size(161, 22);
			this->全选AToolStripMenuItem->Text = L"全选(&A)";
			this->全选AToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::全选AToolStripMenuItem_Click);
			// 
			// 格式ToolStripMenuItem
			// 
			this->格式ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->格式ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->字体ToolStripMenuItem,
					this->颜色ToolStripMenuItem
			});
			this->格式ToolStripMenuItem->MergeAction = System::Windows::Forms::MergeAction::Insert;
			this->格式ToolStripMenuItem->MergeIndex = 3;
			this->格式ToolStripMenuItem->Name = L"格式ToolStripMenuItem";
			this->格式ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->格式ToolStripMenuItem->Text = L"格式";
			// 
			// 字体ToolStripMenuItem
			// 
			this->字体ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->字体ToolStripMenuItem->Name = L"字体ToolStripMenuItem";
			this->字体ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->字体ToolStripMenuItem->Text = L"字体";
			this->字体ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::字体ToolStripMenuItem_Click);
			// 
			// 颜色ToolStripMenuItem
			// 
			this->颜色ToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->颜色ToolStripMenuItem->Name = L"颜色ToolStripMenuItem";
			this->颜色ToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->颜色ToolStripMenuItem->Text = L"颜色";
			this->颜色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Note::颜色ToolStripMenuItem_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(284, 261);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// Note
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Note";
			this->Text = L"Note";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Note::OnClose);
			this->Load += gcnew System::EventHandler(this, &Note::On_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: String ^filename;//编辑的文件名
public: property String ^FileName//属性：用于读写文件名字段，公开给其他类使用
{       //修改文件名时，要同时重新载入相应文件到richTextBox中，并且更改标题
	void set(String ^name)
	{
		filename = name;
		if (Path::GetExtension(filename) == ".rtf"
			|| Path::GetExtension(filename) == ".mtxt"){
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::RichText);//重新载入相应文件到richTextBox中
		}
		else if (Path::GetExtension(filename) == ".txt"){
			this->richTextBox1->LoadFile(filename, RichTextBoxStreamType::PlainText);//重新载入相应文件到richTextBox中
		}
		this->Text = filename + "—编辑器";       //更改标题
	}
	String^ get()
	{
		return filename;
	}
}
		bool DoModified()

		{
			if (this->richTextBox1->Modified == false)return true;

			System::Windows::Forms::DialogResult dlg;

			dlg = MessageBox::Show(L"当前文件中的内容有修改，需要保存吗？", "多文档编辑器", MessageBoxButtons::YesNoCancel);

			if (dlg == System::Windows::Forms::DialogResult::Yes)

			{
				保存ToolStripMenuItem_Click(nullptr, nullptr);

				return true;

			}

			if (dlg == System::Windows::Forms::DialogResult::No)return true;

			if (dlg == System::Windows::Forms::DialogResult::Cancel)return false;

			return false;

		}
	private: System::Void 退出XToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
	menuStrip1->Visible = !this->IsMdiChild;  // 作为MDI子窗体时隐藏菜单栏
}

private: System::Void 另存为ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	saveFileDialog1->Filter = "我的文本文件(*.mtxt)|*.mtxt|Rtf files(*.rtf)|*.rtf|文本文件(*.txt)|*.txt";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->DefaultExt = ".mtxt";
	dlg = saveFileDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		filename = saveFileDialog1->FileName;
	else return;
	try{
		if (Path::GetExtension(saveFileDialog1->FileName) == ".rtf"
			|| Path::GetExtension(saveFileDialog1->FileName) == ".mtxt")  //使用Path类需在前面添加using namespace System::IO;
		{
			this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::RichText);
			this->Text = Path::GetFileName(filename) + "--多文档编辑器";
			richTextBox1->Modified = false;
		}
		else
			if (Path::GetExtension(saveFileDialog1->FileName) == ".txt")
			{
				this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::PlainText);
				this->Text = Path::GetFileName(filename) + "--多文档编辑器";
				richTextBox1->Modified = false;
			}
			else MessageBox::Show(L"选择的不是MTXT、RTF或TXT格式的文件！无效", "错误", MessageBoxButtons::OK);
	}
	catch (IOException ^e)
	{
		String^Message = "无法保存" + filename;
		MessageBox::Show(Message, "保存出错", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	this->Text = filename;
}
private: System::Void 保存ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (filename == nullptr)
		另存为ToolStripMenuItem_Click(this, e);
	else
		try{
		if (Path::GetExtension(filename) == ".rtf"
			|| Path::GetExtension(filename) == ".mtxt") //使用Path类需在前面添加using namespaceSystem::IO;
		{
			this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::RichText);
			this->Text = Path::GetFileName(filename) + "--多文档编辑器";
			richTextBox1->Modified = false;
		}
		else
			if (Path::GetExtension(filename) == ".txt")
			{
				this->richTextBox1->SaveFile(filename, RichTextBoxStreamType::PlainText);
				this->Text = Path::GetFileName(filename) + "--多文档编辑器";
				richTextBox1->Modified = false;
			}
		else MessageBox::Show(L"选择的不是MTXT、RTF或TXT格式的文件！无效", "错误", MessageBoxButtons::OK);
	}
	catch (IOException^e)
	{
		String ^Message = "无法保存" + filename;
		MessageBox::Show(Message, "保存出错", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void OnClose(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	//窗体的FormClosing事件
	e->Cancel = !DoModified();   //当Cancel属性为true时，取消窗体的关闭，否则窗体关闭     
}
private: System::Void All_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Undo();//撤销
	
	
	
}
private: System::Void 重复RToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Redo();//重复
}
private: System::Void 复制CToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Copy();//复制
}
private: System::Void 剪切TToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Cut();//剪切
}
private: System::Void 粘贴PToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->Paste();//粘贴
}
private: System::Void 全选AToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->richTextBox1->SelectAll();//全选

}
private: System::Void 字体ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	dlg = fontDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		this->richTextBox1->SelectionFont = fontDialog1->Font;
}
private: System::Void 颜色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	System::Windows::Forms::DialogResult dlg;
	dlg = colorDialog1->ShowDialog();
	if (dlg == System::Windows::Forms::DialogResult::OK)
		this->richTextBox1->SelectionColor = colorDialog1->Color;
}
};
}
