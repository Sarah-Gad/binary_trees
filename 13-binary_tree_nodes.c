#include "binary_trees.h"
/**
 * binary_tree_nodes - I used this function to get the num of node that
 * have one child node.
 * @tree: this is a ptr to the root node.
 * Return: this function returns an int which represents the num od
 * nodes that have just one child.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t on_nm = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		on_nm += 1;
		if (tree->left != NULL)
			on_nm += binary_tree_nodes(tree->left);
		if (tree->right != NULL)
			on_nm += binary_tree_nodes(tree->right);
	}
	return (on_nm);
}
