#include "binary_trees.h"
/**
 * binary_tree_size - I used this fucntion to get the size of a bi tree.
 * @tree: this is a ptr to the root nd.
 * Return: this fucntion returns an int which represents the size of the trre..
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sz_l = 0;
	size_t sz_r = 0;

	if (tree == NULL)
		return (0);
	sz_l = binary_tree_size(tree->left);
	sz_r = binary_tree_size(tree->right);
	return (sz_l + sz_r + 1);
}
