#pragma once

namespace EXP3 {
	using namespace System::Drawing::Drawing2D;
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
			this->SuspendLayout();
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(599, 343);
			this->Name = L"Form1";
			this->Text = L"成绩统计图";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:System::Void DrawScore(System::Drawing::Graphics^ g, array<double>^ score) {
		array<int>^scoreNum = gcnew array<int>(5){ 0 };
		for each (double s in score) {
			if (s >= 90) scoreNum[0]++;// 统计各分数段的人数
			else if (s >= 80)scoreNum[1]++;
			else if (s >= 70)scoreNum[2]++;
			else if (s >= 60)scoreNum[3]++;
			else scoreNum[4]++; // 小于分的人数
		}
		FontFamily^fontFamily = gcnew FontFamily(L"宋体");    // 宋体字体
		Drawing::Font^font = gcnew Drawing::Font(fontFamily, 10, FontStyle::Regular);
		SolidBrush^brush1 = gcnew SolidBrush(Color::Black);
		// 绘制直角坐标系的两条坐标线及文字
		Pen^ pen1 = gcnew Pen(Color::Black);
		pen1->EndCap = LineCap::ArrowAnchor; // 末端带箭头
		g->DrawLine(pen1, 20, 200, 20, 20); // 垂直线
		g->DrawLine(pen1, 20, 200, 320, 200);// 水平线
		g->DrawString(L"人数", font, brush1, 20, 20);
		g->DrawString(L"<60", font, brush1, 50, 210);
		g->DrawString(L"60-70", font, brush1, 90, 210);
		g->DrawString(L"70-80", font, brush1, 140, 210);
		g->DrawString(L"80-90", font, brush1, 190, 210);
		g->DrawString(L">=90", font, brush1, 240, 210);
		g->DrawString(L"分数段", font, brush1, 280, 210);

		array<Point>^ points = gcnew array<Point>{
			Point(60, 240 - 15 * scoreNum[0]),
				Point(110, 240 - 15 * scoreNum[1]),
				Point(160, 240 - 15 * scoreNum[2]),
				Point(210, 240 - 15 * scoreNum[3]),
				Point(260, 240 - 15 * scoreNum[4])
		};

		array<HatchBrush^>^ brushes = gcnew array<HatchBrush^>{
			gcnew HatchBrush(HatchStyle::LightVertical, Color::Red, Color::Gray),
				gcnew HatchBrush(HatchStyle::LightDownwardDiagonal, Color::Yellow, Color::Blue),
				gcnew HatchBrush(HatchStyle::LightHorizontal, Color::White, Color::Green),
				gcnew HatchBrush(HatchStyle::LightUpwardDiagonal, Color::Yellow, Color::Orange),
				gcnew HatchBrush(HatchStyle::OutlinedDiamond, Color::Blue, Color::Red),
		};

		// 直方图
		for (int i = 4; i >= 0; i--) {
			g->FillRectangle(brushes[i], points[i].X - 25, points[i].Y, 50, 200 - points[i].Y);
			g->DrawString(scoreNum[i] + L"人", font, brush1, points[i].X - 10, points[i].Y - 15);
		}

		// 曲线图
		Pen^ pen2 = gcnew Pen(Color::Blue, 2);
		g->DrawCurve(pen2, points); // 基数曲线

		// 圆饼图
		float startAngle = 0.0f, sweepAngle = 0.0f;
		for (int i = 4; i >= 0; i--) {
			startAngle = startAngle + sweepAngle; // 起始角度
			sweepAngle = (float)scoreNum[i] * 360 / score->Length;   // 扫描角度
			g->FillPie(brushes[i], Rectangle(340, 40, 180, 180), startAngle, sweepAngle);
		}
	}
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		array<double>^ score = gcnew array<double>{        // 48个成绩值
			66, 82, 79, 74, 86, 67, 60, 45, 44, 77,
				98, 65, 90, 66, 76, 66, 62, 83, 84, 97,
				43, 67, 57, 60, 60, 71, 74, 60, 72, 81,
				69, 79, 91, 69, 71, 42, 82, 77, 69, 81,
				76, 96, 56, 77, 88, 99, 61, 98,
		};
		DrawScore(e->Graphics, score);        // 绘制成绩分布图
	}
};
}

