#pragma once

namespace 小组项目3上位机 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::Data;
	using namespace System::Data::OleDb;
	using namespace System::Data::Common;
	using namespace System::Drawing;
	using namespace  System::Data::Odbc;

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
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  菜单ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  设置ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  查询ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  统计ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  分析ToolStripMenuItem;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ToolStripMenuItem^  串口ToolStripMenuItem;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->菜单ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->串口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->查询ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->统计ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->分析ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(9, 33);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(383, 303);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->chart5);
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(375, 277);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"1号大棚";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->chart4);
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(375, 277);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"2号大棚";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->chart3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(375, 277);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"3号大棚";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->菜单ToolStripMenuItem,
					this->设置ToolStripMenuItem, this->查询ToolStripMenuItem, this->统计ToolStripMenuItem, this->分析ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(807, 25);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 菜单ToolStripMenuItem
			// 
			this->菜单ToolStripMenuItem->Name = L"菜单ToolStripMenuItem";
			this->菜单ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->菜单ToolStripMenuItem->Text = L"系统";
			// 
			// 设置ToolStripMenuItem
			// 
			this->设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->串口ToolStripMenuItem });
			this->设置ToolStripMenuItem->Name = L"设置ToolStripMenuItem";
			this->设置ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->设置ToolStripMenuItem->Text = L"设置";
			// 
			// 串口ToolStripMenuItem
			// 
			this->串口ToolStripMenuItem->Name = L"串口ToolStripMenuItem";
			this->串口ToolStripMenuItem->Size = System::Drawing::Size(100, 22);
			this->串口ToolStripMenuItem->Text = L"串口";
			// 
			// 查询ToolStripMenuItem
			// 
			this->查询ToolStripMenuItem->Name = L"查询ToolStripMenuItem";
			this->查询ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->查询ToolStripMenuItem->Text = L"查询";
			// 
			// 统计ToolStripMenuItem
			// 
			this->统计ToolStripMenuItem->Name = L"统计ToolStripMenuItem";
			this->统计ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->统计ToolStripMenuItem->Text = L"统计";
			// 
			// 分析ToolStripMenuItem
			// 
			this->分析ToolStripMenuItem->Name = L"分析ToolStripMenuItem";
			this->分析ToolStripMenuItem->Size = System::Drawing::Size(44, 21);
			this->分析ToolStripMenuItem->Text = L"分析";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(80, 344);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(76, 33);
			this->button1->TabIndex = 6;
			this->button1->Text = L"开始";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button2->Location = System::Drawing::Point(222, 344);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 33);
			this->button2->TabIndex = 7;
			this->button2->Text = L"结束";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(80, 399);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 33);
			this->button3->TabIndex = 8;
			this->button3->Text = L"暂停";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button4->Location = System::Drawing::Point(222, 399);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(76, 33);
			this->button4->TabIndex = 9;
			this->button4->Text = L"退出";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM2";
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(324, 355);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 12);
			this->label1->TabIndex = 10;
			this->label1->Text = L"ceshi ";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 14;
			this->listBox1->Location = System::Drawing::Point(8, 8);
			this->listBox1->Margin = System::Windows::Forms::Padding(2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(368, 326);
			this->listBox1->TabIndex = 1;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(408, 40);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(392, 312);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(384, 342);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"数据接收";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Controls->Add(this->comboBox1);
			this->tabPage5->Controls->Add(this->dataGridView1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(384, 286);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"数据库";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(280, 8);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 24);
			this->button5->TabIndex = 6;
			this->button5->Text = L"调入";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::On_DBOpen);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(8, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 14);
			this->label2->TabIndex = 5;
			this->label2->Text = L"数据表";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(64, 8);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(192, 20);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(8, 40);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(368, 248);
			this->dataGridView1->TabIndex = 0;
			// 
			// chart1
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(0, 8);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::EarthTones;
			series5->ChartArea = L"ChartArea1";
			series5->Legend = L"Legend1";
			series5->Name = L"Series1";
			this->chart1->Series->Add(series5);
			this->chart1->Size = System::Drawing::Size(368, 264);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea4->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea4);
			legend4->Name = L"Legend1";
			this->chart2->Legends->Add(legend4);
			this->chart2->Location = System::Drawing::Point(3, 6);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series10->ChartArea = L"ChartArea1";
			series10->Legend = L"Legend1";
			series10->Name = L"Series1";
			this->chart2->Series->Add(series10);
			this->chart2->Size = System::Drawing::Size(368, 264);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea5->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea5);
			legend5->Name = L"Legend1";
			this->chart3->Legends->Add(legend5);
			this->chart3->Location = System::Drawing::Point(3, 6);
			this->chart3->Name = L"chart3";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Legend = L"Legend1";
			series11->Name = L"温度(℃)";
			series11->YValuesPerPoint = 2;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Legend = L"Legend1";
			series12->Name = L"湿度(%)";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Legend = L"Legend1";
			series13->Name = L"光 强";
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series14->Legend = L"Legend1";
			series14->Name = L"CO2浓度";
			this->chart3->Series->Add(series11);
			this->chart3->Series->Add(series12);
			this->chart3->Series->Add(series13);
			this->chart3->Series->Add(series14);
			this->chart3->Size = System::Drawing::Size(368, 264);
			this->chart3->TabIndex = 1;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart4->Legends->Add(legend3);
			this->chart4->Location = System::Drawing::Point(11, 14);
			this->chart4->Name = L"chart4";
			this->chart4->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Legend = L"Legend1";
			series6->Name = L"温度(℃)";
			series6->YValuesPerPoint = 2;
			series7->ChartArea = L"ChartArea1";
			series7->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series7->Legend = L"Legend1";
			series7->Name = L"湿度(%)";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Legend = L"Legend1";
			series8->Name = L"光 强";
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Legend = L"Legend1";
			series9->Name = L"CO2浓度";
			this->chart4->Series->Add(series6);
			this->chart4->Series->Add(series7);
			this->chart4->Series->Add(series8);
			this->chart4->Series->Add(series9);
			this->chart4->Size = System::Drawing::Size(368, 264);
			this->chart4->TabIndex = 2;
			this->chart4->Text = L"chart4";
			// 
			// chart5
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart5->Legends->Add(legend1);
			this->chart5->Location = System::Drawing::Point(3, 6);
			this->chart5->Name = L"chart5";
			this->chart5->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Fire;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Legend = L"Legend1";
			series1->Name = L"温度(℃)";
			series1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series1->YValuesPerPoint = 2;
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Legend = L"Legend1";
			series2->Name = L"湿度(%)";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->Name = L"光 强";
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Legend = L"Legend1";
			series4->Name = L"CO2浓度";
			this->chart5->Series->Add(series1);
			this->chart5->Series->Add(series2);
			this->chart5->Series->Add(series3);
			this->chart5->Series->Add(series4);
			this->chart5->Size = System::Drawing::Size(368, 264);
			this->chart5->TabIndex = 2;
			this->chart5->Text = L"chart5";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->ClientSize = System::Drawing::Size(807, 448);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Form1";
			this->Text = L"菜园检测系统";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:array <String^>^ wd = gcnew  array<String^>(3);//温度
				array <String^>^ sd = gcnew  array<String^>(3);//湿度
				array <String^>^co2 = gcnew  array<String^>(3);//CO2
				array <String^>^ gz = gcnew  array<String^>(3);//光照
				array<String^>^ data = gcnew array<String^>(12);

				String ^str1;

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		if (!serialPort1->IsOpen)
		    serialPort1->Open();

	}
	
			 //接收数据
	private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {

		int num = 12;
		str1 = serialPort1->ReadLine();

		data = str1->Split(',', num);//拆分为num个子串,前三个是温度，然后是湿度，co2，光照
		for (int i = 0; i < 3; i++)
		{
			wd[i] = data[i];
			sd[i] = data[i + 3];
			co2[i] = data[i + 6];
			gz[i] = data[i + 9];
		}
		label1->Text = wd[0];
		str1 = nullptr;
		listBox1->Items->Add("温度1   温度2   温度3");
		listBox1->Items->AddRange(wd);
		listBox1->Items->Add("湿度1   湿度2  湿度3");
		listBox1->Items->AddRange(sd);
		listBox1->Items->Add("二氧化碳浓度1   二氧化碳浓度2   二氧化碳浓度3");
		listBox1->Items->AddRange(co2);
		listBox1->Items->Add("光强1   光强2   光强");
		listBox1->Items->AddRange(gz);
	}
	private: String^ strConn;
	private: System::Void On_DBOpen(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^  pOFD = gcnew OpenFileDialog();
		pOFD->Filter = "Access文件(*.mdb)|*.mdb";
		pOFD->DefaultExt = "mdb";
		if (pOFD->ShowDialog() != System::Windows::Forms::DialogResult::OK) return;
		strConn = String::Format(
			"Provider=Microsoft.Jet.OLEDB.4.0; Data Source={0}", pOFD->FileName);
		OleDbConnection^ con1 = gcnew OleDbConnection(strConn);
		con1->Open();    // 打开连接
		this->comboBox1->Items->Clear();
		array<String^>^strs = gcnew array<String^>{ nullptr, nullptr, nullptr, "TABLE"};
		DataTable^table = con1->GetOleDbSchemaTable(
			OleDbSchemaGuid::Tables, strs);       // 获取数据表名
		if (table->Rows->Count > 0)
		{
			for each(DataRow^ row in table->Rows)
			{
				this->comboBox1->Items->Add(row["TABLE_NAME"]);
			}
			this->comboBox1->SelectedIndex = 0;
		}
		con1->Close();
	}
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = this->comboBox1->SelectedIndex;
	if (nIndex < 0) return;
	String^ strTableName = this->comboBox1->Items[nIndex]->ToString();
	String^ cmdText = String::Format("SELECT * FROM {0}", strTableName);
	OleDbDataAdapter^ da1 = gcnew OleDbDataAdapter(cmdText, strConn);
	DataSet^ theSet1 = gcnew DataSet();
	da1->Fill(theSet1, "Test");         // 重新指定表名称
	this->dataGridView1->DataSource = theSet1;
	this->dataGridView1->DataMember = "Test"; // 指定要打开的表
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
