#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - I used this function to know igf the bi tree
 * is perfect or not.
 * @tree: this is a pointr to the root nd.
 * Return: it returns 0 ot 1.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t tr_sz = 0;
	size_t tr_hg = 0;
	size_t p_fc = 0;

	if (tree == NULL)
		return (0);

	tr_hg = binary_tree_height(tree);
	tr_sz = binary_tree_size(tree);
	p_fc = (tr_sz == 1 ? 1 : (1 << (tr_hg + 1)) - 1);

	return (tr_sz == p_fc ? 1 : 0);
}
