

extern void   init_console_defaut(unsigned char facteur_vitesse);
extern void   init_console_serie(unsigned char facteur_vitesse);
extern void   choix_console_sortie(unsigned char masque);
extern bit    kbhit(void);
extern char   getkey(void);

extern bit            test_console_entree(void);
extern bit            test_console_sortie(void);
extern unsigned char  test_console(void);
extern unsigned char  lecture_console(void);
extern void           visu_console(unsigned char code_ascii);
extern void           visu_consoler(unsigned char code_ascii);

extern void   init_console_sortie_lcd(void);
extern void   gotoxy_lcd(unsigned char colonne, unsigned char ligne);
extern void   visu_hexa_lcd_octet(unsigned char octet);
extern void   visu_hexa_lcd_mot(unsigned int mot);
extern void   ecriture_console_lcd(unsigned char caract);
extern void   clrscr_lcd(void);

extern unsigned char  lecture_capteur_ligne(void);
extern unsigned char  lecture_capteur_obstacle(void);
extern unsigned char  lecture_capteur_autre(void);
extern unsigned char  lecture_inter_mode(void);

extern unsigned int   lecture_extension(void);
extern unsigned int   lecture_champion(void);
extern void           ecriture_extension(unsigned char valeur);

extern void           raz_ultrason_gauche(void);
extern void           raz_ultrason_droit(void);
extern void           raz_ultrason(void);
extern unsigned char  lecture_etat_ultrason(void);
extern unsigned char  lecture_etat_bis_ultrason(void);
extern unsigned int   lecture_distance_uson_gauche(void);
extern unsigned int   lecture_distance_uson_droit(void);

extern void           raz_nbre_pas(void);
extern void           raz_nbre_pas_gauche(void);
extern void           raz_nbre_pas_droit(void);
extern void           type_nbre_pas(unsigned char choix_2bits);
extern void           type_prediv_nbre_pas(unsigned char choix_1bit);
extern unsigned char  lecture_etat_nbre_pas(void);
extern unsigned int   lecture_nbre_pas_moteur_gauche(void);
extern unsigned int   lecture_nbre_pas_moteur_droit(void);
extern unsigned int   lecture_duree_pas_moteur_gauche(void);
extern unsigned int   lecture_duree_pas_moteur_droit(void);

extern void           init_pwm_moteur(void);
extern void           cmd_moteur(unsigned char mot_gauche, unsigned char mot_droit);
extern void           cmd_moteur_gauche(unsigned char mot_gauche);
extern void           cmd_moteur_droit(unsigned char mot_droit);

extern void           init_servo_hexapode(void);
extern void           cmd_servo_hexapode(unsigned char numero_servo, unsigned char ton);

extern void           liberer_moteur(void);
extern void           cmd_servomoteur(unsigned char ton);

extern void           init_temps_reel(unsigned int duree_periode_tps_reel);
extern void           init_base_temps_reel(unsigned int duree_periode_tps_reel);
extern void           raz_temps_execution(void);
extern void           it_timer0(void);
extern bit            synchro(void);
extern unsigned int   lire_temps_execution(void);
