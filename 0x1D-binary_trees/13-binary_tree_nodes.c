#include "binary_trees.h"

/**
 * binary_tree_nodes - number of nodes with at least one child.
 * @tree: pointer to root
 * Return: number o nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right  = 0;


	if (!tree || (!tree->left && !tree->right))
		return (0);


	if (tree->left && tree->right)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		return (1 + left + right);
	}

	if (tree->left)
	{
		left =  binary_tree_nodes(tree->left);
		return (1 + left);
	}

	else
	{
		right =  binary_tree_nodes(tree->right);
		return (1 + right);
	}


}
