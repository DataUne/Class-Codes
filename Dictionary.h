#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)

// Converts key current character into index
// use only 'a' through 'z' and lower case
#define INDEX(c) ((int)c - (int)'a')


struct Node {
	// Your data structure goes here
	struct Node *leafNodes[ALPHABET_SIZE];
};

class Dictionary
{
public:
	Dictionary();
	Dictionary(string file);
	void addWord(string word);
	bool isWord(string word);
	bool isPrefix(string word);
	int wordCount();

private:
	Node* root;
	Node* next;
	Node* prev;

	int numWords;
	// Any private methods you need/want
};


Dictionary::Dictionary()
{

}
Dictionary::Dictionary(string file) 
{
	Node* getline;

	ifstream(file);
	numWords = 0;
	string line;
	while (getline(myFile, line)) {
		cout << line << endl;
	}

	addWord();
}
bool Dictionary::isPrefix(string word)
{
	int level;
	int length = word.length();
	int index;
	
	struct Node *iterate = root;

	for (level = 0; level < length; level++)
	{
		index = INDEX(word[level]);

		if(!iterate->leafNodes[index])
			iterate->leafNodes[index] = 

	}


}
bool Dictionary::isWord(string word)
{


}

void Dictionary::addWord(string word)
{
	Node* newNode;
	Node* nodePtr;
	Node* root;

	for (current.next!= NULL)
	{

	}

}
int Dictionary::wordCount()
{

}

