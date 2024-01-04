#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 *						in a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: 0 If tree is NULL, or depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
