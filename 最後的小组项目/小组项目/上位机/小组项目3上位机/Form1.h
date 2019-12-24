#pragma once
#include "MyForm.h"
#include"BZ.h"
#include "MyForm1.h"
namespace 小组项目3上位机 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

;
	using namespace System::Data::OleDb;
	using namespace System::Data::Common;
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






	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::ToolStripMenuItem^  串口ToolStripMenuItem;
	private: System::IO::Ports::SerialPort^  serialPort1;

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

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;

	private: System::Windows::Forms::ToolStripMenuItem^  帮助ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  系统介绍ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  系统使用说明书ToolStripMenuItem;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart5;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel2;
	private: System::Windows::Forms::Timer^  timer1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series7 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea4 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea5 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->菜单ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->系统介绍ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->串口ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->帮助ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->系统使用说明书ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->toolStripStatusLabel2 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->tabControl2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Location = System::Drawing::Point(12, 41);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(464, 412);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Black;
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->chart1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(456, 383);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"温度";
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::LightSeaGreen;
			chartArea1->BackColor = System::Drawing::Color::Transparent;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Dock = System::Windows::Forms::DockStyle::Fill;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(3, 2);
			this->chart1->Margin = System::Windows::Forms::Padding(4);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Red;
			series1->Legend = L"Legend1";
			series1->Name = L"1号设备";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::Lime;
			series2->Legend = L"Legend1";
			series2->Name = L"2号设备";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series3->Legend = L"Legend1";
			series3->Name = L"3号设备";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(450, 379);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->chart4);
			this->tabPage2->Controls->Add(this->chart2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(456, 383);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"湿度";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// chart4
			// 
			this->chart4->BackColor = System::Drawing::Color::LightSeaGreen;
			chartArea2->BackColor = System::Drawing::Color::Transparent;
			chartArea2->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea2);
			this->chart4->Dock = System::Windows::Forms::DockStyle::Fill;
			legend2->Name = L"Legend1";
			this->chart4->Legends->Add(legend2);
			this->chart4->Location = System::Drawing::Point(3, 2);
			this->chart4->Margin = System::Windows::Forms::Padding(4);
			this->chart4->Name = L"chart4";
			this->chart4->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Pastel;
			series4->ChartArea = L"ChartArea1";
			series4->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series4->Color = System::Drawing::Color::Red;
			series4->Legend = L"Legend1";
			series4->Name = L"1号设备";
			series4->YValuesPerPoint = 2;
			series5->ChartArea = L"ChartArea1";
			series5->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series5->Color = System::Drawing::Color::Lime;
			series5->Legend = L"Legend1";
			series5->Name = L"2号设备";
			series6->ChartArea = L"ChartArea1";
			series6->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series6->Color = System::Drawing::Color::Black;
			series6->Legend = L"Legend1";
			series6->Name = L"3号设备";
			this->chart4->Series->Add(series4);
			this->chart4->Series->Add(series5);
			this->chart4->Series->Add(series6);
			this->chart4->Size = System::Drawing::Size(450, 379);
			this->chart4->TabIndex = 2;
			this->chart4->Text = L"chart4";
			// 
			// chart2
			// 
			chartArea3->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart2->Legends->Add(legend3);
			this->chart2->Location = System::Drawing::Point(4, 8);
			this->chart2->Margin = System::Windows::Forms::Padding(4);
			this->chart2->Name = L"chart2";
			this->chart2->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Excel;
			series7->ChartArea = L"ChartArea1";
			series7->Legend = L"Legend1";
			series7->Name = L"Series1";
			this->chart2->Series->Add(series7);
			this->chart2->Size = System::Drawing::Size(491, 330);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->chart3);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(456, 383);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"co2浓度";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// chart3
			// 
			this->chart3->BackColor = System::Drawing::Color::LightSeaGreen;
			chartArea4->BackColor = System::Drawing::Color::Transparent;
			chartArea4->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea4);
			this->chart3->Dock = System::Windows::Forms::DockStyle::Fill;
			legend4->Name = L"Legend1";
			this->chart3->Legends->Add(legend4);
			this->chart3->Location = System::Drawing::Point(0, 0);
			this->chart3->Margin = System::Windows::Forms::Padding(4);
			this->chart3->Name = L"chart3";
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->Color = System::Drawing::Color::Red;
			series8->Legend = L"Legend1";
			series8->Name = L"1号设备";
			series8->YValuesPerPoint = 2;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::Lime;
			series9->Legend = L"Legend1";
			series9->Name = L"2号设备";
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series10->Legend = L"Legend1";
			series10->Name = L"3号设备";
			this->chart3->Series->Add(series8);
			this->chart3->Series->Add(series9);
			this->chart3->Series->Add(series10);
			this->chart3->Size = System::Drawing::Size(456, 383);
			this->chart3->TabIndex = 1;
			this->chart3->Text = L"chart3";
			// 
			// tabPage6
			// 
			this->tabPage6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage6.BackgroundImage")));
			this->tabPage6->Controls->Add(this->chart5);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(456, 383);
			this->tabPage6->TabIndex = 3;
			this->tabPage6->Text = L"光照强度";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// chart5
			// 
			this->chart5->BackColor = System::Drawing::Color::LightSeaGreen;
			chartArea5->BackColor = System::Drawing::Color::Transparent;
			chartArea5->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea5);
			this->chart5->Dock = System::Windows::Forms::DockStyle::Fill;
			legend5->Name = L"Legend1";
			this->chart5->Legends->Add(legend5);
			this->chart5->Location = System::Drawing::Point(0, 0);
			this->chart5->Name = L"chart5";
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Color = System::Drawing::Color::Red;
			series11->Legend = L"Legend1";
			series11->Name = L"1号设备";
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			series12->Legend = L"Legend1";
			series12->Name = L"2号设备";
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			series13->Legend = L"Legend1";
			series13->Name = L"3号设备";
			this->chart5->Series->Add(series11);
			this->chart5->Series->Add(series12);
			this->chart5->Series->Add(series13);
			this->chart5->Size = System::Drawing::Size(456, 383);
			this->chart5->TabIndex = 0;
			this->chart5->Text = L"chart5";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->菜单ToolStripMenuItem,
					this->设置ToolStripMenuItem, this->帮助ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1172, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 菜单ToolStripMenuItem
			// 
			this->菜单ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->系统介绍ToolStripMenuItem });
			this->菜单ToolStripMenuItem->Name = L"菜单ToolStripMenuItem";
			this->菜单ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->菜单ToolStripMenuItem->Text = L"系统";
			// 
			// 系统介绍ToolStripMenuItem
			// 
			this->系统介绍ToolStripMenuItem->Name = L"系统介绍ToolStripMenuItem";
			this->系统介绍ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->系统介绍ToolStripMenuItem->Text = L"系统介绍";
			// 
			// 设置ToolStripMenuItem
			// 
			this->设置ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->串口ToolStripMenuItem });
			this->设置ToolStripMenuItem->Name = L"设置ToolStripMenuItem";
			this->设置ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->设置ToolStripMenuItem->Text = L"设置";
			// 
			// 串口ToolStripMenuItem
			// 
			this->串口ToolStripMenuItem->Name = L"串口ToolStripMenuItem";
			this->串口ToolStripMenuItem->Size = System::Drawing::Size(114, 26);
			this->串口ToolStripMenuItem->Text = L"串口";
			this->串口ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::串口ToolStripMenuItem_Click);
			// 
			// 帮助ToolStripMenuItem
			// 
			this->帮助ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->系统使用说明书ToolStripMenuItem });
			this->帮助ToolStripMenuItem->Name = L"帮助ToolStripMenuItem";
			this->帮助ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->帮助ToolStripMenuItem->Text = L"帮助";
			// 
			// 系统使用说明书ToolStripMenuItem
			// 
			this->系统使用说明书ToolStripMenuItem->Name = L"系统使用说明书ToolStripMenuItem";
			this->系统使用说明书ToolStripMenuItem->Size = System::Drawing::Size(189, 26);
			this->系统使用说明书ToolStripMenuItem->Text = L"系统使用说明书";
			this->系统使用说明书ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::系统使用说明书ToolStripMenuItem_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button3->Location = System::Drawing::Point(342, 497);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 41);
			this->button3->TabIndex = 8;
			this->button3->Text = L"警报";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM2";
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Form1::serialPort1_DataReceived);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::LightSeaGreen;
			this->listBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(4, 4);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(597, 368);
			this->listBox1->TabIndex = 1;
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Controls->Add(this->tabPage5);
			this->tabControl2->Location = System::Drawing::Point(546, 147);
			this->tabControl2->Margin = System::Windows::Forms::Padding(4);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(613, 405);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage4.BackgroundImage")));
			this->tabPage4->Controls->Add(this->listBox1);
			this->tabPage4->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Margin = System::Windows::Forms::Padding(4);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(4);
			this->tabPage4->Size = System::Drawing::Size(605, 376);
			this->tabPage4->TabIndex = 0;
			this->tabPage4->Text = L"数据接收";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::LightSeaGreen;
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Controls->Add(this->comboBox1);
			this->tabPage5->Controls->Add(this->dataGridView1);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Margin = System::Windows::Forms::Padding(4);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(4);
			this->tabPage5->Size = System::Drawing::Size(605, 376);
			this->tabPage5->TabIndex = 1;
			this->tabPage5->Text = L"数据库";
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button5->Location = System::Drawing::Point(446, 8);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(107, 30);
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
			this->label2->Location = System::Drawing::Point(55, 19);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 18);
			this->label2->TabIndex = 5;
			this->label2->Text = L"数据表";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(141, 14);
			this->comboBox1->Margin = System::Windows::Forms::Padding(4);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(255, 23);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::On_SelChange);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(11, 50);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 23;
			this->dataGridView1->Size = System::Drawing::Size(573, 314);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(90, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 25);
			this->textBox1->TabIndex = 11;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(90, 56);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(172, 25);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(387, 18);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(168, 25);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(387, 52);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(168, 25);
			this->textBox4->TabIndex = 14;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 15);
			this->label3->TabIndex = 15;
			this->label3->Text = L"温度(℃)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 59);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 15);
			this->label4->TabIndex = 16;
			this->label4->Text = L"湿度（%）";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(278, 21);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 15);
			this->label5->TabIndex = 17;
			this->label5->Text = L"二氧化碳浓度";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(310, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 15);
			this->label6->TabIndex = 18;
			this->label6->Text = L"光照强度";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->groupBox1->Location = System::Drawing::Point(554, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(580, 101);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"数据平均值";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = resources->GetString(L"oleDbSelectCommand1.CommandText");
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=F:\\项目三\\2\\副本.mdb";
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(25) {
				(gcnew System::Data::Common::DataColumnMapping(L"CO2浓度.序号",
					L"CO2浓度.序号")), (gcnew System::Data::Common::DataColumnMapping(L"字段1", L"字段1")), (gcnew System::Data::Common::DataColumnMapping(L"CO2浓度.时间",
					L"CO2浓度.时间")), (gcnew System::Data::Common::DataColumnMapping(L"CO2浓度.测试地点1", L"CO2浓度.测试地点1")), (gcnew System::Data::Common::DataColumnMapping(L"CO2浓度.测试地点二",
					L"CO2浓度.测试地点二")), (gcnew System::Data::Common::DataColumnMapping(L"CO2浓度.测试地点三", L"CO2浓度.测试地点三")), (gcnew System::Data::Common::DataColumnMapping(L"CO2浓度.平均值",
					L"CO2浓度.平均值")), (gcnew System::Data::Common::DataColumnMapping(L"光 强.序号", L"光 强.序号")), (gcnew System::Data::Common::DataColumnMapping(L"光 强.时间",
					L"光 强.时间")), (gcnew System::Data::Common::DataColumnMapping(L"光 强.测试地点1", L"光 强.测试地点1")), (gcnew System::Data::Common::DataColumnMapping(L"光 强.测试地点二",
					L"光 强.测试地点二")), (gcnew System::Data::Common::DataColumnMapping(L"光 强.测试地点三", L"光 强.测试地点三")), (gcnew System::Data::Common::DataColumnMapping(L"光 强.平均值",
					L"光 强.平均值")), (gcnew System::Data::Common::DataColumnMapping(L"湿度(%).序号", L"湿度(%).序号")), (gcnew System::Data::Common::DataColumnMapping(L"湿度(%).时间",
					L"湿度(%).时间")), (gcnew System::Data::Common::DataColumnMapping(L"湿度(%).测试地点1", L"湿度(%).测试地点1")), (gcnew System::Data::Common::DataColumnMapping(L"湿度(%).测试地点二",
					L"湿度(%).测试地点二")), (gcnew System::Data::Common::DataColumnMapping(L"湿度(%).测试地点三", L"湿度(%).测试地点三")), (gcnew System::Data::Common::DataColumnMapping(L"湿度(%).平均值",
					L"湿度(%).平均值")), (gcnew System::Data::Common::DataColumnMapping(L"温度(℃).序号", L"温度(℃).序号")), (gcnew System::Data::Common::DataColumnMapping(L"温度(℃).时间",
					L"温度(℃).时间")), (gcnew System::Data::Common::DataColumnMapping(L"温度(℃).测试地点1", L"温度(℃).测试地点1")), (gcnew System::Data::Common::DataColumnMapping(L"温度(℃).测试地点二",
					L"温度(℃).测试地点二")), (gcnew System::Data::Common::DataColumnMapping(L"温度(℃).测试地点三", L"温度(℃).测试地点三")), (gcnew System::Data::Common::DataColumnMapping(L"温度(℃).平均值",
					L"温度(℃).平均值"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"CO2浓度", __mcTemp__1))
			});
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"宋体", 10.5F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->button1->Location = System::Drawing::Point(81, 497);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 41);
			this->button1->TabIndex = 20;
			this->button1->Text = L"退出";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::Transparent;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->toolStripStatusLabel2
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 556);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1172, 25);
			this->statusStrip1->TabIndex = 21;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->BackColor = System::Drawing::Color::Transparent;
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel1->Text = L"toolStripStatusLabel1";
			// 
			// toolStripStatusLabel2
			// 
			this->toolStripStatusLabel2->BackColor = System::Drawing::Color::Transparent;
			this->toolStripStatusLabel2->Name = L"toolStripStatusLabel2";
			this->toolStripStatusLabel2->Size = System::Drawing::Size(167, 20);
			this->toolStripStatusLabel2->Text = L"toolStripStatusLabel2";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSeaGreen;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1172, 581);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->tabControl2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"菜园检测系统";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:array <String^>^ wd = gcnew  array<String^>(3);//温度
				array <String^>^ sd = gcnew  array<String^>(3);//湿度
				array <String^>^co2 = gcnew  array<String^>(3);//CO2
				array <String^>^ gz = gcnew  array<String^>(3);//光照
				array<String^>^ data = gcnew array<String^>(12);
				array<float^>^pjz = gcnew array<float^>(4);

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
		str1 = nullptr;
	//显示实时参数平均值
		pjz[0] = ((float::Parse(wd[0])) + (float::Parse(wd[1])) + (float::Parse(wd[2]))) / 3;
		pjz[1] = ((float::Parse(sd[0])) + (float::Parse(sd[1])) + (float::Parse(sd[2]))) / 3;
		pjz[2] = ((float::Parse(co2[0])) + (float::Parse(co2[1])) + (float::Parse(co2[2]))) / 3;
		pjz[3] = ((float::Parse(gz[0])) + (float::Parse(gz[1])) + (float::Parse(gz[2]))) / 3;
		textBox1->Text = pjz[0]->ToString();
		textBox2->Text = pjz[1]->ToString();
		textBox3->Text = pjz[2]->ToString();
		textBox4->Text = pjz[3]->ToString();

		
		//显示接受的所有数据
		listBox1->Items->Add("温度1   温度2   温度3");
		listBox1->Items->AddRange(wd);
		listBox1->Items->Add("湿度1   湿度2  湿度3");
		listBox1->Items->AddRange(sd);
		listBox1->Items->Add("二氧化碳浓度1   二氧化碳浓度2   二氧化碳浓度3");
		listBox1->Items->AddRange(co2);
		listBox1->Items->Add("光强1   光强2   光强");
		listBox1->Items->AddRange(gz);

		add_data();//添加到数据库
		
	}

			 void draw(void)
			 {
				 chart1->Series["1号设备"]->Points->AddY(float::Parse(wd[0]));
				 chart1->Series["2号设备"]->Points->AddY(float::Parse(wd[1]));
				 chart1->Series["3号设备"]->Points->AddY(float::Parse(wd[2]));

				 chart4->Series["1号设备"]->Points->AddY(float::Parse(sd[0]));
				 chart4->Series["2号设备"]->Points->AddY(float::Parse(sd[1]));
				 chart4->Series["3号设备"]->Points->AddY(float::Parse(sd[2]));

				 chart3->Series["1号设备"]->Points->AddY(float::Parse(co2[0]));
				 chart3->Series["2号设备"]->Points->AddY(float::Parse(co2[1]));
				 chart3->Series["3号设备"]->Points->AddY(float::Parse(co2[2]));


				 chart5->Series["1号设备"]->Points->AddY(float::Parse(gz[0]));
				 chart5->Series["2号设备"]->Points->AddY(float::Parse(gz[1]));
				 chart5->Series["3号设备"]->Points->AddY(float::Parse(gz[2]));
				
			 }

	private: String^ strConn;

			 //调入数据库
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

			 //选择数据表
