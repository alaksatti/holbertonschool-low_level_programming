#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: root node
 * Return: nothing
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;

	if (!tree)
		return (0);


	i = binary_tree_size(tree->left);
	j = binary_tree_size(tree->right);

	return (i + j + 1);







}
