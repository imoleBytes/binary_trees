#include "binary_trees.h"

/**
* array_to_bst - Builds a binary search tree from an array.
* @array: A pointer to the first element of the array
* @size: The number of elements in array.
*
* Return: A pointer to the root node of the created BST, or NULL upon failure.
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}

	return (tree);
}

// int main(void)
// {
//     bst_t *tree;
//     int array[] = {
//         79, 47, 68, 87, 84, 91, 21, 32, 34, 2,
//         20, 22, 98, 1, 62, 95
//     };
//     size_t n = sizeof(array) / sizeof(array[0]);

//     tree = array_to_bst(array, n);
//     if (!tree)
//         return (1);
//     binary_tree_print(tree);
//     return (0);
// }
