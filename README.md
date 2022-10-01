# Projet_fin_d_etude_DUT_GEII
Projet durant lequel nous avons dû utiliser toutes nos connaissances afin de programmer un robot pour lui faire exécuter un parcours prédéfinit. Ce projet a été réalisé en langage C.


## Informations générales
**Nature des travaux :** Programmation en C

**Etablissement :** IUT GEII Ponsan

**Date / Durée :** 8 semaines

**Diplôme préparé :** DUT GEII

**Unité d'enseignement :** Etude et Réalisation

**Nombre d'étudiants concernés :** 2

**Tuteur pédagogique :** Alexandre Nketsa

**Binôme / équipe :** Josephine DIMON et Manon COUFFIN

## Contexte
###  Contexte pédagogique : 
Projet final de programmation de 4h pendant 8 semaines. Faire la mise au point sur toutes les connaissances et
compétences acquises au cours de nos 2 années de GEII en Informatique industrielle.
###  Sujet, thème : 
Programmation d'un robot suiveur d'un parcours programmer.
###  Objectifs : 
Faire suivre un trajet bien précis à notre robot avec différents types de déplacement (tout droit, tourner à droite ou à
gauche avec différents degrés d'angle).
###  Organisation : 
Nous avons dans un premier temps fait un cahier des charges afin d'établir la liste des taches à faire, puis nous avons
dans un second temps fait un échéancier sur les 8 semaines afin de savoir les objectifs à atteindre a chaque fin de
séance.
###  Choix du sujet : 
Fait par le binôme
###  Niveau de responsabilité et d'autonomie
Nous avons été en grande parties autonomes sur ce projet. Nous avons tout de même sollicité quelques fois un
enseignant afin de nous débloquer. Pour la répartition des taches, nous avions les mêmes, car nous travaillions
ensemble tout du long.
###  Contraintes liées à ce travail
La COVID-19 a été la plus grande difficulté de notre projet, car nous étions moins efficaces que si l'on avait été deux en



## Activités réalisées

### Programmation de l'avancer en ligne droite
Nous avons programmé dans un premier temps le sous programme *ToutDroit100cm()* pour que notre
robot avance pendant 1 m. Dans ce dernier, nous avons fait appel aux 2 PWM et nous avons pu en
déduire le taux d'erreur. Ce dernier était dû au fait que les 2 moteurs n'allaient pas tout à fait à la même vitesse
et donc que le robot n'aller pas droit. De plus pour ce sous-programme, nous avons dû
calculer le nombre de pas que le robot devrait faire pour faire 1 m. Pour cela, nous avons dans un premier
temps calculé combien de pas faisait le robot en un tour de roue puis nous avons calculé, grâce aux valeurs
de la documentation, ce que cela donnait en cm. Nous avons par la suite créé d'autres sous programmes
avec des distances plus courte :
* Tout droit pendant 50 cm
* Tout droit pendant 20 cm


### Programmation des virages à droite
Nous avons programmé différents sous-programmes afin de coder les virages avec différents degrés d'angle.
Pour cela, nous avons réduit la vitesse du moteur gauche et nous avons recalculé le nombre de pas à faire.
Au final, nous possédons 3 types de virages à droite :
* virage à 180°
* virage à 90°
* virage à 45°


### Programmation de virage a gauche
Nous avons programmé différents sous-programmes afin de coder les virages avec différents degrés d'angle.
Pour cela, nous avons réduit la vitesse du moteur droit et nous avons recalculé le nombre de pas à faire. Au
final, nous possédons 3 types de virages à gauche :
* virage à 180°
* virage à 90°
* virage à 45°
