#include "binary_trees.h"

/**
 * bst_insert - inset a value in a binary search tree
 * @tree: double pointer to root node
 * @value: value associaed with new node
 * Return: pointer to new node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node, *tmp = *tree;
	int v = value;

	new_node = malloc(sizeof(bst_t));

	if (!new_node)
		return (NULL);

	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;
	new_node->parent = NULL;

	if (!*tree)
	{
		*tree = new_node;
		return (new_node);
	}

	while ((v > tmp->n && tmp->right) || (v < tmp->n && tmp->left))
		if (v > tmp->n)
			tmp = tmp->right;
		else
			tmp = tmp->left;
	if (v > tmp->n)
		tmp->right = new_node;

	else if (v < tmp->n)
		tmp->left = new_node;
	else
	{
		free(new_node);
		new_node = NULL;
	}

	if (new_node)
		new_node->parent = tmp;

	return (new_node);
}
