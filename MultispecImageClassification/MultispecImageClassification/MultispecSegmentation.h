#pragma once
#include "main.hpp"
#include <msclr/marshal.h>




namespace MultispecImageClassification {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MultispecSegmentation
	/// </summary>
	public ref class MultispecSegmentation : public System::Windows::Forms::Form
	{
	public:
		MultispecSegmentation(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MultispecSegmentation()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(93, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MultispecSegmentation::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 68);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 480);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MultispecSegmentation::pictureBox1_Click);
			this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MultispecSegmentation::pictureBox1_MouseClick);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 26);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"browse";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(683, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 185);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Use your mouse to select image parts with interesting spectral reflection first!";
			this->label1->Click += gcnew System::EventHandler(this, &MultispecSegmentation::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(762, 232);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"blue threshold";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(758, 295);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"green threshold";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(758, 362);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(68, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"red threshold";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(762, 430);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"nir threshold";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(758, 494);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"rededge threshold";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(750, 257);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 14;
			this->textBox1->Text = L"1000";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(750, 329);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 15;
			this->textBox2->Text = L"1000";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(750, 390);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 16;
			this->textBox3->Text = L"1000";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(750, 455);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 17;
			this->textBox4->Text = L"1000";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(750, 527);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 18;
			this->textBox5->Text = L"1000";
			// 
			// MultispecSegmentation
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 563);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MultispecSegmentation";
			this->Text = L"MultispecSegmentation";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Mat bitmap = cv::imread("c:\\Users\\fmm\\Desktop\\page_4_201501.tif", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_GRAYSCALE); //load the image at 16bit and grayscale
		Mat bitmap1;
		Mat bitmap2;
		Mat bitmap3;
		bitmap.convertTo(bitmap1, CV_8U,1.0/256.0);
		cv::Size size(640, 480);
		resize(bitmap1, bitmap2, size);
		cv::cvtColor(bitmap2, bitmap3, cv::COLOR_GRAY2BGR);

		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(bitmap3.ptr());
		System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(bitmap3.cols, bitmap3.rows, bitmap3.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
		graphics->DrawImage(b, rect);
	}

	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

}
	private: System::Void pictureBox1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

		
		Mat bitmap = cv::imread("c:\\Users\\fmm\\Desktop\\page_4_201501.tif", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_GRAYSCALE); //load the image at 16bit and grayscale
		Mat bitmap_blue = cv::imread("c:\\Users\\fmm\\Desktop\\page_1_201501.tif", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_GRAYSCALE); //load the image at 16bit and grayscale
		Mat bitmap_green = cv::imread("c:\\Users\\fmm\\Desktop\\page_2_201501.tif", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_GRAYSCALE); //load the image at 16bit and grayscale
		Mat bitmap_red = cv::imread("c:\\Users\\fmm\\Desktop\\page_3_201501.tif", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_GRAYSCALE); //load the image at 16bit and grayscale
		Mat bitmap_re = cv::imread("c:\\Users\\fmm\\Desktop\\page_5_201501.tif", CV_LOAD_IMAGE_ANYDEPTH | CV_LOAD_IMAGE_GRAYSCALE); //load the image at 16bit and grayscale
		int x = e -> X * (int)bitmap.cols/640;
		int y = e -> Y * (int)bitmap.rows/480;
		std::ofstream ofs("log.txt", std::ofstream::out); ofs << "started" << endl;
		ofs << "Click coordinates "<<x <<","<< y << endl;
		double blue;
		double green;
		double red;
		double nir;
		double re;
		double blue1;
		double green1;
		double red1;
		double nir1;
		double re1;
		double threshold = 2500.0;
		Mat bitmap1;
		Mat bitmap2;
		Mat bitmap3;
		Vec3s intensity;
		intensity = bitmap_blue.at<ushort>(y, x);
		(double)blue = (ushort)intensity.val[0];
		intensity = bitmap_green.at<ushort>(y, x);
		(double)green = (ushort)intensity.val[0];
		intensity = bitmap_red.at<ushort>(y, x);
		(double)red = (ushort)intensity.val[0];
		intensity = bitmap.at<ushort>(y, x);
		(double)nir = (ushort)intensity.val[0];
		intensity = bitmap_re.at<ushort>(y, x);
		(double)re = (ushort)intensity.val[0];
		Mat A = Mat::ones(cv::Size(bitmap_blue.cols, bitmap_blue.rows), CV_8U);
		Mat B = Mat::ones(cv::Size(bitmap_blue.cols, bitmap_blue.rows), CV_8U);
		
		Mat Afc3;
		Mat bitmap5;
		Mat bitmap6;
		Mat bitmap7;
		bitmap.copyTo(bitmap5);
		bitmap.copyTo(bitmap6);
		bitmap.copyTo(bitmap7);

		unsigned int xc=0;
		unsigned int yc=0;
		float counter = 0;
		msclr::interop::marshal_context ctx;
		string th_blue = ctx.marshal_as<const char*>(this->textBox1->Text);
		string th_green = ctx.marshal_as<const char*>(this->textBox2->Text);
		string th_red = ctx.marshal_as<const char*>(this->textBox3->Text);
		string th_nir = ctx.marshal_as<const char*>(this->textBox4->Text);
		std::string th_re = ctx.marshal_as<const char*>(this->textBox5->Text);
		unsigned int th_blue1 = atoi(th_blue.c_str());
		unsigned int th_green1 = atoi(th_green.c_str());
		unsigned int th_red1 = atoi(th_red.c_str());
		unsigned int th_nir1 = atoi(th_nir.c_str());
		unsigned int th_re1 = atoi(th_re.c_str());

		while (xc < 1217) {
			while (yc < 887) {
				intensity = bitmap_blue.at<ushort>(yc, xc);
				(double)blue1 = (ushort)intensity.val[0];
				intensity = bitmap_green.at<ushort>(yc, xc);
				(double)green1 = (ushort)intensity.val[0];
				intensity = bitmap_red.at<ushort>(yc, xc);
				(double)red1 = (ushort)intensity.val[0];
				intensity = bitmap.at<ushort>(yc, xc);
				(double)nir1 = (ushort)intensity.val[0];
				intensity = bitmap_re.at<ushort>(yc, xc);
				(double)re1 = (ushort)intensity.val[0];
				if (re1 >= re - th_re1 && re1 <= re + th_re1 &&
					nir1 >= nir - th_nir1 && nir1 <= nir + th_nir1 &&
					red1 >= red - th_red1 && red1 <= red + th_red1 &&
					blue1 >= blue - th_blue1 && blue1 <= blue + th_blue1 &&
					green1 >= green - th_green1 && green1 <= green + th_green1) {
					(ushort)bitmap.at<ushort>(yc, xc) = (ushort)60005;
					(ushort)bitmap7.at<ushort>(yc, xc) = (ushort)64000;
					(ushort)bitmap5.at<ushort>(yc, xc) = (ushort)0;
					(ushort)bitmap6.at<ushort>(yc, xc) = (ushort)0;
					
					//(uint8)B.at<uint8>(yc, xc) = 0;
					//ofs << xc << ","<< yc << endl;
					counter++;
				}
				yc++;
			}
			yc = 0;
			xc++;
		}
		xc = 0;

		ofs << "Pixels selected " <<counter<< endl;
		System::String^ test = "Px selected: " + counter.ToString() +
			"\nPx height: " + bitmap.rows +
			"\nPx width: " + bitmap.cols +
			"\nBlue Digital Number selected: " + blue.ToString() +
			"\nGreen Digital Number selected: " + green.ToString() +
			"\nRed Digital Number selected: " + red.ToString() +
			"\nNIR Digital Number selected: " + nir.ToString() +
			"\nRedEdge Digital Number selected: " + re.ToString() +
			"\nth_blue: " + th_blue1.ToString() +
			"\nthreshold green: " + th_green1.ToString() +
			"\nhreshold red: " + th_red1.ToString() +
			"\nthreshold nir: " + th_nir1.ToString() +
			"\nthreshold rededge: " + th_re1.ToString();


		this->label1->Text = gcnew System::String(test);


		Mat t[] = { bitmap6, bitmap5, bitmap7 };
		merge(t, 3, Afc3);
		//cv::imwrite("c:\\Users\\fmm\\Desktop\\bitmap5.tif", bitmap5);
		//cv::imwrite("c:\\Users\\fmm\\Desktop\\bitmap7.tif", bitmap7);
		//cv::imwrite("c:\\Users\\fmm\\Desktop\\bitmap6.tif", bitmap6);
		//cv::imwrite("c:\\Users\\fmm\\Desktop\\bitmap.tif", bitmap);
		//cv::imwrite("c:\\Users\\fmm\\Desktop\\af.tif", Afc3);
		Afc3.convertTo(bitmap2, CV_8UC3, 1.0 / 256.0);
		//cv::imwrite("c:\\Users\\fmm\\Desktop\\bitmap.tif", bitmap2);
		//cv::cvtColor(bitmap1, bitmap2, cv::COLOR_GRAY2BGR);
		

		//bitmap2 = bitmap2.mul(Afc3);
		//cv::imwrite("c:\\Users\\fmm\\Desktop\\result.tif", bitmap2);
		
		cv::Size size(640, 480);
		resize(bitmap2, bitmap3, size);
		System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
		System::IntPtr ptr(bitmap3.ptr());
		System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(bitmap3.cols, bitmap3.rows, bitmap3.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
		System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
		graphics->DrawImage(b, rect);
		//ofs << x << endl; ofs << y << endl;
	}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}

