#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
assert((c.value>=2 && c.value<=VALUE_ACE) && (c.suit>=SPADES && c.suit<=CLUBS));

}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case STRAIGHT_FLUSH: return "STRAIGHT_FLUSH";
  case FOUR_OF_A_KIND: return "FOUR_OF_A_KIND";
  case FULL_HOUSE: return "FULL_HOUSE";
  case FLUSH: return "FLUSH";
  case STRAIGHT: return "STRAIGHT";
  case THREE_OF_A_KIND: return "THREE_OF_A_KIND";
  case TWO_PAIR: return "TWO_PAIR";
  case PAIR: return "PAIR";
  case NOTHING: return "NOTHING";
  default: return "";
}

char value_letter(card_t c) {
  char x='\0';
  if(c.value>=2 && c.value<=9) { x='0'+c.value; }
  else if(c.value==10) { x='0'; }
  else if(c.value==VALUE_JACK) { x='J'; }
  else if(c.value==VALUE_QUEEN) { x='Q'; }
  else if(c.value==VALUE_KING) { x='K'; }
  else if(c.value==VALUE_ACE) { x='A'; }
  return x;
}


char suit_letter(card_t c) {
  return 'x';
  
}

void print_card(card_t c) {

}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t temp;
  return temp;
}
