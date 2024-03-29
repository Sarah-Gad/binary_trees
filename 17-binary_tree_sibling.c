#include "binary_trees.h"
/**
 * binary_tree_sibling - I used this function
 * to know the sibiling of a certain nd.
 * @node: this is the node to find its sibiling.
 * Return: this func will return a ptr to the sibiling nd.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *holder_n;
	binary_tree_t *sib_nd;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	holder_n = node->parent;
	sib_nd = (holder_n->left == node ? holder_n->right : holder_n->left);
	return (sib_nd == NULL ? NULL : sib_nd);

}
