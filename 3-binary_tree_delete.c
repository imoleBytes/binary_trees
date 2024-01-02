#include "binary_trees.h"


/**
if tree == null
	return;
if lleft and right == null
	delete node
else
	tree_delete(tree.left)
	tree_dete(tree.right)
	delete node
*/

/**OR 
if tree == null
	return;
else
	tree_delete(tree.left)
	tree_dete(tree.right)
	delete node
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
