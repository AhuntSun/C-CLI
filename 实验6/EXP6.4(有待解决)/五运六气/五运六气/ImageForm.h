#pragma once

namespace 五运六气 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ImageForm 摘要
	/// </summary>
	public ref class ImageForm : public System::Windows::Forms::Form
	{
	public:
		ImageForm(void)
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
		~ImageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ImageForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(432, 296);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// ImageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(435, 293);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"ImageForm";
			this->Text = L"ImageForm";
			this->Load += gcnew System::EventHandler(this, &ImageForm::ImageForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: int num;
	private: System::Void ImageForm_Load(System::Object^  sender, System::EventArgs^  e) {
		Image^ image1 = gcnew 	Bitmap("F:\\壁纸\\【P站美图】鬼灭之刃壁纸特辑\\收藏[2764]图id[75804725_p0]_标题[水之呼吸]画师[みちょ]uid[743648]_acg17_com.jpg");
		//Image^ image1 = gcnew Bitmap("F:\\壁纸\\t01d7c516fc0cb3aca5.jpg");

		Image^ image2 = gcnew Bitmap("F:\\壁纸\\【P站美图】鬼灭之刃壁纸特辑\\收藏[3947]图id[60209670_p7]_标题[鬼滅ログ四]画师[通草]uid[13208590]_acg17_com.png", true);
		Image^ image3 = gcnew Bitmap("F:\\壁纸\\【P站美图】鬼灭之刃壁纸特辑\\收藏[8832]图id[63596973_p0]_标题[藤の毒]画师[やまかわ]uid[1143884]_acg17_com.jpg",true);
		Image^ image4 = Image::FromFile("F:\\壁纸\\【P站美图】鬼灭之刃壁纸特辑\\收藏[4147]图id[75987941_p0]_标题[上弦の壱]画师[めか]uid[2388857]_acg17_com.png");
		switch (num)
		{
		case 1:
			pictureBox1->Image = image1;
			this->Text = "天干配五行、化五运";
			this->ClientSize = System::Drawing::Size(588, 355);
			pictureBox1->Size = System::Drawing::Size(588, 355);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		case 2:
			pictureBox1->Image = image2;
			this->Text = "时辰配五行、五运六气";
			this->ClientSize = System::Drawing::Size(445, 342);
			pictureBox1->Size = System::Drawing::Size(445, 342);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		case 3:
			pictureBox1->Image = image3;
			this->Text = "地支配五行、化六气";
			this->ClientSize = System::Drawing::Size(555, 400);
			pictureBox1->Size = System::Drawing::Size(555, 400);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		case 4:
			pictureBox1->Image = image4;
			this->Text = "运气变化周期";
			this->ClientSize = System::Drawing::Size(429, 576);
			pictureBox1->Size = System::Drawing::Size(429, 576);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		}
	}
	};
}
