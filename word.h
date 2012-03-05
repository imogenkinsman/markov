#ifndef WORD_H
#define WORD_H
#include "edge.h"
#include <vector>
#include <string>

using std::vector;
using std::string;

//forward declaration
class edge;

class word {

private:
	vector<edge> adjacent;
	string wordString;

public:
	word* getNext();
	void addAdj(string newAdj);
	bool checkAdj(string checkStr);
	string getWordString();

	//explicit constructor
	explicit word(string newWord);
	//default constructor
	word();
};


#endif