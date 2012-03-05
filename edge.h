#ifndef EDGE_H
#define EDGE_H

//forward declaration
class word;

class edge {
public:
	word* wordptr;
	int getEncountered();
private:
	int encountered;
};

#endif