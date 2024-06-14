#include <iostream>
#include <string>
using namespace std;

class node {
    public :
    string info;
	Node *leftchild;
	Node *rightchild;

	Node(string i, Node *l, Node *r) {
		info = i;
		leftchild = l;
		rightchild = r;
	}
};