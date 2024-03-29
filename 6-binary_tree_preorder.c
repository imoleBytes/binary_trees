#include "binary_trees.h"

/**
* binary_tree_preorder - function that goes through a binary tree
*							using pre-order traversal
* @tree: pointer to root
* @func: pointer to a function
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/**
	* visit root
	* visit left
	* visit right
	*/
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
