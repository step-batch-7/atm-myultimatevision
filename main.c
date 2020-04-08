#include <stdio.h>
#include "atm.h"
void display_notes(unsigned int notes);

int main(void)
{
  unsigned short int amounts[] = {1, 10, 39, 589, 2590, 31999};
  for (int i = 0; i < 6; i++)
  {
    unsigned int notes = get_money(amounts[i]);
    printf("%5u %08x\n", amounts[i], notes);
    display_notes(notes);
  }

  return 0;
}

void display_notes(unsigned int notes){
  int divisor = 0x10000000;
  int breakDown[8]={2000, 500, 100, 50, 20, 10, 5, 1};
  unsigned int noteCount;
    for(int i=0;i<8;i++){
      noteCount = notes / divisor;
      printf("%u notes of %d\n",noteCount,breakDown[i]);
      notes<<=4;
    }
}
