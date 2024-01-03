#include "binary_trees.h"

/**
* binary_tree_inorder - function that goes through a binary tree
*						using in-order traversal
* @tree: pointer to root
* @func: pointer to a function
*/


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


// int main(void)
// {
//     binary_tree_t *root;
//     size_t leaves;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);

//     leaves = binary_tree_leaves(root);
//     printf("Leaves in %d: %lu\n", root->n, leaves);
//     leaves = binary_tree_leaves(root->right);
//     printf("Leaves in %d: %lu\n", root->right->n, leaves);
//     leaves = binary_tree_leaves(root->left->right);
//     printf("Leaves in %d: %lu\n", root->left->right->n, leaves);
//     return (0);
// }
