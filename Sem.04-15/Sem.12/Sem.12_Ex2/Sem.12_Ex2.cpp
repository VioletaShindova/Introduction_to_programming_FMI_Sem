// Sem.12_Ex2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Напишете функция, която разбива изречение на думи. Дума е последователност от малки и главни латински букви. 
//Трябва да имате функции за премахване на дума по индекс и разместване на две думи. 
//Напишете и функция, която приема две изречения и връща дали са анаграми.

char* getNextWord(const char*& sentence)
{
	unsigned index = 0;
	
	while (*sentence)
	{

	}
}

bool isLetter(const char symbol)
{
	return ((symbol >= 'A' && symbol <= 'Z') || (symbol >= 'a' && symbol <= 'z'));
}

void skipInvalid(const char*& sentence)
{
	while (*sentence && !isLetter(*sentence))
	{
		sentence++;
	}
	return;
}

unsigned getWordsCount(const char* str)
{
	if (!str)
	{
		return 0;
	}

	unsigned wordsCount = 1;
	while (*str)
	{
		if (*str == ' ')
		{
			wordsCount++;
		}
	}

	return wordsCount;
}

void printWords(char** words, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << words[i] << endl;
	}
	return;
}

void freeMatrix(char** words, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		delete[] words[i];
	}
	delete[] words;
}

char** tokenize(const char* sentence, size_t& size)
{
	unsigned wordsCount = getWordsCount(sentence);

	char** words = new char* [wordsCount];

	unsigned currentWordIndex = 0;

	while (*sentence)
	{
		skipInvalid(sentence); //check if it is a letter

		if (!(*sentence))
		{
			break;
		}

		char* word = getNextWord(sentence);

	}
}

int main()
{
    size_t count;
    char** res = tokenize("hello i am a sentence", count);
}

