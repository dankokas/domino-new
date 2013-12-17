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
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	domino^ pD = gcnew domino();	//
	//Form1::Form^ pForm = gcnew Form1::Form();//указатель на форму - который передам в класс домино
	//pD->SetObserver(pForm);
	//Domino->SetObserver(pForm);
	// Create the main window and run it
	//Application::Run(pForm);
	//Application::Run(gcnew Form1());
	//bone^ B = gcnew bone(1,2);
	return 0;
}

//func create new windows
