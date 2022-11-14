#include "Tree.h"
Tree::Treenode* Tree::findNode(int node) {
	Tree::Treenode* cur = root;
	int state= 0;
	while (true) {
		if (cur->data == node) return cur;
		if (cur->left != nullptr and state<1) {
			cur = cur->left;
			state = 0;
		}
		else {
			if (cur->right != nullptr and state<2) {
				cur = cur->right;
				state = 0;
			}
			else {
				if (cur == cur->parent->left) {
					state = 1;
				}
				else { state = 2;
				}
				if (cur->parent == nullptr) {
					return nullptr;
				}
				cur = cur->parent;
			}
		}
	}
}


Tree::Treenode* Tree::findRecursive(int node)
{
	return Tree::findRecursive
}