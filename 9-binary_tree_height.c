#include "binary_tress.h"
/**
 * binary_tree_height - I used this function to get the height of the bi tree.
 * @tree: the is a ptr to the root nd.
 * Return: This function returns and integer
 * which represents the height.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_hei = 0;
	size_t r_hei = 0;

	if (tree == NULL)
		return;
	if (tree->left != NULL)
	{
		l_hei += binary_tree_height(tree->left);
		l_hei += 1;
	}
	if (tree->right != NULL)
	{
		r_hei += binary_tree_height(tree->right);
		r_hei += 1;
	}
	return (l_hei > r_hei ? l_hei : r_hei);
}
