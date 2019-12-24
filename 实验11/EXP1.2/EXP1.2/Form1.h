#pragma once
#define SHGFI_ICON              0x100      

#define SHGFI_LARGEICON         0x0         /*大图标*/

#define SHGFI_SMALLICON         0x1         /*小图标*/

#define SHGFI_OPENICON          0x2         /*文件夹打开时的图标*/

#define SHGFI_SELECTED          0x10000     /*选定状态下的图标*/
namespace EXP12 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;     //I/O操作支持
	using namespace System::Runtime::InteropServices;   // 平台调用支持
	
	/*[Struct Layout(LayoutKind::Sequential)]

	public value struct SHFILEINFO

	{

	public:

	IntPtr  hIcon;

	int     iIcon;

	UInt32  dwAttributes;

	[Marshal As(UnmanagedType::ByValTStr, SizeConst = 260)]

	String^ szDisplayName;

	[Marshal As(Unmanaged Type::ByValTStr, SizeConst = 80)]

	String^ szTypeName;

	};

	[DllImport("shell32.dll")]

	extern "C"void* SHGetFileInfo(String^ pszPath, UInt32 dwFileAttributes,

	SHFILEINFO% psfi, UInt32 cbSizeFileInfo, UInt32 uFlags);*/
	[StructLayout(LayoutKind::Sequential)]

	public value struct SHFILEINFO

	{

	public:

		IntPtr  hIcon;

		int     iIcon;

		UInt32  dwAttributes;

		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 260)]

		String^ szDisplayName;

		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 80)]

		String^ szTypeName;

	};

	[DllImport("shell32.dll")]

	extern "C"void* SHGetFileInfo(String^ pszPath, UInt32 dwFileAttributes,

		SHFILEINFO% psfi, UInt32 cbSizeFileInfo, UInt32 uFlags);
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
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::SplitContainer^  splitContainer2;
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::SplitContainer^  splitContainer3;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ImageList^  imageList2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->splitContainer2 = (gcnew System::Windows::Forms::SplitContainer());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->splitContainer3 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->BeginInit();
			this->splitContainer2->Panel1->SuspendLayout();
			this->splitContainer2->Panel2->SuspendLayout();
			this->splitContainer2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->BeginInit();
			this->splitContainer3->Panel1->SuspendLayout();
			this->splitContainer3->Panel2->SuspendLayout();
			this->splitContainer3->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			this->splitContainer1->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer1->Panel1->Controls->Add(this->label2);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->splitContainer2);
			this->splitContainer1->Size = System::Drawing::Size(808, 505);
			this->splitContainer1->SplitterDistance = 49;
			this->splitContainer1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(464, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 3;
			this->label2->Text = L"文件视图";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(80, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 2;
			this->label1->Text = L"目录视图";
			// 
			// splitContainer2
			// 
			this->splitContainer2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer2->Location = System::Drawing::Point(0, 0);
			this->splitContainer2->Name = L"splitContainer2";
			// 
			// splitContainer2.Panel1
			// 
			this->splitContainer2->Panel1->Controls->Add(this->treeView1);
			// 
			// splitContainer2.Panel2
			// 
			this->splitContainer2->Panel2->Controls->Add(this->splitContainer3);
			this->splitContainer2->Size = System::Drawing::Size(808, 452);
			this->splitContainer2->SplitterDistance = 214;
			this->splitContainer2->TabIndex = 0;
			// 
			// treeView1
			// 
			this->treeView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->treeView1->ImageIndex = 0;
			this->treeView1->ImageList = this->imageList1;
			this->treeView1->Location = System::Drawing::Point(0, 0);
			this->treeView1->Name = L"treeView1";
			this->treeView1->SelectedImageIndex = 0;
			this->treeView1->Size = System::Drawing::Size(214, 452);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &Form1::On_AfterSel);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// splitContainer3
			// 
			this->splitContainer3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer3->Location = System::Drawing::Point(0, 0);
			this->splitContainer3->Name = L"splitContainer3";
			this->splitContainer3->Orientation = System::Windows::Forms::Orientation::Horizontal;
			// 
			// splitContainer3.Panel1
			// 
			this->splitContainer3->Panel1->Controls->Add(this->listView1);
			// 
			// splitContainer3.Panel2
			// 
			this->splitContainer3->Panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->splitContainer3->Panel2->Controls->Add(this->button4);
			this->splitContainer3->Panel2->Controls->Add(this->button3);
			this->splitContainer3->Panel2->Controls->Add(this->button2);
			this->splitContainer3->Panel2->Controls->Add(this->button1);
			this->splitContainer3->Size = System::Drawing::Size(590, 452);
			this->splitContainer3->SplitterDistance = 358;
			this->splitContainer3->TabIndex = 0;
			// 
			// listView1
			// 
			this->listView1->BackColor = System::Drawing::SystemColors::Info;
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->GridLines = true;
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(590, 358);
			this->listView1->SmallImageList = this->imageList2;
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->DoubleClick += gcnew System::EventHandler(this, &Form1::On_DoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"文件名称";
			this->columnHeader1->Width = 150;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"类型";
			this->columnHeader2->Width = 100;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"大小";
			this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->columnHeader3->Width = 80;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"创建时间";
			this->columnHeader4->Width = 120;
			// 
			// imageList2
			// 
			this->imageList2->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList2->ImageSize = System::Drawing::Size(16, 16);
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(432, 24);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(104, 24);
			this->button4->TabIndex = 6;
			this->button4->Text = L"删除文件夹";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(312, 24);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(104, 24);
			this->button3->TabIndex = 4;
			this->button3->Text = L"新建文件夹";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(184, 24);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 24);
			this->button2->TabIndex = 5;
			this->button2->Text = L"删除文件";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(56, 24);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 24);
			this->button1->TabIndex = 3;
			this->button1->Text = L"新建文本文件";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 483);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(808, 22);
			this->statusStrip1->TabIndex = 2;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(131, 17);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 505);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->splitContainer1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"资源管理器";
			this->Load += gcnew System::EventHandler(this, &Form1::On_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->splitContainer2->Panel1->ResumeLayout(false);
			this->splitContainer2->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer2))->EndInit();
			this->splitContainer2->ResumeLayout(false);
			this->splitContainer3->Panel1->ResumeLayout(false);
			this->splitContainer3->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer3))->EndInit();
			this->splitContainer3->ResumeLayout(false);
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void On_Load(System::Object^  sender, System::EventArgs^  e) {
		// 设置最高的颜色深度以使获取的图标为最佳

		imageList1->ColorDepth = ColorDepth::Depth32Bit;

		imageList2->ColorDepth = ColorDepth::Depth32Bit;

		// 创建树视图控件的初始节点

		array<String^>^strDrivers = Directory::GetLogicalDrives();

		array<TreeNode^>^nodes = gcnew array<TreeNode^>(strDrivers->Length);

		for (int i = 0; i < strDrivers->Length; i++) {

			String^ str = strDrivers[i];

			// 获取驱动器图标

			SHFILEINFO fi;

			SHGetFileInfo(str, 0, fi, sizeof(fi), SHGFI_ICON | SHGFI_SMALLICON);

			imageList1->Images->Add(Drawing::Icon::FromHandle(fi.hIcon));

			// 创建节点

			nodes[i] = gcnew TreeNode(str, i, i);

		}

		treeView1->Nodes->AddRange(nodes);

		// 在添加文件夹(目录)正常和打开的图标

		SHFILEINFO fi;

		SHGetFileInfo("c:\\windows", 0, fi, sizeof(fi), SHGFI_ICON | SHGFI_SMALLICON);

		imageList1->Images->Add(Drawing::Icon::FromHandle(fi.hIcon));

		SHGetFileInfo("c:\\windows", 0, fi, sizeof(fi), SHGFI_ICON | SHGFI_OPENICON);

		imageList1->Images->Add(Drawing::Icon::FromHandle(fi.hIcon));

		toolStripStatusLabel1->Text = L"资源管理器 Version 1.0.0";
	}


