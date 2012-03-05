#include <map>
#include <string>
#include "word.h"
#include <iostream>
#include <fstream>

using std::map;
using std::string;
using std::cout;
using std::cin;
using std::getline;
using std::ifstream;

map<string,word> wordlist;
//the map should already include a tab char, add this here
//map<string,word>::iterator currIt;

//checks to add new element to map and/or increment edge strength
void checkMap(string current, string prior){
	if (wordlist.count(current) == 0){
		wordlist[current] = word(current);
	}
	//link prior and current, or increment
	if (wordlist[prior].checkAdj(current)){
	//increment
	} else {
	wordlist[prior].addAdj(current);
	}

}

//iterates through text file and generates markov chain
//Jade note: I may do this with fscanf and do a check for tab char
void readfile(string inputStr){

	
	char buffer[2048];
	char prior[30] = "\t";
	char current[30] = "\t";
	string currStr;
	string priorStr;

	FILE * fin;
	fin = fopen(inputStr.c_str(), "r");
	if (fin == NULL){
		cout << "Error reading file\n";
		return;
	}
	while (!feof(fin)){
		strcpy(current, prior);
		fscanf(fin, "%s", current);
		currStr = current;
		priorStr = prior;
		checkMap(currStr, priorStr);
	}


	return;
}

int main() {

string inputStr;

while (1){
	cout << "Enter file name to parse, or \'end\' to create markov: ";
	cin >> inputStr;
	if (inputStr == "end"){
		break;
	} else {
		readfile(inputStr);
	}
}

string output;
int numWords;

cout << "Enter number of words for output: ";
cin >> numWords;
cout << "Enter output file name: ";
cin >> output;

FILE * outfile;
outfile = fopen(output.c_str(), "w");

//Generate markov here, and ask for output file name and word length

for (int i = 0; i < numWords; i++){
	//add a string each time, using getNext function
}

return 0;
}