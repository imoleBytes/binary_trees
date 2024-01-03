#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: 0 If tree is NULL, or height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height = 0;
	size_t right_height = 0;
	
	if (tree->left)
		left_height = (1 + binary_tree_height(tree->left));
	else
		left_height = 0;
	if (tree->right)
		right_height = (1 + binary_tree_height(tree->right));
	else
		right_height = 0;
	
    return (left_height > right_height ? left_height : right_height);
}

// int main(void)
// {
//     binary_tree_t *root;
//     size_t height;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);

//     height = binary_tree_height(root);
//     printf("Height from %d: %lu\n", root->n, height);
//     height = binary_tree_height(root->right);
//     printf("Height from %d: %lu\n", root->right->n, height);
//     height = binary_tree_height(root->left->right);
//     printf("Height from %d: %lu\n", root->left->right->n, height);
//     return (0);
// }