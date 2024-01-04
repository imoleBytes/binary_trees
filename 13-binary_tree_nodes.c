#include "binary_trees.h"


/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to root
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + (binary_tree_size(tree->left) + binary_tree_size(tree->right)));
}


/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to root
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num;

	num = binary_tree_size(tree) - binary_tree_leaves(tree);

	return (num);
}


// int main(void)
// {
//     binary_tree_t *root;
//     size_t nodes;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);

//     nodes = binary_tree_nodes(root);
//     printf("Nodes in %d: %lu\n", root->n, nodes);
//     nodes = binary_tree_nodes(root->right);
//     printf("Nodes in %d: %lu\n", root->right->n, nodes);
//     nodes = binary_tree_nodes(root->left->right);
//     printf("Nodes in %d: %lu\n", root->left->right->n, nodes);
//     return (0);
// }
