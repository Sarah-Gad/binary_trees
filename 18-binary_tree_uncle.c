#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - I used this fucntion to know
 * the unclde nd of a certain nd.
 * @node: this is a ptr to the nd to find its uncle.
 * Return: this fucn will return a ptr to the unclde nd.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *P_ND;
	binary_tree_t *U_ND;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	P_ND = node->parent;
	U_ND = binary_tree_sibling(P_ND);
	return (U_ND ? U_ND : NULL);
}
