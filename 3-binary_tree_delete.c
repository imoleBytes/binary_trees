#include "binary_trees.h"


/**
* binary_tree_delete - delete a node in a binary tree.
* @tree: poiter to root
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
	{
		;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
