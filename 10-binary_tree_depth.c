#include "binary_trees.h"
/**
 * binary_tree_depth - I used this function to get the depth of a certain node.
 * @tree: the ptr to the node to calculate ots depth.
 * Return: it returns an int that represents the depth.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d_int = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
	{
		d_int += binary_tree_depth(tree->parent);
		d_int += 1;
	}
	return (d_int);
}
