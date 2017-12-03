#ifndef _BEGIN_PROGRAM_H
#define _BEGIN_PROGRAM_H
#include "AVLTree.h"
#include <fstream>
#include <iostream>

using namespace std;

class BeginProgram {
private:
	AVLTree oak;
	SearchTree mahogany;
	ofstream myFile;
public:
	BeginProgram();
	void start();
protected:
	void fillTree(SearchTree st, AVLTree at, string fileName);
	void stringToEntry(string s, Entry & e);
	int menu();
	void performAction(AVLTree& tree, int _case);
	void performAction(SearchTree& tree, int _case);
};
#endif // !_BEGIN_PROGRAM_H

