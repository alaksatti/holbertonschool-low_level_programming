#ifndef DECK_H
#define DECK_H

#include <stdlib.h>
#include <string.h>


/**
 * edum kind_e - kind of card
 *
 * @SPADE: spade
 * @HEART: heart
 * @CLUB: club
 * @DIAMOND: diamond
 *
 *
 */
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;


/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;

void sort_deck(deck_node_t **deck);
int compare_cards(const void *p, const void *q);

#endif
