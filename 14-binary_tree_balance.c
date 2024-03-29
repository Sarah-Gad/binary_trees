#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - I used this function to know if the tree is a
 * balanced tree or not
 * @tree: this is a ptr to the root node.
 * Return: returns an int which represents the balance measure.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int h_o_r = 0;
	int h_o_l = 0;
	int b_fac = 0;

	if (tree == NULL)
		return (0);

	h_o_l = binary_tree_height(tree->left);
	h_o_r = binary_tree_height(tree->right);

	b_fac = h_o_l - h_o_r;
	b_fac -= tree->right ? 0 : -1;
	b_fac += tree->left ? 0 : -1;
	return (b_fac);
}
