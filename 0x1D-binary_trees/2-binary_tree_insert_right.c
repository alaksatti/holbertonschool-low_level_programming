#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert node to right of parent
 * @parent: parent.
 * @value: value of node.
 * Return: pointer to node.
 */


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *right_node;


	right_node = binary_tree_node(parent, value);


	if (!right_node)
		return (NULL);

	if (parent->right)
	{

		right_node->right = parent->right;
		right_node->right->parent = right_node;
	}

	parent->right = right_node;

	return (right_node);
}
