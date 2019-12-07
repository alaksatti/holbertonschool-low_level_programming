#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs left rotation on a binary tree
 * @tree: toot node of tree
 * Return: pointer to new root node.
 *
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *holder, *new_parent;

	if (!tree || !tree->right)
		return (NULL);


	holder= tree->right;
	new_parent = tree->parent;
	tree->right = holder->left;


	if (holder->left)
		holder->left->parent = tree;

	holder->left = tree;
	holder->parent = new_parent;
	tree->parent = holder;

	return (holder);



}
