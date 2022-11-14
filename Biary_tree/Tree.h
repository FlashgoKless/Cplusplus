

class Tree {
	struct Treenode {
		int data;
		Treenode* left;
		Treenode* right;
		Treenode* parent;
	};
	Treenode* root;
	Treenode* findRecursive(Treenode *cur, int node);
public:
	Tree() : root(nullptr) {};
	Tree(Treenode* r) : root(r) {};
	//Tree(Tree& r) {};
	Treenode* findNode(int node);
	Treenode* findRecursive(int node);
};