#include "binary_trees_t"
/**
 * binary_tree_delete - I used this function to delete the wholde bi tree
 * @tree: this is the pointer to the root node of the bi tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