private: System::Void On_AfterSel(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
	// 根据当前目录下的子目录更新当前节点

	TreeNode^curNode = e->Node;

	String^curPath = curNode->FullPath;

	curPath = curPath->Replace("\\\\", "\\");

	array<String^>^ dirs;

	try{

		dirs = Directory::GetDirectories(curPath);

	}

	catch (IOException^ /*e*/)

	{

		listView1->Items->Clear();

		return;

	}

	int nImageLastIndex = imageList1->Images->Count - 1;

	if ((dirs->Length) > 0) {

		array<TreeNode^>^ nodes = gcnew array<TreeNode^>(dirs->Length);

		for (int i = 0; i < dirs->Length; i++) {

			String^ str = dirs[i];

			// 取路径中最后的目录名称

			int nIndex = str->LastIndexOf("\\");

			str = str->Substring(nIndex + 1);

			// 创建节点

			nodes[i] = gcnew TreeNode(str, nImageLastIndex - 1, nImageLastIndex);

		}

		curNode->Nodes->Clear();//?

		curNode->Nodes->AddRange(nodes);

	}

	// 根据当前目录下的文件更新列表视图控件

	array<String^>^ files = Directory::GetFiles(curPath);

	imageList2->Images->Clear();// 清空图像列表

	listView1->Items->Clear();// 清除列表项

	if (files->Length > 0) {

		array<ListViewItem^>^ items = gcnew array<ListViewItem^>(files->Length);

		for (int i = 0; i < files->Length; i++) {

			String^ str = files[i];

			// 获取文件图标

			SHFILEINFO fi;

			SHGetFileInfo(str, 0, fi, sizeof(fi), SHGFI_ICON | SHGFI_SMALLICON);

			imageList2->Images->Add(Drawing::Icon::FromHandle(fi.hIcon));

			// 取路径中最后的文件名称

			int nIndex = str->LastIndexOf("\\");

			String^ strFileName = str->Substring(nIndex + 1);

			// 创建列表项

			items[i] = gcnew ListViewItem(strFileName, i);

			FileInfo^ fInfo = gcnew FileInfo(str);

			items[i]->SubItems->Add(String::Concat(fInfo->Extension, " 文件"));

			if (fInfo->Length > 1024)

				items[i]->SubItems->Add(String::Concat(

				(fInfo->Length / 1024).ToString(), "K"));

			else

				items[i]->SubItems->Add((fInfo->Length).ToString());

			items[i]->SubItems->Add((fInfo->CreationTime).ToString());

		}

		listView1->Items->AddRange(items);

	}

	// 在状态栏上显示信息

	toolStripStatusLabel1->Text = String::Concat("在目录【", curPath, "】下，有 ",

		dirs->Length.ToString(), " 个子目录，有 ", files->Length.ToString(), " 个文件！");
}
private: System::Void On_DoubleClick(System::Object^  sender, System::EventArgs^  e) {
	TreeNode^  curNode = treeView1->SelectedNode;

	String^        curPath = curNode->FullPath;

	curPath = curPath->Replace("\\\\", "\\");

	ListViewItem^ curItem = listView1->SelectedItems[0];

	String^ strFilePath = String::Concat(curPath, "\\", curItem->Text);

	// 在状态栏上显示信息

	toolStripStatusLabel1->Text = String::Concat("当前目录为【", curPath, "】当前文件： ", curItem->Text);

	// 运行程序，打开文件

	System::Diagnostics::Process::Start(strFilePath);
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	TreeNode^    curNode = treeView1->SelectedNode;

	String^         curPath = curNode->FullPath;

	curPath = curPath->Replace("\\\\", "\\");

	String^         Filename = "新建文本文件";

	String^ strFilePath = String::Concat(curPath, "\\", Filename);

	if (File::Exists(strFilePath))

	{

		MessageBox::Show(this, "该文件名已经存在！" + strFilePath, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else

	{

		FileStream ^fs = File::Create(strFilePath);

		fs->Close();

		MessageBox::Show(this, "成功创建文件！" + strFilePath, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	TreeNode^    curNode = treeView1->SelectedNode;

	String^  curPath = curNode->FullPath;

	curPath = curPath->Replace("\\\\", "\\");

	ListViewItem^ curItem = listView1->SelectedItems[0];

	String^ strFilePath = String::Concat(curPath, "\\", curItem->Text);

	int num = listView1->Items->IndexOf(listView1->SelectedItems[0]);

	int SelectOne = 0;

	if (listView1->SelectedItems->Count < 0) return;

	SelectOne = listView1->SelectedItems[0]->Index;

	listView1->Items->RemoveAt(SelectOne);

	// 删除文件

	File::Delete(strFilePath);

	MessageBox::Show(this, "成功删除了文件！" + strFilePath, "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	TreeNode^    curNode = treeView1->SelectedNode;

	String^         curPath = curNode->FullPath;

	curPath = curPath->Replace("\\\\", "\\");

	String^         Filename = "新建文件夹";

	String^ strFilePath = String::Concat(curPath, "\\", Filename);

	if (Directory::Exists(strFilePath))       //判断文件夹是否存在

	{

		MessageBox::Show(this, "该文件夹已存在！", "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else

	{

		Directory::CreateDirectory(strFilePath);     //创建新文件夹  

		curNode->Nodes->Add(Filename); //添加节点

		MessageBox::Show(this, "成功创建文件夹！" + strFilePath, "提示对话框", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	TreeNode^    curNode = treeView1->SelectedNode;

	String^         curPath = curNode->FullPath;

	curPath = curPath->Replace("\\\\", "\\");

	String^ strFilePath = curPath;

	if (!Directory::Exists(strFilePath))  //判断文件夹是否存在

	{

		MessageBox::Show(this, "要删除的文件夹不存在！" + strFilePath, "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	else

	{

		Directory::Delete(strFilePath);           //删除文件夹

		curNode->Remove();          //删除节点

		MessageBox::Show(this, "成功删除了文件夹！" + strFilePath, "信息提示", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
}
};
}

