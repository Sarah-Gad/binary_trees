#include "binary_trees.h"
/**
 * binary_tree_inorder - I used this fucntio to walk through a bin tree
 * using the in order tra.
 * @tree: the is a ptr to the root node.
 * @func: this is ptr to the fucntion that will be called to eah nd.
 * Return :it returns nothingg.
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
