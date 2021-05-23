#include <iostream>
using namespace std;
int g, a;
float w, h, men, women;
void menfun()
{
	cout << "pls put your waight 'kg' ";
	cin >> w;
	cout << " your hieght 'cm' ";
	cin >> h;
	cout << "your age ";
	cin >> a;
	men = 66.47 + (13.7 * w) + (5 * h) - (6.8 * a);
	cout << "this is how many caluries your budy burn in a day ";
	cout << men;
	cout << " PS : no exersize" << endl;
	
}
void womenfun()
{
	cout << "pls put your waight 'kg' ";
	cin >> w;
	cout << " your hieght 'cm' ";
	cin >> h;
	cout << "your age ";
	cin >> a;
	women = 655.1 + (9.6 * w) + (1.8 * h) - (4.7 * a);
	cout << "this is how many caluries your budy burn in a day \n";
	cout << women;
	cout << " PS : no exersize" << endl;
}

int main()
{
	bool flag = true;
	do {

		cout << " this is a caluries calculater "<<endl;
		cout << "\n" << endl; 
		cout << " pls put your gender (1 for male , 2 for female)" << endl;
		cin >> g;
		switch (g)
		{
		case 1: menfun();
			break;
		case 2: womenfun();
				break;
			default: cout << " choose a correct gender pls ";
		}
	} while (flag);
	

}