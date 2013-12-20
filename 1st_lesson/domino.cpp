#include "StdAfx.h"
#include "domino.h"
using namespace My1st_lesson;

domino::domino(void)
{	
}


int domino::get_hand_count(void)
{
	return count_hand;
}

void domino::SetObserver(System::Windows::Forms::Form^ pForm)
{
	
}

void domino::CreateGame(void)// makes an arrays of bones for 1 player and market 
{							 // and shows player's bones on screen.
	int n = 6;
	int i = 0;
	int k = 0;
	int buf = 0;
	ArrDomino = gcnew array<bone^>( 28 );
	for( i = 0; i < 28; i++ )
	{
		bone ^pBone = gcnew bone();
		ArrDomino[i] = pBone;
	} // this cycle makes an array of bones for game. 
	// ------------------------
	i = 0;
	srand(NULL);//randomize player's bones. comment if want same bone for each time.
	int Arr[7];
	Arr[i] = rand()%28 + 1;
	while(i < n)
	{
		i++;
		Arr[i] = rand()%28 + 1;
		for( k = 0; k < i; k++ )
		{
			if( Arr[k] == Arr[i] )
			{
				i--;
				break;
			}
		}//-----------------------	
	}// this part is creating array 
	//of random not repeated numbers
	ArrHand = gcnew array<bone^>( 7 );
	for( i = 0; i < 7; i++ )
	{
		bone ^pBone = gcnew bone();
		ArrHand[i] = pBone;
		ArrHand[i] = ArrDomino[Arr[i]];
	} // this cycle makes an array of bones for player.

}
void domino::InvitePlayer(void)// makes a button with invitation to start a game
{

}
/*
	int n = 9;
	int i = 0;
	int k = 0;
	int buf = 0;
	int Arr[10];
	Arr[i] = rand()%10 + 1;
	while(i < n)
	{
		i++;
		Arr[i] = rand()%10 + 1;
		for( k = 0; k < i; k++ )
		{
			if( Arr[k] == Arr[i] )
			{
				i--;
				break;
			}
		}	
	}
	*/