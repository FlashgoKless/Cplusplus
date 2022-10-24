#pragma once
class Tree {
	struct Treenode {
		int data;
		Treenode* left;
		Treenode* right;
		Treenode* parent;
	};
	Treenode* root;
public:
	Tree() : root(nullptr) {};
	Tree(Treenode* r) : root(r) {};
	Tree(Tree& r) {};
	Treenode* findNode(int node);
};