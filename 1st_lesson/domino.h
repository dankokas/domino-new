#pragma once

#include "bone.h"
#include "Form1.h"

ref class domino
{
public:
	domino();
	void  create_hand(void);
	int  get_hand_count(void);
	void SetObserver(Form1^ pForm);//доделать функцию принимающую на вход указатель на форму
private:						//'Form1' : is not a class or namespace name
	array<bone^> ^hand;
	int count_hand;
};

