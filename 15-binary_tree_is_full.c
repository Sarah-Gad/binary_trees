#include "binary_trees.h"
/**
 * binary_tree_is_full - I used this function to know if the bi tree
 * is full or not.
 * @tree: is the ptr to the root nd.
 * Return: 1 or 0
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int lf_sd = 0;
	int rg_sd = 0;

	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);
	lf_sd = binary_tree_is_full(tree->left);
	rg_sd = binary_tree_is_full(tree->right);
	return (lf_sd && rg_sd ? 1 : 0);
}
