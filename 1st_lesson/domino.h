#pragma once
#include "bone.h"
#include "Form1.h"

namespace My1st_lesson {

ref class domino
{
public:
	domino();
	int  get_hand_count(void);
	void SetObserver(System::Windows::Forms::Form^ pForm); // binds pointer to Form with pointer to domino
	void InvitePlayer(void); // button which invites player to start a game
	void CreateGame(void); // makes an array of bones and dyn. arrays of pointers to bone 
private:				   // responds for market table and hands	
	array<bone^> ^ArrDomino;
	array<bone^> ^ArrHand;
	//array<bone^> ^ArrMarket;
	//array<bone^> ^ArrTable;
	int count_hand;
	//void CreateHand(void);
};

}