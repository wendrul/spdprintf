# spdprintf ENSEA

Voici le dossier contenant le projet printf pour l'ensea.
Ici vous pourrez voir comment faire marcher et ce que fait chaque fichier du projet.

#### INSTALLATION
Pour telecharger le dossier de projet present dans ce site il suffit d'executer la commande:

``git clone http://github.com/wendrul/spdprintf``

Un dossier sera cree dans le repertoire courant avec les fichiers du projet.

## Sommaire
Vous trouverez dans le dossier plusieurs elements:

-[srcs/](https://github.com/wendrul/spdprintf/blob/master/README.md#srcs])

-[include/](https://github.com/wendrul/spdprintf/blob/master/README.md#include)

-[Makefile et Compilation du projet](https://github.com/wendrul/spdprintf/blob/master/README.md#Makefile)

-[main.c](https://github.com/wendrul/spdprintf/blob/master/README.md#main.c)

Ce document contient aussi:

-[To do List](https://github.com/wendrul/spdprintf/blob/master/README.md#To_Do_List)

-[Ressources](https://github.com/wendrul/spdprintf/blob/master/README.md#Ressources)

## Composition du dossier de projet

### srcs/

Le dossier srcs contient tous les fichiers .c relatifs au projet. C'est ici que l'on aura
les fonctions principales et secondaires la compilation prendra en charge d'incorporer tous 
les fichiers contenus dans ce dossier.

### include/

C'est ici que l'on placera les fichiers "Header" soit les fichiers .h . 
Ils seront egalements pris en compte automatiquement au moment de la compilation

### Makefile

Ce fichier permet de compiler le projet sans devoir retaper des commandes avec gcc a chaque fois. 
Il permet de faire plusieures choses:

``make`` ou ``make all``: Compile le projet, c'est a dire compile tous le fichiers .c presents dans 
[srcs/](srcs/) en incluant tous les headers dans [include/](include/). L'executable s'appelle ***spdprintf***

``make clean``: efface tous les fichiers objets crees a l'execution de la commande `make all`.

``make fclean``: equivalent a clean mais efface egalement l'executable *spdprintf*.

``make re``: execute `make fclean` puis `make all` pour recompiler le projet a partir de 0.


## Deroulement du projet

### To Do List

[x] Faire le repo github.

[ ] Gerer le nombre [variable](https://stackoverflow.com/questions/2433295/how-does-printf-handle-its-arguments) d'arguments


















