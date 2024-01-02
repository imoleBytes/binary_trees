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

	// visit left
	// visit root
	// visit right

	
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}




/**
 * print_num - Prints a number
 *
 * @n: Number to be printed
 */
// void print_num(int n)
// {
//     printf("%d\n", n);
// }

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
// int main(void)
// {
//     binary_tree_t *root;

//     root = binary_tree_node(NULL, 98);
//     root->left = binary_tree_node(root, 12);
//     root->right = binary_tree_node(root, 402);
//     root->left->left = binary_tree_node(root->left, 6);
//     root->left->right = binary_tree_node(root->left, 56);
//     root->right->left = binary_tree_node(root->right, 256);
//     root->right->right = binary_tree_node(root->right, 512);

//     binary_tree_print(root);
//     binary_tree_inorder(root, &print_num);
//     return (0);
// }
