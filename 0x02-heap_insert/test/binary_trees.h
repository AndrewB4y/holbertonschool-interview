#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

/* Libraries */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>


/* structures and globals */

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s heap_t;

/**
 * struct queue_s - singly linked queue.
 *
 * @node: binary_tree_t pointer to put on queue.
 * @next: next node in queue
 */

typedef struct queue_s
{
	const binary_tree_t *node;
	struct queue_s *next;
} queue_t;



/* Prototypes */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *);
queue_t *push_to_q(queue_t **q_head, queue_t **q_tail,
		   const binary_tree_t *node);
queue_t *pop_the_q(queue_t **q_head, queue_t **q_tail,
				   const binary_tree_t **node);
int binary_tree_is_complete(const binary_tree_t *tree,
							const binary_tree_t **last_n);
heap_t *heap_insert(heap_t **root, int value);

#endif /* end _BINARY_TREES_H_ */
