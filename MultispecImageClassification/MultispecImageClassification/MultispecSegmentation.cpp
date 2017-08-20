#include "MultispecSegmentation.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(void)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Mat bitmap;
	//Mat bitmap1;
	//Mat bitmap2;
	//Mat bitmap3;


	//unsigned int counter = 0;
	//cv::Size size(640, 480);
	//bitmap = imread("c:\\Users\\fmm\\Desktop\\page_3_201501.tif", CV_LOAD_IMAGE_ANYCOLOR | CV_LOAD_IMAGE_GRAYSCALE);
	//namedWindow("image");
	//setMouseCallback("image", onMouse, 0);
	//imshow("image", bitmap);
	//waitKey(0);


	//Mat img = imread("c:\\Users\\fmm\\Desktop\\page_3_201501.tif");
	//namedWindow("image");
	//setMouseCallback("image", onMouse, 0);
	//imshow("image", img);
	//waitKey(0);


	/*resize(bitmap, bitmap1, size);
	bitmap1.convertTo(bitmap2, CV_8U);
	cv::cvtColor(bitmap2, bitmap3, cv::COLOR_GRAY2BGR);
	System::Drawing::Graphics^ graphics = pictureBox1->CreateGraphics();
	System::IntPtr ptr(bitmap3.ptr());
	System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(bitmap3.cols, bitmap3.rows, bitmap3.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
	System::Drawing::RectangleF rect(0, 0, pictureBox1->Width, pictureBox1->Height);
	graphics->DrawImage(b, rect);*/

	MultispecImageClassification::MultispecSegmentation form;
	Application::Run(%form);
}