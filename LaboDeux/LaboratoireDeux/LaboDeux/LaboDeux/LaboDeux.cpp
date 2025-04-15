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
	string word = "";
	string reversedWord = "";

	cin >> word;

	for (int i = size(word) - 1; i >= 0; i--)
	{
		reversedWord.push_back(word[i]);
	}

	if (reversedWord == word)
	{
		cout << "Ce mot est un palindrome" << endl;
	}
	else
	{
		cout << "Ce mot n'est pas un palindrome" << endl;
	}
}

void ExerciceCinq()
{
	string sentence = "";
	string tempNumber = "";
	int totalNumber = 0;

	getline(cin, sentence);

	for (int i = 0; i < size(sentence); i++)
	{
		if (sentence[i] >= 48 && sentence[i] <= 57)
		{
			tempNumber.push_back(sentence[i]);
		}
		else if (size(tempNumber) > 0)
		{
			totalNumber += stoi(tempNumber);
			tempNumber = "";
		}
	}

	if (size(tempNumber) > 0)
	{
		totalNumber += stoi(tempNumber);
	}
	cout << totalNumber;
}

int main()
{
	//ExerciceUn();
	//ExerciceDeux();
	//ExerciceTrois();
	//ExerciceQuatre();
	//ExerciceCinq();
}
