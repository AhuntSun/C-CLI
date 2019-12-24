#pragma once

namespace �������� {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ImageForm ժҪ
	/// </summary>
	public ref class ImageForm : public System::Windows::Forms::Form
	{
	public:
		ImageForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
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
		Image^ image1 = gcnew 	Bitmap("F:\\��ֽ\\��Pվ��ͼ������֮�б�ֽ�ؼ�\\�ղ�[2764]ͼid[75804725_p0]_����[ˮ֮����]��ʦ[�ߤ���]uid[743648]_acg17_com.jpg");
		//Image^ image1 = gcnew Bitmap("F:\\��ֽ\\t01d7c516fc0cb3aca5.jpg");

		Image^ image2 = gcnew Bitmap("F:\\��ֽ\\��Pվ��ͼ������֮�б�ֽ�ؼ�\\�ղ�[3947]ͼid[60209670_p7]_����[������]��ʦ[ͨ��]uid[13208590]_acg17_com.png", true);
		Image^ image3 = gcnew Bitmap("F:\\��ֽ\\��Pվ��ͼ������֮�б�ֽ�ؼ�\\�ղ�[8832]ͼid[63596973_p0]_����[�٤ζ�]��ʦ[��ޤ���]uid[1143884]_acg17_com.jpg",true);
		Image^ image4 = Image::FromFile("F:\\��ֽ\\��Pվ��ͼ������֮�б�ֽ�ؼ�\\�ղ�[4147]ͼid[75987941_p0]_����[���ҤΉ�]��ʦ[�ᤫ]uid[2388857]_acg17_com.png");
		switch (num)
		{
		case 1:
			pictureBox1->Image = image1;
			this->Text = "��������С�������";
			this->ClientSize = System::Drawing::Size(588, 355);
			pictureBox1->Size = System::Drawing::Size(588, 355);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		case 2:
			pictureBox1->Image = image2;
			this->Text = "ʱ�������С���������";
			this->ClientSize = System::Drawing::Size(445, 342);
			pictureBox1->Size = System::Drawing::Size(445, 342);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		case 3:
			pictureBox1->Image = image3;
			this->Text = "��֧�����С�������";
			this->ClientSize = System::Drawing::Size(555, 400);
			pictureBox1->Size = System::Drawing::Size(555, 400);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		case 4:
			pictureBox1->Image = image4;
			this->Text = "�����仯����";
			this->ClientSize = System::Drawing::Size(429, 576);
			pictureBox1->Size = System::Drawing::Size(429, 576);
			pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			break;
		}
	}
	};
}
