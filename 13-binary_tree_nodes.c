#include "binary_trees.h"


/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to root
* Return: size_t
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

/**
 * binary_tree_size - measures the size of a tree
 * @tree: A pointer to the root node of the tree.
 * Return: 0 If tree is NULL, or size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + (binary_tree_size(tree->left) + binary_tree_size(tree->right)));
}

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to root
* Return: size_t
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num;

	num = binary_tree_size(tree) - binary_tree_leaves(tree);

	return (num);
}
