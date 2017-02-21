// Bar.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include "beer.h"
#include "wine.h"
using namespace std;

const int SHELF_SIZE = 20;

/* list all options */
const void ListOptions(Drink * stock[SHELF_SIZE],int stockCount);
/* fill stock */
int FillStock(Drink * stock[SHELF_SIZE]);
int main()
{
	bool exit = false;
	int option;
	int  last = -1;
	Drink * stock[SHELF_SIZE];
	int stockSize = FillStock(stock);
	cout << "welcome to puzzles" << endl;
	do
	{
		cout << endl << "What can i get you? (0 - list options)" << endl;
		cin >> option;
		switch (option)
		{
		case 0:
			ListOptions(stock, stockSize);
			break;
		case 99:
			if (last >= 0)
			{
				cout << "You ordered " << stock[last]->GetName() << endl;
				if (strcmp(stock[last]->GetName(), "Mehashefi") == 0)
				{
					cout << "Mehashefi is a beer we make here in Puzzles." << endl;
					cout << "Well, first you need to cook the beer with water, barley and malt." << endl;
					cout << "Then you need to add yeast and let it sit in a barrel for about two weeks." << endl;
					cout << "Lastly, you add sugar and pour beer to bottles, and wait another two weeks." << endl;
					cout << "And thats how you have your own beer." << endl;
				}
				else
					cout << "Well, all you need to do is " << stock[last]->Prepare() << endl;
			}
			else
				cout << "You havent ordered anything yet" << endl;
			break;
		case 100:
			cout << "bar is closed, goodnight" << endl;
			exit = true;
			break;
		default:
			if (option > 0 && option <= stockSize)
			{
				cout << "One " << stock[option - 1]->GetName() << " coming up,sir" << endl;
				last = option - 1;
			}
			else
				cout << "we dont have that in stock" << endl;
			break;
		}
	} while (!exit);
    return 0;
}

const void ListOptions(Drink * stock[SHELF_SIZE],int stockCount)
{
	cout <<  "0\tlist options" << endl;
	for (int i = 0; i < stockCount; i++)
	{
		cout << i + 1 << "\t" << stock[i]->GetName();
		if (strcmp(stock[i]->GetName(), "Mehashefi") == 0)
			cout << " (this is our house beer)";
		cout << endl;
	}
	cout << "99\tHow did you prepare my last drink?" << endl;
	cout << "100\tLeave the bar\n" << endl;
}

int FillStock(Drink * stock[SHELF_SIZE])
{
	int counter = 0;
	stock[counter++] = new Beer("Heineken");
	stock[counter++] = new Beer("Goldstar");
	stock[counter++] = new Beer("Macabbi");
	stock[counter++] = new Beer("Tuborg");
	stock[counter++] = new Beer("Mehashefi");

	stock[counter++] = new Wine(1986, "Karmel Emerald Risling");
	stock[counter++] = new Wine(1986, "Golan Smadar");
	stock[counter++] = new Wine(1986, "Yarden Haar Hermon","red");
	stock[counter++] = new Wine(1997, "Psagot", "red");
	return counter;
}
