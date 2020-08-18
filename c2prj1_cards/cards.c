#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "cards.h"


void assert_card_valid(card_t c) {
  assert((c.value >= 2 && c.value <= VALUE_ACE) && (c.suit >= SPADES && c.suit <= CLUBS));

}

const char * ranking_to_string(hand_ranking_t r) {
  switch(r){
  case STRAIGHT_FLUSH:
    return "STRAIGHT_FLUSH";
  case FOUR_OF_A_KIND:
    return "FOUR_OF_A_KIND";
  case FULL_HOUSE:
    return "FULL_HOUSE";
  case FLUSH:
    return "FLUSH";
  case STRAIGHT:
    return "STRAIGHT";
  case THREE_OF_A_KIND:
    return "THREE_OF_A_KIND";
  case TWO_PAIR:
    return "TWO_PAIR";
  case PAIR:
    return "PAIR";
  case NOTHING:
    return "NOTHING";
  default: return "Not a special combination";
  }
}

char value_letter(card_t c) {
  char x;
  if(c.value>=2 && c.value<=9) { x='0'+c.value; }
  else if(c.value == 10) { x='0'; }
  else if(c.value == VALUE_JACK) { x='J'; }
  else if(c.value == VALUE_QUEEN) { x='Q'; }
  else if(c.value == VALUE_KING) { x='K'; }
  else if(c.value == VALUE_ACE) { x='A'; }
  return x;
}


char suit_letter(card_t c) {
  switch(c.suit){
  case SPADES:
    return 's';
  case HEARTS:
    return 'h';
  case DIAMONDS:
    return 'd';
  case CLUBS:
    return 'c';
  default: return '?';
  }
}

void print_card(card_t c) {
  printf("%c%c",value_letter(c),suit_letter(c));
}

card_t card_from_letters(char value_let, char suit_let) {
  card_t temp;
  switch(value_let){
  case '2':
    temp.value=2;
    break;
  case '3':
    temp.value=3;
    break;
  case '4':
    temp.value=4;
    break;
  case '5':
    temp.value=5;
    break;
  case '6':
    temp.value=6;
    break;
  case '7':
    temp.value=7;
    break;
  case '8':
    temp.value=8;
    break;
  case '9':
    temp.value=9;
    break;
  case '0':
    temp.value=10;
    break;
  case 'J':
    temp.value=VALUE_JACK;
    break;
  case 'Q':
    temp.value=VALUE_QUEEN;
    break;
  case 'K':
    temp.value=VALUE_KING;
    break;
  case 'A':
    temp.value=VALUE_ACE;
    break;
  default:
    assert(value_let);
 }

  switch(suit_let){
  case 's':
    temp.suit = SPADES; break;
  case 'h':
    temp.suit = HEARTS; break;
  case 'd':
    temp.suit = DIAMONDS; break;
  case 'c':
    temp.suit = CLUBS; break;
  default:
    assert(suit_let == 's' && suit_let == 'h' && suit_let == 'd' && suit_let == 'c');
  }
  return temp;
}

card_t card_from_num(unsigned c) {
  card_t mapped;
  int suit=c/13;
  int value=c%13;
  switch(suit){
  case 0:
    mapped.suit=SPADES;
    break;
  case 1:
    mapped.suit=HEARTS;
    break;
  case 2:
    mapped.suit=DIAMONDS;
    break;
  case 3:
    mapped.suit=CLUBS;
    break;
  }
  if (value>=2){
    mapped.value=value;
  }else{
    mapped.value=value+13;
  }
  return mapped;
}
