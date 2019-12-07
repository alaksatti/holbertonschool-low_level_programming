#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lwest common ancestor of two nodes.
 * @first: pointer to first node
 * @second: pointer to second node.
 * Return:  pointer to lowest common ancestor node
 **/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t f_depth = 0, s_depth = 0;

	if (!first || !second)
		return (NULL);


	f_depth = binary_tree_depth(first);
	s_depth = binary_tree_depth(second);


	while (f_depth > s_depth)
	{
		f_depth--;
		first = first->parent;
	}


	while (s_depth > f_depth)
	{
		s_depth--;
		second = second->parent;
	}

	while (first || second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;

	}
	return (NULL);
}
/**
 * binary_tree_depth - finds the depth of a node
 * @tree: node to be evaluated
 * Return: depth
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
        size_t depth = 0;


        if (!tree || !tree->parent)
                return (0);

        depth  =  binary_tree_depth(tree->parent);



        return (depth + 1);






}
