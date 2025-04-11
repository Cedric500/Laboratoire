#include <iostream>
#include <string>

using namespace std;

void ExerciceUn()
{
	string word = "allo";

	cin >> word;
	cout << "Resultat :";

	for (int i = 0; i < size(word); i++)
	{
		char letter = word.at(i);
		letter++;
		cout << letter;
	}
}

void ExerciceDeux()
{
	string words = "hello world";

	getline(cin, words);
	cout << "Correction :";

	for (int i = 0; i < size(words); i++)
	{
		char letter = words[i];

		if (i == 0)
		{
			letter -= 32;
		}
		else if (words[i - 1] == 32)
		{
			letter -= 32;
		}
		words[i] = letter;
	}
	cout << words;
}

void ExerciceTrois()
{
	string words = "";

	getline(cin, words);
	cout << "Plus long mot :";

	string longestWord = "";
	string currentWord = "";

	for (int i = 0; i < size(words); i++)
	{
		if (words[i] == 32)
		{
			if (size(currentWord) > size(longestWord))
			{
				longestWord = currentWord;
			}
			currentWord = "";
			continue;
		}
		currentWord.push_back(words[i]);
	}
	cout << longestWord;
}

void ExerciceQuatre()
{

}

void ExerciceCinq()
{

}

void ExerciceSix()
{

}

int main()
{
	//Termine
	//ExerciceUn();
	//ExerciceDeux();
	ExerciceTrois();

	//NonTermine
	//ExerciceQuatre();
	//ExerciceCinq();
	//ExerciceSix();
}
