#include <iostream>
#include <fstream>
// the game dont reset after every game Done
// if Player one play o in 5 Player two can play x in 5 too  Done
// we need to print all steps in the same place  Done
// what if the player enter wrong key witch means <1 && >9 Done 

using namespace std;
void drow();
void Xplay();
void Oplay();
void pwon();
void clear();

char  a1 = '1', a2 = '2'
	, a3 = '3', a4 = '4'
	, a5 = '5', a6 = '6'
	, a7 = '7', a8 = '8'
	, a9 = '9',n;
int ix, io;


int main()
{
	do {
		while (true)
		{
			// first draw
			system("cls");
			drow();
			// X palyer turn
			Xplay();
			// Delete steps
			system("cls");
			drow();
			// Check witch player wons and if they want play again or no
			pwon();



			// O palyer turn
			Oplay();
			//  Delete steps
			system("cls");
			drow();
			// Check witch player wons and if they want play again or no
			pwon();
		
			
		}
	} while (n == 'y');
	return 0;
}


void drow()
{
	cout << "\t" << a1 << "\t" << "|" << "\t" << a2 << "\t" << "|" << "\t" << a3 << endl<<endl;
	cout << "\t" << a4 << "\t" << "|" << "\t" << a5 << "\t" << "|" << "\t" << a6 << endl<<endl;
	cout << "\t" << a7 << "\t" << "|" << "\t" << a8 << "\t" << "|" << "\t" << a9 << endl<<endl;
}

void  Xplay()
{
	cout << "player X your turn enter number :";
	label:
	cin >> ix;
	 if (ix<1 ||ix>9)
	{
		cout<<"Wrong number plz enter anther number :";
		goto label;
	}
	
	switch (ix)
	{
	case 1:
	if (a1=='O'||a1=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
	
	
		a1 = 'X';
		break;
	case 2:
	if (a2=='O'||a2=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a2= 'X';
		break;
	case 3:
	if (a3=='O'||a3=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a3 = 'X';
		break;
	case 4:
	if (a4=='O'||a4=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a4 = 'X';
		break;
	case 5:
	if (a5=='O'||a5=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a5 = 'X';
		break;
	case 6:
	if (a6=='O'||a6=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a6 = 'X';
		break;
	case 7:
	if (a7=='O'||a7=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a7 = 'X';
		break;
	case 8:
	if (a8=='O'||a8=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a8 ='X';
		break;
	case 9:
	if (a9=='O'||a9=='X')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a9 = 'X';
		break;
	default:
		cout << "plase inter number von 1 bis 9" << endl;
		break;
	}
}

void Oplay()
{
	cout << "player O your turn enter number  :";
	label:
	cin >> io;
	 if (io<1 ||io>9)
	{
		cout<<"Wrong number plz enter anther number :";
		goto label;
	}
	
	switch (io)
	{
	case 1:
	if (a1=='X'||a1=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a1 = 'O';
		break;
	case 2:
		if (a2=='X'||a2=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a2 = 'O';
		break;
	case 3:
		if (a3=='X'||a3=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a3 = 'O';
		break;
	case 4:
		if (a4=='X'||a4=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a4 = 'O';
		break;
	case 5:
		if (a5=='X'||a5=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
		a5 = 'O';
		break;
	case 6:
		if (a6=='X'||a6=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
	
		a6 = 'O';
		break;
	case 7:
		if (a7=='X'||a7=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
	
		a7 = 'O';
		break;
	case 8:
		if (a8=='X'||a8=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
	
		a8 = 'O';
		break;
	case 9:
		if (a9=='X'||a9=='O')
	{
		cout<<"it's aleady taken plz enter onther number:";
		goto  label;
		
	}
	
		a9 = 'O';
		break;
	default:
		cout << "plase inter number von 1 bis 9" << endl;
		break;
	}
}

void pwon()

{
	if (a1 == a2 && a2 == a3 && a3 == 'X' || a4 == a5 && a5 == a6 && a6 == 'X' || a7 == a8 && a8 == a9 && a9 == 'X'
		|| a1 == a4 && a4 == a7 && a7 == 'X' || a2 == a5 && a5 == a8 && a8 == 'X' || a3 == a6 && a6 == a9 && a9 == 'X'
		|| a1 == a5 && a5 == a9 && a9 == 'X' || a3 == a5 && a5 == a7 && a7 == 'X')
	{
		cout << "player X won" << endl;
		cout << "want play another game y for yes ,n for no" << endl;
		cin >> n;
		
	}
	else if (a1 == a2 && a2 == a3 &&a3=='O' || a4 == a5 && a5 == a6 && a6 == 'O' || a7 == a8 && a8 == a9 && a9 == 'O'
		|| a1 == a4 && a4 == a7 && a7 == 'O' || a2 == a5 && a5 == a8 && a8 == 'O' || a3 == a6 && a6 == a9 && a9 == 'O'
		|| a1 == a5 && a5 == a9 && a9== 'O' || a3 == a5 && a5 == a7 && a7 == 'O')
	{
		cout << "player O won" << endl;
		cout << "want play another game y for yes ,n for no" << endl;
		cin >> n;
		}
			if (n == 'y')
			{
				clear();
			
			}
		else if (n == 'n')
   		 exit (EXIT_FAILURE);

}

void clear()
{
	
		 a1 = '1';
		 a2 = '2';
		 a3 = '3';
		 a4 = '4';
		 a5 = '5';
		 a6 = '6';
		 a7 = '7';
		 a8 = '8';
		 a9 = '9';
		n = ' ';
	
}
