#pragma once

namespace EXP53 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameForm 摘要
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
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
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	protected:

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
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 400);
			this->Name = L"GameForm";
			this->Opacity = 0.7;
			this->Text = L"GameForm";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::On_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::On_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &GameForm::On_MouseUp);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void GameForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 //添加如下的变量，用来记录当鼠标按下时鼠标的状态和鼠标的位置。
	private: bool  bIsMouseDown;  // 鼠标是否已按下
	private: Point  ptMouse;  // 鼠标位置
	public: Point  ptMainForm;  // 主窗体的位置
	private: System::Void On_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == Windows::Forms::MouseButtons::Left){
			ptMouse = Point(e->X, e->Y);
			bIsMouseDown = true;
		}
		else
			bIsMouseDown = false;
	}
	private: System::Void On_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (!bIsMouseDown) return;
		// 根据鼠标位置偏移量移动窗体
		Point pt = this->Location;
		this->StartPosition = FormStartPosition::Manual;
		pt.X += e->X-ptMouse.X;
		pt.Y += e->Y -ptMouse.Y;
		this->Location = pt;
	}

	private: System::Void On_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		bIsMouseDown = false;
		// 调用判断方法CheckIt
		if (CheckIt())
			MessageBox::Show("恭喜，你成功了！");
		else
			MessageBox::Show("\tSorry!\n单击【开始游戏】按钮，重新开始！");
		this->Close();  // 关闭窗口
	}

	/*		//（原版）游戏成功难度较大 
	private:bool CheckIt()
	{
		if (ptMainForm == this->Location)
			return true;
		else
			return false;
	}	 */
			 
			 //（简易版）改进的有一定误差也算成功的判断函数
	private: bool CheckIt()
	{
		if (Math::Abs((ptMainForm.X - this->Location.X)<6) && Math::Abs((ptMainForm.Y - this->Location.Y)<6))
			return true;
		else
			return false;
	}
};
}
