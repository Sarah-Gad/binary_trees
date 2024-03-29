#include "binary_trees.h"
/**
 * binary_tree_leaves - I used this function to get
 * the number of leaves in a bi tree.
 * @tree: this is a ptr to the root nd.
 * Return: this fucntion returns an int which represents the num of leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lvs_r = 0;
	size_t lvs_l = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	lvs_r = binary_tree_leaves(tree->right);
	lvs_l = binary_tree_leaves(tree->left);
	return (lvs_l + lvs_r);
}
