#include <iostream>
#include <string>
//#include <bitset>

using namespace std;

void Exercice1()
{
	int a = 1;
	int b = 3;
	int c = 7;
	int d = 8;
	int list[4] = { a,b,c,d };

	int addition = a + b + c + d;
	cout << "La somme des nombres est :" << addition << endl;

	float moyenne = addition / static_cast<float>(4);
	cout << "La moyenne des nombres est :" << moyenne << endl;

	int produit = a * b * c * d;
	cout << "Le produit des nombres est :" << produit << endl;

	int max = a;
	for (int i = 0; i < size(list); i++)
	{
		if (list[i] > max)
		{
			max = list[i];
		}
	}
	cout << "Le nombre maximum est :" << max << endl;

	int min = a;
	for (int i = 0; i < size(list); i++)
	{
		if (list[i] < min)
		{
			min = list[i];
		}
	}
	cout << "Le nombre minimum est :" << min << endl;

}

void Exercice2()
{
	int diametre = 0;
	float aire = 0;
	int rayon = 7;
	float circonference = 0;
	float pie = 3.14159;

	diametre = rayon * 2;

	aire = pie * rayon * rayon;

	circonference = diametre * pie;

	cout << "Le cercle possede :" << diametre << " de diametre!" << endl;
	cout << "Le cercle possede :" << aire << " en air!" << endl;
	cout << "Le cercle possede :" << circonference << " de ciconference!" << endl;

}

void Exercice3()
{
	string name = "";

	cin >> name;
	cout << "Bonjour " << name;
}

void Exercice4()
{
	int num = 43;
	int count = 0;

	for (int i = 0; num > 0; i++)
	{
		if (num & 1)
		{
			count++;
		}

		num = num >> 1;
	}

	cout << count << endl;
}

void Exercice5()
{
	unsigned int num = 43;
	unsigned int reverse = 0;
	unsigned int tempBit = 1;
	bool firstOne = false;

	tempBit = tempBit << 31;

	for (int i = 0; tempBit > 0; i++)
	{
		if (firstOne)
		{
			if ((tempBit & num) == 0)
			{
				reverse = reverse | tempBit;
			}
		}
		else if ((tempBit & num) > 0)
		{
			firstOne = true;
		}
		tempBit = tempBit >> 1;
	}


	cout << reverse << endl;

}

void Exercice6()
{
	int num = 16;
	int count = 0;
	int temp = num;

	for (int i = 0; temp > 0; i++)
	{
		if (temp & 1)
		{
			count++;
		}

		temp = temp >> 1;
	}

	if (count == 1)
	{
		cout << num << " est a la puissance de deux" << endl;
	}
	else
	{
		cout << num << " n'est pas a la puissance de deux" << endl;
	}
}

void Exercice7()
{
	cout << "    *    " << endl;
	cout << "   * *   " << endl;
	cout << "  *   *  " << endl;
	cout << " *     * " << endl;
	cout << "*       *" << endl;
	cout << " *     * " << endl;
	cout << "  *   *  " << endl;
	cout << "   * *   " << endl;
	cout << "    *    " << endl;
}

void Exercice8()
{
	cout << "    *    " << endl;
	cout << "   ***   " << endl;
	cout << "  *****  " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
	cout << "    *    " << endl;
}

void Exercice9()
{
	string numImput = "";
	int total = 0;

	cin >> numImput;

	for (int i = 0; i < size(numImput); i++)
	{
		total += numImput[i] - '0';
	}

	cout << total;
}

void Exercice10()
{
	unsigned int num = 43;
	unsigned int tempBit = 1;

	tempBit = tempBit << 30;

	for (int i = 0; i < 31; i++)
	{
		if ((num & (tempBit >> i)) > 0)
		{
			cout << "1";
		}
		else
		{
			cout << "0";
		}
	}
}

int main(int argc, char** argv)
{
	//Completer
	//Exercice1();
	//Exercice2();
	//Exercice3();
	//Exercice4();
	//Exercice5();
	//Exercice6();
	//Exercice7();
	//Exercice8();
	//Exercice9();
	//Exercice10();

	return 0;
}