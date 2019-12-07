#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a biary tree.
 * @tree: root node.
 * Return: height of tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t i = 0, j = 0;


	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	i = binary_tree_height(tree->left);

	j = binary_tree_height(tree->right);

	if (i > j)
		return (1 + i);

	else
		return (1 + j);

}
