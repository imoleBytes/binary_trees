#include "binary_trees.h"



size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + (binary_tree_size(tree->left) + binary_tree_size(tree->right)));
}


// int main(void)
// {
//     binary_tree_t *root;
//     size_t size;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     binary_tree_insert_right(root->left, 54);
//     binary_tree_insert_right(root, 128);
//     binary_tree_print(root);

//     size = binary_tree_size(root);
//     printf("Size of %d: %lu\n", root->n, size);
//     size = binary_tree_size(root->right);
//     printf("Size of %d: %lu\n", root->right->n, size);
//     size = binary_tree_size(root->left->right);
//     printf("Size of %d: %lu\n", root->left->right->n, size);
//     return (0);
// }
