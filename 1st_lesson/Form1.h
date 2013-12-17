#pragma once

#include <Windows.h>
#include <GdiPlus.h>
#include "domino.h"
#pragma comment(lib, "gdiplus.lib")

namespace My1st_lesson {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

		
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//pForm = gcnew Form();
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	protected: 

	private: System::Windows::Forms::FlowLayoutPanel^  flowLayoutPanel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::HScrollBar^  hScrollBar1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  printPageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  optionsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  connectionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  viewHelpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutGameToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		//Form^ pForm;
		/// Required designer variable.
		/// </summary>

	
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->printPageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->optionsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->connectionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->viewHelpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->flowLayoutPanel1->Controls->Add(this->button1);
			this->flowLayoutPanel1->Controls->Add(this->button2);
			this->flowLayoutPanel1->Controls->Add(this->button3);
			this->flowLayoutPanel1->Controls->Add(this->button4);
			this->flowLayoutPanel1->Controls->Add(this->button5);
			this->flowLayoutPanel1->Controls->Add(this->button6);
			this->flowLayoutPanel1->Controls->Add(this->button7);
			this->flowLayoutPanel1->Location = System::Drawing::Point(313, 641);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(307, 77);
			this->flowLayoutPanel1->TabIndex = 8;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(37, 70);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Location = System::Drawing::Point(46, 3);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(37, 70);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Location = System::Drawing::Point(89, 3);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(37, 70);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Location = System::Drawing::Point(132, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(37, 70);
			this->button4->TabIndex = 3;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button5.BackgroundImage")));
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Location = System::Drawing::Point(175, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(37, 70);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button6.BackgroundImage")));
			this->button6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Location = System::Drawing::Point(218, 3);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(37, 70);
			this->button6->TabIndex = 5;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button7.BackgroundImage")));
			this->button7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Location = System::Drawing::Point(261, 3);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(37, 70);
			this->button7->TabIndex = 6;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(631, 641);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(71, 75);
			this->button8->TabIndex = 9;
			this->button8->Text = L"MARKET";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(453, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 13);
			this->label1->TabIndex = 10;
			this->label1->Text = L"opponent";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(396, 39);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(174, 27);
			this->pictureBox1->TabIndex = 11;
			this->pictureBox1->TabStop = false;
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->Location = System::Drawing::Point(313, 719);
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(307, 16);
			this->hScrollBar1->TabIndex = 12;
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->newGameToolStripMenuItem, 
				this->saveGameToolStripMenuItem, this->loadGameToolStripMenuItem, this->printPageToolStripMenuItem, this->optionsToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(35, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->newGameToolStripMenuItem->Text = L"New Game";
			// 
			// saveGameToolStripMenuItem
			// 
			this->saveGameToolStripMenuItem->Name = L"saveGameToolStripMenuItem";
			this->saveGameToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->saveGameToolStripMenuItem->Text = L"Save Game";
			// 
			// loadGameToolStripMenuItem
			// 
			this->loadGameToolStripMenuItem->Name = L"loadGameToolStripMenuItem";
			this->loadGameToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->loadGameToolStripMenuItem->Text = L"Load Game";
			// 
			// printPageToolStripMenuItem
			// 
			this->printPageToolStripMenuItem->Name = L"printPageToolStripMenuItem";
			this->printPageToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->printPageToolStripMenuItem->Text = L"Print...";
			// 
			// optionsToolStripMenuItem
			// 
			this->optionsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->connectionToolStripMenuItem});
			this->optionsToolStripMenuItem->Name = L"optionsToolStripMenuItem";
			this->optionsToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->optionsToolStripMenuItem->Text = L"options";
			// 
			// connectionToolStripMenuItem
			// 
			this->connectionToolStripMenuItem->Name = L"connectionToolStripMenuItem";
			this->connectionToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->connectionToolStripMenuItem->Text = L"connection";
			this->connectionToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::connect_options);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->viewHelpToolStripMenuItem, 
				this->aboutGameToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// viewHelpToolStripMenuItem
			// 
			this->viewHelpToolStripMenuItem->Name = L"viewHelpToolStripMenuItem";
			this->viewHelpToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->viewHelpToolStripMenuItem->Text = L"View Help";
			// 
			// aboutGameToolStripMenuItem
			// 
			this->aboutGameToolStripMenuItem->Name = L"aboutGameToolStripMenuItem";
			this->aboutGameToolStripMenuItem->Size = System::Drawing::Size(133, 22);
			this->aboutGameToolStripMenuItem->Text = L"About Game";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Gainsboro;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(992, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"Main menu";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Location = System::Drawing::Point(12, 72);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(968, 563);
			this->pictureBox2->TabIndex = 13;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			this->pictureBox2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pictureBox2_Paint);
			// 
			// button9
			// 
			this->button9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button9.BackgroundImage")));
			this->button9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->Location = System::Drawing::Point(281, 544);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 50);
			this->button9->TabIndex = 14;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Visible = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button10.BackgroundImage")));
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Location = System::Drawing::Point(576, 544);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 50);
			this->button10->TabIndex = 15;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Visible = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(992, 739);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1000, 766);
			this->MinimumSize = System::Drawing::Size(1000, 766);
			this->Name = L"Form1";
			this->Text = L"Main window";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->flowLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
