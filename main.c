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
  int breakDown[8]={1,5,10,20,50,100,500,2000};
  unsigned int noteCount;
    for(int i=0;i<8;i++){
      // printf("%u\n",notes);
      noteCount = notes % 0x10;
      printf("%u notes of %d\n",noteCount,breakDown[i]);
      notes>>=4;
    }
}
