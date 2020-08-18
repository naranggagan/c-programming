#include "cards.h"
#include "stdio.h"

int main(void) {
card_t player1 = {1,HEARTS};
card_t player2 = {2,HEARTS};
card_t player3 = {3,HEARTS};
card_t player4 = {4,HEARTS};
card_t player5 = {5,HEARTS};
card_t player6 = {6,HEARTS};
 card_t player7 = {7,DIAMONDS};
 card_t player8 = {8,DIAMONDS};
card_t player9 = {9,DIAMONDS};
card_t player10 = {10,DIAMONDS};
card_t player11 = {11,DIAMONDS};
card_t player12 = {12,DIAMONDS};
 card_t player13 = {13,DIAMONDS};
card_t player14= {14,DIAMONDS};
card_t player15 = {15,DIAMONDS};
card_t player16 = {16,DIAMONDS};
 card_t player17 = {17,DIAMONDS};
card_t a = card_from_num(player1.value);
card_t b = card_from_num(player2.value);
card_t c = card_from_num(player3.value);
card_t d = card_from_num(player4.value);
card_t e = card_from_num(player5.value);
card_t f = card_from_num(player6.value);
card_t g = card_from_num(player7.value);
card_t h = card_from_num(player8.value);
card_t i = card_from_num(player9.value);
card_t j = card_from_num(player10.value);
card_t k = card_from_num(player11.value);
card_t l = card_from_num(player12.value);
card_t m = card_from_num(player13.value);
card_t n = card_from_num(player14.value);
card_t o = card_from_num(player15.value);
card_t p = card_from_num(player16.value);
card_t q = card_from_num(player17.value);

 print_card(a);
 printf("\n");
 print_card(b);
 printf("\n");
 print_card(c);
   printf("\n");
    print_card(d);
   printf("\n");
    print_card(e);
   printf("\n");
    print_card(f);
   printf("\n");
print_card(g);
 printf("\n");
 print_card(h);
 printf("\n");
 print_card(i);
   printf("\n");
    print_card(j);
   printf("\n");
    print_card(k);
   printf("\n");
    print_card(l);
   printf("\n");

   print_card(m);
 printf("\n");
 print_card(n);
 printf("\n");
 print_card(o);
   printf("\n");
    print_card(p);
   printf("\n");
    print_card(q);
   printf("\n");
 
  return 0;
}