#define HOME "c:\\danil\\NIIT\\internature\\prj\\1st_lesson\\1st_lesson\\pics\\"
private: array<PictureBox^> ^pBoxes;//my picsbox 
		 Bitmap^ MyImage;
		 String^ myPic;
		 
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				// this->reportViewer1->RefreshReport();
			 pBoxes = gcnew array<PictureBox^>( 28 );//my picsbox
			 dom_count = 0;
			 flag1 = 0;
			 flag2 = 0;
			 flag3 = 0;
			 /*domino::create_hand();
			 for(int i = 0; i < domino::get_hand_count(); i++)
			 {

			 }*/
		}

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		}
private: System::Void connect_options(System::Object^  sender, System::EventArgs^  e) {

		}
private: System::Void pictureBox2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			 
		}
public:
			int xLeftCoor, xRightCoor, yLeftCoor, yRightCoor, dom_count;
			bool flag1, flag2, flag3;
	
		void ShowMyImage( String^ fileToDisplay /*, int xCoor, int yCoor*/ )
		{
			int xSize = 25;
			int ySize = 50;
			myPic = fileToDisplay;
			// Sets up an image object to be displayed.
			if ( MyImage != nullptr )
			{
				delete MyImage;
			}

			PictureBox ^pBox = gcnew PictureBox();
			pBoxes[dom_count] = pBox;
			pBoxes[dom_count]->Parent = this; // 'this' is pointing to our form (the parent)

			if(dom_count == 0)
			{
				yLeftCoor = 500;
				xLeftCoor = 450;
				yRightCoor = 500;
				xRightCoor = 450;
				pBoxes[dom_count]->Location = Point( xLeftCoor, yLeftCoor );
				pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
				MyImage = gcnew Bitmap( fileToDisplay );

				pBoxes[dom_count]->ClientSize = System::Drawing::Size( xSize, ySize );// 50на100 отрисовка НЕ дублей.
				pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);
				xLeftCoor -= 25;
				yLeftCoor += 12;
				xRightCoor -= 25;
				yRightCoor += 12;
				dom_count++;	
			}
			this->button9->Show();
			this->button10->Show();
			//else
			//{
			//	
			//	//this->button9->EventHandler();
			//	if( pictureBox2->Size.Width-50 > xLeftCoor && 150 < yLeftCoor )
			//	{
			//		xLeftCoor += 50;
			//		pBoxes[dom_count]->Location = Point( xLeftCoor, yLeftCoor );
			//		pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
			//		MyImage = gcnew Bitmap( fileToDisplay );
	
			//		pBoxes[dom_count]->ClientSize = System::Drawing::Size( ySize, xSize );// 50на100 отрисовка НЕ дублей.
			//		MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
			//		pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);
			//	}
			//	else if( 150 < yLeftCoor )
			//	{
			//		if(!flag1)
			//		{
			//			xLeftCoor+=12;
			//			flag1++;
			//		}
			//		yLeftCoor-=50;
			//		pBoxes[dom_count]->Location = Point( xLeftCoor, yLeftCoor );
			//		pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
			//		MyImage = gcnew Bitmap( fileToDisplay );

			//		pBoxes[dom_count]->ClientSize = System::Drawing::Size( xSize, ySize );// 50на100 отрисовка НЕ дублей.
			//		//MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
			//		pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);
			//	}
			//	else
			//	{
			//		xLeftCoor -= 50;
			//		pBoxes[dom_count]->Location = Point( xLeftCoor, yLeftCoor );
			//		pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
			//		MyImage = gcnew Bitmap( fileToDisplay );
	
			//		pBoxes[dom_count]->ClientSize = System::Drawing::Size( ySize, xSize );// 50на100 отрисовка НЕ дублей.
			//		MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
			//		pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);

			//	}
			//}
			//this->button9->Visible = false;
			//this->button10->Visible = false;
			//dom_count++;			
		}

private: System::Void button1_Click(System::Object^ /*sender*/, System::EventArgs^ /*e*/ ) {
			try
			{
				ShowMyImage(HOME"1-1.bmp" );
			//	CreateMyPicbox();
			}
			
			catch ( ArgumentException^ ) 
			{
				MessageBox::Show( "There was an error."
				 "Check the path to the image file." );
			}

		}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			{
				ShowMyImage( "c:\\danil\\NIIT\\internature\\prj\\1st_lesson\\1st_lesson\\pics\\4-3.bmp" );
			}
			
			catch ( ArgumentException^ ) 
			{
				MessageBox::Show( "There was an error."
				 "Check the path to the image file." );
			}
		}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			{
				ShowMyImage( "c:\\danil\\NIIT\\internature\\prj\\1st_lesson\\1st_lesson\\pics\\2-2.bmp" );
			}
		
			catch ( ArgumentException^ ) 
			{
				MessageBox::Show( "There was an error."
				 "Check the path to the image file." );
			}
		}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			{
				ShowMyImage( "c:\\danil\\NIIT\\internature\\prj\\1st_lesson\\1st_lesson\\pics\\5-1.bmp" );
			}
		
			catch ( ArgumentException^ ) 
			{
				MessageBox::Show( "There was an error."
				 "Check the path to the image file." );
			}
		}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			{
				ShowMyImage( "c:\\danil\\NIIT\\internature\\prj\\1st_lesson\\1st_lesson\\pics\\2-1.bmp" );
			}
		
			catch ( ArgumentException^ ) 
			{
				MessageBox::Show( "There was an error."
				 "Check the path to the image file." );
			}
		}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 try
			{
				ShowMyImage( "c:\\danil\\NIIT\\internature\\prj\\1st_lesson\\1st_lesson\\pics\\3-1.bmp" );
			}
		
			catch ( ArgumentException^ ) 
			{
				MessageBox::Show( "There was an error."
				 "Check the path to the image file." );
			}
		}
