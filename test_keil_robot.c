
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "robot_keil_2009.h"

bit  xy;
bit  yz;

unsigned int  xdata entree;
unsigned char xdata caractere=0,octet;
unsigned int  xdata ligne,colonne,mot, num_servo, ton;
unsigned char xdata num_fct;
unsigned char xdata im_console;
unsigned char xdata num_entree,num_sortie;
float 	 	  xdata reel;
unsigned char xdata seconde, minute;
unsigned int  xdata prediv_seconde;
unsigned char xdata car_sortie;
	

void menu_principal(void)
 {
   choix_console_sortie(0x01);
   printf("\n\r          Menu Principal\n\r");
   printf("\n\r 0 - Test E/S standard (serie-LCD)");
   printf("\n\r 1 - Test autres fonctions LCD");
   printf("\n\r 2 - Test lecture capteurs)");
   printf("\n\r 3 - Test PWM");
   printf("\n\r 4 - Test capteur distance");
   printf("\n\r 5 - Test Codeur incremental");
   printf("\n\r 6 - Test Fonctions temps reel");
   printf("\n\r 7 - Test Fonctions servo_hexapole\n\r");
   printf("\n\r 8 - Test Extensions\n\r");
   //printf("\n\r 5 - Test MAE\n\r");
   printf("\n\r ENTRER votre choix : ");
   do
     caractere = getkey();
   while ((caractere <'0') && (caractere > '8'));
   num_fct = caractere -'0';

 }
//  unsigned int convertMetrePas(unsigned int distance_cm)
//  {
// 	 
// 	unsigned int distance_p;
// 	 
// 	if(distance_cm==100) 
// 				distance_p=913;
// 	if(distance_cm==50) 
// 				distance_p=457;
// 	if(distance_cm==10) 
// 				distance_p=92;		
// 		return distance_p;
//  }

void toutDroit100cm(unsigned int *g, unsigned int *d)
 {
	 
	unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
		raz_nbre_pas();	

	 while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x63, 0x60);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>1350)
				fing=1;
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>1500)
				find=1;
	}

}

void toutDroit50cm(unsigned int *g, unsigned int *d)
 {
	 
unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
	
		while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x63, 0x60);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>457-30 )
				fing=1;
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>457)
				find=1;
	}
}

void toutDroit20cm(unsigned int *g, unsigned int *d)
 {
		
	unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
	
		while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x63, 0x60);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>86)
				fing=1;
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>92)
				find=1;
	}
			
}


void tournerD90(unsigned int *g, unsigned int * d)
{

		unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
	
		while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x58, 0x30);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>793)
				fing=1;
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>450)
				find=1;
			
    }
}

void tournerD45(unsigned int *g, unsigned int * d)
{

		unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
	
		while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x58, 0x30);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>397)
				fing=1;
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>230)
				find=1;
			
    }
}

void tournerG90(unsigned int *g, unsigned int *d)	
{
		
		unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
		raz_nbre_pas();	
		while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x30, 0x58);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>400)
				fing=1;
			
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>793)
				find=1;
			
    }
	}

void tournerG180(unsigned int *g, unsigned int *d)// a modifier !!!	
{
		
		unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
	
		while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x25, 0x58);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>800)
				fing=1;
			
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>1675)
				find=1;
			
    }
	}

void tournerG45(unsigned int *g, unsigned int *d)	
{
		
		unsigned char fing, find;
		find = 0;
		fing=0;
		*g=0;
		*d=0;
	
		while ((fing==0) && (find==0)) //(d<511) || (g<793-61))
    {
      cmd_moteur(0x30, 0x58);
	  *g = lecture_nbre_pas_moteur_gauche();
			if ((*g)>150)
				fing=1;
			
	  *d = lecture_nbre_pas_moteur_droit();
    if ((*d)>405)
				find=1;
			
    }
	}

void main(void)
{
	  unsigned int g=0;
	  unsigned int d=0;

//    test_bit(xy);
    init_temps_reel(0x256);
	  init_base_temps_reel(0x256);
    init_console_defaut(0xff);
    printf("test sortie console serie\n\r");
		printf("\n\r attente de touche\n\r");	
		_getkey();
	
	
    choix_console_sortie(0x02);   // selectionne le lcd pour la sortie
    printf("test sortie lcd");
    seconde = 0;

//    ecriture_extension(lecture_extension() & 0xff);
//    gotoxy_lcd(0,2);
//    printf("extension = %x ",(lecture_extension() & 0x3ff));

    gotoxy_lcd(0,3);
    printf("champion = %x ",lecture_champion());
//    init_servo_hexapode();
//    cmd_servo_hexapode(1, 90);

 
	
	choix_console_sortie(0x3);

	init_pwm_moteur();
 	type_nbre_pas(0);
	raz_nbre_pas();	
	raz_temps_execution();
	
	
	

  do
  {	 
    	num_fct = 0;
	//menu_principal();

		
	toutDroit100cm(&g, &d);
	// choix_console_sortie(0x1);	
	// printf("\\ fin Droit100cm");
	// choix_console_sortie(0x3);
 	cmd_moteur(0x00, 0x00); 
	liberer_moteur();

		
	raz_nbre_pas();	
	// choix_console_sortie(0x1);	
	// printf("debut attente GAUCHE 90");
	// _getkey();
	// choix_console_sortie(0x3);
	
		
	tournerG90(&g, &d);
	
	// choix_console_sortie(0x1);	
	// printf("\\ fin gauche");
	// choix_console_sortie(0x3);
 	cmd_moteur(0x00, 0x00);
   	liberer_moteur();


	// raz_nbre_pas();	
	// toutDroit50cm(&g, &d);
	// raz_nbre_pas();	
		
	//afficheur de pas a droite et a gauche
	gotoxy_lcd(0,1);
      printf("gauche = %u ",g);
	  gotoxy_lcd(0,2);
      printf("droite = %u ",d);
	cmd_moteur(0x00, 0x00); //arret
	while(1);
   }
  while (1);
}
