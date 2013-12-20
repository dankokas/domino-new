// 1st_lesson.cpp : main project file.

#include "stdafx.h"
#include "stdio.h"
#include "Form1.h"
#include "bone.h"
#include "domino.h"

using namespace My1st_lesson;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	//Application::EnableVisualStyles();
	//Application::SetCompatibleTextRenderingDefault(false);
	domino^ pD = gcnew domino();
	pD->CreateGame();
	//Form1::Form^ pForm = gcnew Form1::Form();
	//pD->SetObserver(pForm);
	//bone^ B = gcnew bone();

	// Create the main window and run it

	//Application::Run(pForm);
	//Application::Run(gcnew Form1());

	//array<bone^> ^ArrDomino;
	//ArrDomino = gcnew array<bone^>( 28 );
	//for( int i = 0; i < 28; i++ )
	//{
	//	bone ^pBone = gcnew bone();
	//		ArrDomino[i] = pBone;
	//} // this cycle makes an array of bones for game. 
	
	//ArrDomino->Clear(ArrDomino,7,1);// removing 7th element
	return 0;
}
