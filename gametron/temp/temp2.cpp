#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;

class snl
{
	bool p1=true,p2;

	int pos1=0,pos2=0;

	int snake[11]={27,35,39,50,59,66,73,76,89,97,99};
	int snake2[11]={7,5,3,34,46,24,12,63,67,86,26};

	int ladder[10]={2,14,22,28,30,44,54,70,80,87};
	int ladder2[10]={23,29,41,77,32,58,69,90,83,93};

	int dice;

	public:
	void board()
	{
		int a[10][10]={{1,2,3,4,5,6,7,8,9,10},{11,12,13,14,15,16,17,18,19,20},{21,22,23,24,25,26,27,28,29,30},{31,32,33,34,35,36,37,38,39,40},{41,42,43,44,45,46,47,48,49,50},{51,52,53,54,55,56,57,58,59,60},{61,62,63,64,65,66,67,68,69,70},{71,72,73,74,75,76,77,78,79,80},{81,82,83,84,85,86,87,88,89,90},{91,92,93,94,95,96,97,98,99,100}};

			cout<<" \t\t\tS N A K E    A N D    L A D D E R\n\n";
			cout<<"     |     | *L10|     |     |     |  S10|     |  S11|     \n";
			cout<<"  "<<a[9][0]<<" | "<<a[9][1]<<"  |  "<<a[9][2]<<" |  "<<a[9][3]<<" |  "<<a[9][4]<<" |  "<<a[9][5]<<" |  "<<a[9][6]<<" |  "<<a[9][7]<<" |  "<<a[9][8]<<" |  "<<a[9][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |     |  *L9|     |     | *S10|  L10|     |   S9|  *L8\n";
			cout<<"  "<<a[8][0]<<" | "<<a[8][1]<<"  |  "<<a[8][2]<<" |  "<<a[8][3]<<" |  "<<a[8][4]<<" |  "<<a[8][5]<<" |  "<<a[8][6]<<" |  "<<a[8][7]<<" |  "<<a[8][8]<<" |  "<<a[8][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |     |   S7|     |     |   S8|  *L4|     |     |   L9\n";
			cout<<"  "<<a[7][0]<<" | "<<a[7][1]<<"  |  "<<a[7][2]<<" |  "<<a[7][3]<<" |  "<<a[7][4]<<" |  "<<a[7][5]<<" |  "<<a[7][6]<<" |  "<<a[7][7]<<" |  "<<a[7][8]<<" |  "<<a[7][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |     |  *S8|     |     |   S6|  *S9|     |  *L7|   L8\n";
			cout<<"  "<<a[6][0]<<" | "<<a[6][1]<<"  |  "<<a[6][2]<<" |  "<<a[6][3]<<" |  "<<a[6][4]<<" |  "<<a[6][5]<<" |  "<<a[6][6]<<" |  "<<a[6][7]<<" |  "<<a[6][8]<<" |  "<<a[6][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |     |     |     |   L7|     |     |  *L6|   S5|     \n";
			cout<<"  "<<a[5][0]<<" | "<<a[5][1]<<"  |  "<<a[5][2]<<" |  "<<a[5][3]<<" |  "<<a[5][4]<<" |  "<<a[5][5]<<" |  "<<a[5][6]<<" |  "<<a[5][7]<<" |  "<<a[5][8]<<" |  "<<a[5][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"  *L3|     |     |   L6|     |  *S5|     |     |     |   S4\n";
			cout<<"  "<<a[4][0]<<" | "<<a[4][1]<<"  |  "<<a[4][2]<<" |  "<<a[4][3]<<" |  "<<a[4][4]<<" |  "<<a[4][5]<<" |  "<<a[4][6]<<" |  "<<a[4][7]<<" |  "<<a[4][8]<<" |  "<<a[4][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |  *L5|     |  *S4|   S2|     |     |     |   S3|     \n";
			cout<<"  "<<a[3][0]<<" | "<<a[3][1]<<"  |  "<<a[3][2]<<" |  "<<a[3][3]<<" |  "<<a[3][4]<<" |  "<<a[3][5]<<" |  "<<a[3][6]<<" |  "<<a[3][7]<<" |  "<<a[3][8]<<" |  "<<a[3][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |   L3|  *L1|  *S6|     | *S11|   S1|   L4|  *L2|   L5\n";
			cout<<"  "<<a[2][0]<<" | "<<a[2][1]<<"  |  "<<a[2][2]<<" |  "<<a[2][3]<<" |  "<<a[2][4]<<" |  "<<a[2][5]<<" |  "<<a[2][6]<<" |  "<<a[2][7]<<" |  "<<a[2][8]<<" |  "<<a[2][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |  *S7|     |   L2|     |     |     |     |     |     \n";
			cout<<"  "<<a[1][0]<<" | "<<a[1][1]<<"  |  "<<a[1][2]<<" |  "<<a[1][3]<<" |  "<<a[1][4]<<" |  "<<a[1][5]<<" |  "<<a[1][6]<<" |  "<<a[1][7]<<" |  "<<a[1][8]<<" |  "<<a[1][9]<<" \n";
			cout<<"_____|_____|_____|_____|_____|_____|_____|_____|_____|_____\n";
			cout<<"     |   L1|  *S3|     |  *S2|     |  *S1|     |     |     \n";
			cout<<"   "<<a[0][0]<<" |  "<<a[0][1]<<"  |   "<<a[0][2]<<" |   "<<a[0][3]<<" |   "<<a[0][4]<<" |   "<<a[0][5]<<" |  "<<a[0][6]<<"  |  "<<a[0][7]<<"  |  "<<a[0][8]<<"  |  "<<a[0][9]<<" \n";
			cout<<"     |     |     |     |     |     |     |     |     |     \n";

		}



	void chance()
	{
		if(p1)
			p2=true;
		else
			p1=true;
	}

	void khel()
	{
		if(p1)
		{
			dice=this->Dice();
			cout<<"DICE: "<<dice;
			this->position();
			cout<<"PLAYER 1: "<<pos1<<endl;
			cout<<"PLAYER 2: "<<pos2<<endl;
		}
		if(p2)
		{
			dice=this->Dice();
			cout<<"DICE: "<<dice;
			this->position();
			cout<<"PLAYER 1: "<<pos1<<endl;
			cout<<"PLAYER 2: "<<pos2<<endl;
		}
	}

	int Dice()
	{
		srand(time(NULL));
		dice=rand()%6+1;
		return dice;
	}

	void position()
	{
		if(p1)
		{
			pos1+=dice;

			for(int i=0;i<11;i++)
			{#include<iostream>


int main()
{
	snl s;
	s.board();
	s.game();

return 0;
}
