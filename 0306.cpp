#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	int Human = 0;
	int Computer = 0;
	int Card[52];
	/*bool Win;
	bool False;*/

	int brackjackhuman[2];
	int brackjackcomputer[2];

	//카드 52장 매핑
	for (int i = 0; i < 13; i++)
	{
		Card[i] = i+1;
		Card[i+13] = i+1;
		Card[i+26] = i+1;
		Card[i+39] = i+1;
	}
	
	// J,Q,K = 10
	Card[10] = 10;
	Card[11] = 10;
	Card[12] = 10;

	Card[23] = 10;
	Card[24] = 10;
	Card[25] = 10;

	Card[36] = 10;
	Card[37] = 10;
	Card[38] = 10;

	Card[49] = 10;
	Card[50] = 10;
	Card[51] = 10;

	//카드 6장 뽑기
	srand(time(NULL));
	int RandomA = rand() % 52;
	int RandomB = rand() % 52;
	int RandomC = rand() % 52;
	int RandomD = rand() % 52;
	int RandomE = rand() % 52;
	int RandomF = rand() % 52;
	
	int Human1 = Card[RandomA];
	int Human2 = Card[RandomB];
	int Human3 = Card[RandomC];
	int Computer1 = Card[RandomD];
	int Computer2 = Card[RandomE];
	int Computer3 = Card[RandomF];

	Human = Human1 + Human2 + Human3;
	Computer = Computer1 + Computer2 + Computer3;
	
	cout << "유저 " << Human1 << " " << Human2 << " " << Human3 << endl;
	cout << "컴퓨터 " << Computer1 << " " << Computer2 << " " << Computer3 << endl;
	cout << endl;
	cout << "유저 " << Human << endl;
	cout << "컴퓨터 " << Computer << endl;
	

	if (Computer > 21 && Human > 21)
		cout << "유저 승리" << endl;
	else if (Computer > 21)
		cout << "유저 승리" << endl;
	else if (Human > 21)
		cout << "컴퓨터 승리" << endl;
	else if (Human > Computer)
		cout << "유저 승리" << endl;
	else if (Computer > Human)
		cout << "컴퓨터 승리" << endl;
	else
		cout << "무승부" << endl;
	/*if (Computer > 21)
	{
		cout << "유저 승리" << endl;
	}
	else if (Human > 21)
	{
		cout << "컴퓨터 승리" << endl;
	}
	else if (Computer > 21 && Human > 21)
	{
		cout << "유저 승리" << endl;
	}
	else
	{
		if (Human > Computer)
		{
			cout << "유저 승리" << endl;
		}
		else if (Computer > Human)
		{
			cout << "컴퓨터 승리" << endl;
		}
		else if (Computer == Human)
		{
			cout << "유저 승리" << endl;
		}
	}*/





	return 0;
}