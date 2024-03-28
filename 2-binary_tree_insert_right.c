#include "binary_trees.h"
/**
 * binary_tree_insert_right - I ued this fucntion to add a right child node.
 * @parent: ptr to the node that is supposed to be the parent.
 * @value: the integer to be included in the new node.
 * Return: it will return a pointer to the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_cre_nd;

	if (parent == NULL)
		return (NULL);

	nw_cre_nd = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		nw_cre_nd->right = parent->right;
		parent->right->parent = nw_cre_nd;
	}
	parent->right = nw_cre_nd;
	return (nw_cre_nd);
}
