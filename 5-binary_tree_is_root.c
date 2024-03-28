#include "binary_trees.h"
/**
 * binary_tree_is_root - I used this func to know if the node is a root or not
 * @node: pointer to the node to be checked.
 * Return: it returns 0 or 1
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