private: System::Void button7_Click(System::Object^ /*sender*/, System::EventArgs^ /*e*/ ) {
			try
			{
				ShowMyImage( "c:\\danil\\NIIT\\internature\\prj\\1st_lesson\\1st_lesson\\pics\\1-1.bmp");
			}
			
			catch ( ArgumentException^ ) 
			{
				MessageBox::Show( "There was an error."
				 "Check the path to the image file." );
			}
        
		}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			int xSize = 25;
			int ySize = 50;
			PictureBox ^pBox = gcnew PictureBox();
			pBoxes[dom_count] = pBox;
			pBoxes[dom_count]->Parent = this; // 'this' is pointing to our form (the parent)
			if( pictureBox2->Size.Width-50 > xRightCoor && 150 < yRightCoor )
				{
					xRightCoor += 50;
					pBoxes[dom_count]->Location = Point( xRightCoor, yRightCoor );
					pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
					MyImage = gcnew Bitmap( myPic );
	
					pBoxes[dom_count]->ClientSize = System::Drawing::Size( ySize, xSize );// 50на100 отрисовка НЕ дублей.
					MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
					pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);
				}
			else if( 150 < yRightCoor )
				{
					if(!flag1)
					{
						xRightCoor+=12;
						flag1++;
					}
					yRightCoor-=50;
					pBoxes[dom_count]->Location = Point( xRightCoor, yRightCoor );
					pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
					MyImage = gcnew Bitmap( myPic );

					pBoxes[dom_count]->ClientSize = System::Drawing::Size( xSize, ySize );// 50на100 отрисовка НЕ дублей.
					//MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
					pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);
				}
			else
				{
					xRightCoor -= 50;
					pBoxes[dom_count]->Location = Point( xRightCoor, yRightCoor );
					pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
					MyImage = gcnew Bitmap( myPic );
	
					pBoxes[dom_count]->ClientSize = System::Drawing::Size( ySize, xSize );// 50на100 отрисовка НЕ дублей.
					MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
					pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);

				}
			
			this->button9->Hide();
			this->button10->Hide();
			dom_count++;			
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			int xSize = 25;
			int ySize = 50;
			PictureBox ^pBox = gcnew PictureBox();
			pBoxes[dom_count] = pBox;
			pBoxes[dom_count]->Parent = this; // 'this' is pointing to our form (the parent)
			if(!flag2)
			{
				xLeftCoor+=25;
				flag2++;
			}
			if( 50 < xLeftCoor && 150 < yLeftCoor )
				{
					xLeftCoor -= 50;
					pBoxes[dom_count]->Location = Point( xLeftCoor, yLeftCoor );
					pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
					MyImage = gcnew Bitmap( myPic );
	
					pBoxes[dom_count]->ClientSize = System::Drawing::Size( ySize, xSize );// 50на100 отрисовка НЕ дублей.
					MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
					pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);
				}
			else if( 150 < yLeftCoor )
				{
					if(!flag1)
					{
						xLeftCoor-=12;
						flag1++;
					}
					yLeftCoor-=50;
					pBoxes[dom_count]->Location = Point( xLeftCoor, yLeftCoor );
					pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
					MyImage = gcnew Bitmap( myPic );

					pBoxes[dom_count]->ClientSize = System::Drawing::Size( xSize, ySize );// 50на100 отрисовка НЕ дублей.
					//MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
					pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);
				}
			else
				{
					if(!flag3)
					{
						xLeftCoor -= 25;
						flag3++;
					}
					xLeftCoor += 50;
					pBoxes[dom_count]->Location = Point( xLeftCoor, yLeftCoor );
					pBoxes[dom_count]->SizeMode = PictureBoxSizeMode::StretchImage;
					MyImage = gcnew Bitmap( myPic );
	
					pBoxes[dom_count]->ClientSize = System::Drawing::Size( ySize, xSize );// 50на100 отрисовка НЕ дублей.
					MyImage->RotateFlip( RotateFlipType::Rotate90FlipY );//поворот вертикальной картинки - не нужен если ДУБЛЬ
					pBoxes[dom_count]->Image = dynamic_cast<Image^>(MyImage);

				}
			
			this->button9->Hide();
			this->button10->Hide();
			dom_count++;			
		 }
};
}

