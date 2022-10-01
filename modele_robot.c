
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <robot_keil_2009.h>



void main(void)
{

//    test_bit(xy);
    init_temps_reel(0x256);
    init_console_defaut(0xff);
	if (kbhit())
	_getkey();
    printf("test sortie console serie\n\r");
    choix_console_sortie(0x02);   // selectionne le lcd pour la sortie
    printf("test sortie lcd");


   do
   {
   }
  while (1);
}
