#include "binary_trees.h"
/**
 * binary_tree_preorder - I used this fucntion to walk through a bi tree
 * using the pre_order.
 * @tree: is the ptr of the root node of the tree.
 * @func: is the fucntion that will be called for each node.
 * Return: nooothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
