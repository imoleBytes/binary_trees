#include "binary_trees.h"


binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *old_left_of_child;
	binary_tree_t *right_child_of_parent;
	/*
	* to roate left
	* right child of the parent becomes the left child
	* of the right child of the parent
	*/

	if (!tree)
		return (NULL);

	right_child_of_parent = tree->right;
	old_left_of_child = right_child_of_parent->left;
	right_child_of_parent->left = tree;
	tree->right = old_left_of_child;

	if (old_left_of_child != NULL)
		old_left_of_child->parent = tree;
	old_left_of_child = tree->parent;
	tree->parent = right_child_of_parent;
	right_child_of_parent->parent = old_left_of_child;
	if (!old_left_of_child)
	{
		if (old_left_of_child->left == tree)
			old_left_of_child->left = right_child_of_parent;
		else
			old_left_of_child->right = right_child_of_parent;
	}

	return (right_child_of_parent);
}


int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->right = binary_tree_node(root, 128);
    root->right->right = binary_tree_node(root->right, 402);
    binary_tree_print(root);
    printf("Rotate-left %d\n", root->n);
    root = binary_tree_rotate_left(root);
    binary_tree_print(root);
    printf("\n");

    root->right->right = binary_tree_node(root->right, 450);
    root->right->left = binary_tree_node(root->right, 420);
    binary_tree_print(root);
    printf("Rotate-left %d\n", root->n);
    root = binary_tree_rotate_left(root);
    binary_tree_print(root);
    return (0);
}
