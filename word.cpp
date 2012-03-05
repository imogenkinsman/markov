#include "word.h"

word* word::getNext(){
	int weight = 0;
	for (int i = 0; i < adjacent.size(); i++){
		weight += adjacent[i].getEncountered();
	}
}

//add new edge with weight of 1
void word::addAdj(string newAdj){
	//adjacent.push_back(edge(
	//fff how do I do this ;_; pass pointers maybe idk
}

string word::getWordString(){
	return wordString;
}

//Returns true if string is in adjacency list
bool word::checkAdj(string checkStr){
	bool retVal = false;
	for (int i = 0; i < adjacent.size(); i++){
		if ((*(adjacent[i].wordptr)).getWordString() == checkStr){
			retVal = true;
		}
	}
	return retVal;
}

word::word(string newWord){
	wordString = newWord;
}

word::word(){

}