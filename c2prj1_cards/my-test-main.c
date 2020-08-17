#include "cards.h"
#include "stdio.h"

int main(void) {
  card_t player1 = {14,HEARTS};
  char a,b;
  
  a = value_letter(player1);
  b = suit_letter(player1) ;
  //card_t card_from_num(unsigned c);
  printf("Value of a and b is %c and %c\n", a, b);
  card_t temp = card_from_num(player1.value);
  printf("Player 1 di value %d\n",player1.value);
  print_card(player1);
   printf("\n\n");
  print_card(temp);
  return 0;
}
