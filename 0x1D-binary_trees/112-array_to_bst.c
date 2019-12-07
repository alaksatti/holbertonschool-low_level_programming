#include "binary_trees.h"

/**
 * array_to_bst - builds binary search tree form array
 * @array: pointer to first element in the array to be converted
 * @size: number of elements in the array
 * Return: pointer to root node of BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root_node;
	size_t i = 0;

	if (!size)
		return (NULL);

	for (i = 0; i < size; i++)
		bst_insert(&root_node, array[i]);

	return (root_node);

}
