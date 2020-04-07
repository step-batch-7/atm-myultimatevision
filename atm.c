#include "atm.h"

unsigned int get_money(unsigned short int amount){
  int breakDown[8]={2000, 500, 100, 50, 20, 10, 5, 1};
  unsigned int notes = 0x00000000;
  if(amount<=31999){
    unsigned int noteCount = 0x00000000;
    for(int i=0;i<8;i++){
      noteCount = amount/breakDown[i]; 
      amount = amount%breakDown[i];
      notes<<=4;
      notes=notes|noteCount;
    }
  }
  return notes;
}