private: System::Void On_SelChange(System::Object^  sender, System::EventArgs^  e) {
	int nIndex = this->comboBox1->SelectedIndex;
	if (nIndex < 0) return;
	String^ strTableName = this->comboBox1->Items[nIndex]->ToString()->Trim();
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

private: System::Void 分析ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm^my = gcnew MyForm();
	my->ShowDialog();
}

		 //调用画图
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	draw();
}

		 //添加到数据库
		 void add_data(void)
		 {
			 DateTime dateTime = DateTime::Now;             //获取系统当前时间
			 String^strCmd,^strAmd,^strBmd,^strDmd;

			 //添加温度
			 strCmd = String::Format("INSERT INTO 温度(时间,设备1,设备2,设备3) \ VALUES('{0}', '{1}', '{2}',{3})", dateTime.ToLongTimeString(), wd[0], wd[1], wd[2]);

				 // 创建可执行命令

				 Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);

			 // 执行操作

			 this->oleDbConnection1->Open();

			 cmd->ExecuteNonQuery();

			 this->oleDbConnection1->Close();

			//添加湿度

			 strAmd = String::Format("INSERT INTO 湿度(时间,设备1,设备2,设备3)\ VALUES('{0}', '{1}', {2},{3})", dateTime.ToLongTimeString(), sd[0], sd[1], sd[2]);

			 // 创建可执行命令

			 Data::OleDb::OleDbCommand^ amd = gcnew Data::OleDb::OleDbCommand(strAmd, oleDbConnection1);

			 // 执行操作

			 this->oleDbConnection1->Open();

			amd->ExecuteNonQuery();

			 this->oleDbConnection1->Close();


			 //添加湿度
			 
			/* strCmd = String::Format("INSERT INTO 湿度（%）(设备1,设备2,设备3)\ VALUES('{0}', '{1}', {2})", sd[0], sd[1], sd[2]);

			 // 创建可执行命令

			 Data::OleDb::OleDbCommand^ cmd = gcnew Data::OleDb::OleDbCommand(strCmd, oleDbConnection1);

			 // 执行操作

			 this->oleDbConnection1->Open();

			 cmd->ExecuteNonQuery();

			 this->oleDbConnection1->Close();*/



			 //添加co2浓度
		
			 strBmd = String::Format("INSERT INTO CO2浓度(时间,设备1,设备2,设备3)\ VALUES('{0}', '{1}', {2},{3})", dateTime.ToLongTimeString(), co2[0], co2[1], co2[2]);

			 // 创建可执行命令

			 Data::OleDb::OleDbCommand^ bmd = gcnew Data::OleDb::OleDbCommand(strBmd, oleDbConnection1);

			 // 执行操作

			 this->oleDbConnection1->Open();

			 bmd->ExecuteNonQuery();

			 this->oleDbConnection1->Close();


			 //添加光照强度
			 strDmd = String::Format("INSERT INTO 光强(时间,设备1,设备2,设备3)\ VALUES('{0}', '{1}', {2},{3})", dateTime.ToLongTimeString(), gz[0], gz[1], gz[2]);

			 // 创建可执行命令

			 Data::OleDb::OleDbCommand^ dmd = gcnew Data::OleDb::OleDbCommand(strDmd, oleDbConnection1);

			 // 执行操作

			 this->oleDbConnection1->Open();

			 dmd->ExecuteNonQuery();

			 this->oleDbConnection1->Close();

		 }
private: System::Void 系统使用说明书ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	BZ^ bz = gcnew BZ();
	bz->ShowDialog();
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

	DateTime dateTime = DateTime::Now;             //获取系统当前时间

	toolStripStatusLabel1->Text = dateTime.ToLongDateString();       // 显示日期

	toolStripStatusLabel2->Text = dateTime.ToLongTimeString();     // 显示时间
}
private: System::Void 串口ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MyForm1^ f1 = gcnew MyForm1;
	f1->ShowDialog();
}
};
}
