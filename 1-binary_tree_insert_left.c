#include "binary_trees.h"
/**
 * binary_tree_insert_left - I used this function to add a a left child node
 * @parent: ptr to the node that is supposed to be the parent
 * of the newly created node.
 * @value: the integer to beincluded in the new node.
 * Return: it will ewturn a ptr to the newly created nd.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_cre_nd;

	if (parent == NULL)
		return (NULL);
	nw_cre_nd = malloc(sizeof(binary_tree_t));
	if (nw_cre_nd == NULL)
		return (NULL);
	if (parent->left == NULL)
	{
		parent->left = nw_cre_nd;
		nw_cre_nd->n = value;
		nw_cre_nd->parent = parent;
		nw_cre_nd->left = NULL;
		nw_cre_nd->right = NULL;
	}
	else
	{
		nw_cre_nd->n = value;
		nw_cre_nd->parent = parent;
		nw_cre_nd->left = parent->left;
		nw_cre_nd->right = NULL;
		parent->left->parent = nw_cre_nd;
		parent->left = nw_cre_nd;
	}
	return (nw_cre_nd);
}

