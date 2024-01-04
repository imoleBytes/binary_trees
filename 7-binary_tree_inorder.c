#include "binary_trees.h"

/**
* binary_tree_inorder - function that goes through a binary tree
*						using in-order traversal
* @tree: pointer to root
* @func: pointer to a function
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/**
	* visit left
	* visit root
	* visit right
	*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
