#include "binary_trees.h"
/**
 * binary_tree_node - I used this function to create a new node in bibary tree.
 * @parent: this is the ptr of the node that needs to be created.
 * @value: this is the integer to be included in the node.
 * Return: this function will return a ptr to the newly crteated node.
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nw_cre_nd = malloc(sizeof(binary_tree_t));

	if (nw_cre_nd == NULL)
		return (NULL);

	nw_cre_nd->n = value;
	nw_cre_nd->parent = parent;
	nw_cre_nd->left = NULL;
	nw_cre_nd->right = NULL;

	return (nw_cre_nd);
}
