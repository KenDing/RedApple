/* 
* @Author: sxf
* @Date:   2015-09-22 19:21:10
* @Last Modified by:   sxf
* @Last Modified time: 2015-10-10 21:24:26
*/

#ifndef NODE_H
#define NODE_H

#include <string>

class Node
{
public:
	Node();
	Node(Node* n);
	~Node();

	void addChildren(Node* n);
	void addBrother (Node* n);
	
	static Node* make_list(int num, ...);

	void print(int k);
	Node* getNext() { return next; }
	Node* getChild() { return child; }

	virtual std::string getType();
protected:
	virtual void printSelf();

	Node* next;
	Node* child;
};


#endif // NODE_H
