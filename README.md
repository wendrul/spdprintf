# spdprintf ENSEA

 Voici le dossier contenant le projet printf pour l'ensea.
Ici vous pourrez voir comment faire marcher et ce que fait chaque fichier du projet.\
Le but de ce projet est de faire la fonction dont le prototype est le suivant:
```c
char	*spdprintf(const char* format, ...);
```

#### INSTALLATION
Pour telecharger le dossier de projet present dans ce site il suffit d'executer la commande:

``git clone http://github.com/wendrul/spdprintf``

Un dossier sera cree dans le repertoire courant avec les fichiers du projet.

## Sommaire
Vous trouverez dans le dossier plusieurs elements:

- [srcs/](https://github.com/wendrul/spdprintf/blob/master/README.md#srcs])
- [include/](https://github.com/wendrul/spdprintf/blob/master/README.md#include)
- [Makefile et Compilation du projet](https://github.com/wendrul/spdprintf/blob/master/README.md#Makefile)
- [main.c](https://github.com/wendrul/spdprintf/blob/master/README.md#main.c)
- [create](https://github.com/wendrul/spdprintf/blob/master/README.md#create)

Ce document contient aussi:

- [To do List](https://github.com/wendrul/spdprintf/blob/master/README.md#To-Do-List)
- [Fichiers header (.h)](https://github.com/wendrul/spdprintf/blob/master/README.md#headers)
- [Ressources](https://github.com/wendrul/spdprintf/blob/master/README.md#Ressources)

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

### main.c

Le fichier main.c dans ce repos restera toujours vide, i.e.

```c
#include "header.h"

int	main(void)
{
	/*
        	==>TESTS <==
	*/
	return (0);
}
```

Pour tester il suffira de rajouter des tests dans le main.

### create

Vous trouverez un fichier **create** qui est en fait un script bash permettant de creer les fichiers source et de mettre a jour le header. pour l'utiliser il suffit de faire comme suit:

```bash
$> ./create
Write your file name (without file extension)
$> nomDuFichier
Succesfully createed nomDuFichier.c
Succesfully Updated header.h
```
le script rajoute automatiquement l'extension.c, veuillez ne pas la rajouter, de meme que pour le prefixe ft\_
~~``$>nomDuFichier.c``~~
~~``$>ft_nomDuFichier``~~

Une fois le fichier cree il faudra mettre a jour le prototype qui a ete ecrit dans le header:
```c
int	ft_nomDuFichier(/*Remplir les arguments et modifier le type de retour*/);
```


## Deroulement du projet

### To Do List

- [x] Faire le repo github.

- [ ] Gerer le [nombre variable d'arguments](https://stackoverflow.com/questions/2433295/how-does-printf-handle-its-arguments).

- [ ]  [Liste de fonctions a coder](https://github.com/wendrul/spdprintf/blob/master/README.md#fonctions)

### Headers

Ce projet comportera plusieurs fichiers header pour bien gerer l'organisation du projet, donc a difference de ceux vus en cours, il y a certaines specificites a prendre en compte.

Voici le format d'un fichier .h:
```c
#ifndef NOMDUFICHIER_H		// Ceci est une protection contre la "double inclusion"
# define NOMDUFICHIER_H

# include ...
/*
	ont met d'aboord tous les #include et #define
*/

typedef ...
/*
	Ensuite la defiition des typedef et des structures si il y en a
*/

/* Enfin on met l'ensemble des prototypes de fonctions par ex: */
int	printf(const char format, ...);
void	print_numbers(int nb);

#endif
```
### Fonctions

Voici les prototypes des fonctions a coder.

#### Traiter des chaines de caracteres
- [x] Afficher une chaine de characteres et retourner la longueur de celle ci: **simple**
```c
	int	ft_putstr(char *str);
```
- [x] Retourner la longueur d'une chaine de caracteres: **simple**
```c
	int	ft_strlen(char *str);
```



#### Afficher des nombres:
- [ ] Afficher la representation decimale d'un nombre passe en argument: **plutot complexe**
```c
	void	ft_putnbr(int nb);
```
  - [ ] Retourner la chaine de caracteres qui represente l'entier passe en arguments en decimal: **complexe**
```c
	char	*ft_itoa(int nb);
```
  - [ ] cherche un caractere `to_find` dans la chaine de caracteres `str` et renvoie l'indice de sa premiere occurrence ou -1 si il ne le trouve pas: **semi-complexe**
```c
	int	ft_indexof(char to_find, char *str);
```
  - [ ] Afficehr sur la sortie standard la representation du nombre en entree `nb` dans la base `base`. Par exemple pour l'hexadecimal `base = "0123456789abcdef"` pour le binaire `base = "01"` etc... : **tres complexe**
```c
	void	ft_putnbr_base(long nb, char *base, char *s);	//par ex base = "0123456789abcdef"
```
  - [ ] Idem que pour la fonction precedente mais retourne la chaine de caracteres au lieu de l'afficher: **plus complexe encore**
```c
	char	*ft_itoa_base(int nb, char *base);
```
#### Gerer l'argument de format
- [x] Lit une chaine de caracteres finalisee par un _whitespace_ commencant par `%` et verifie si c'est un format valide (i.e.: c'est un `%d`, `%x` elle retourne 1, si c'est `%lol` renvoie 0 car invalide): **simple**
```c
	int	ft_format_is_valid();
```
- [x] Verifie le format pour chercher combien d'arguments va prendre la fonction, c'est a dire compte le nombre de `%qqchose` valides (ex: `%d` `%c`): **complexe**
```c
	int	ft_count_args(char *format);
```
#### ignorez
- [ ] desc: **difficulte**
```c
	void	f();
```

### Ressources

- Nombre variable d'arguments
  - [Exemple d'utilisation de stdargs.h](https://stackoverflow.com/questions/2433295/how-does-printf-handle-its-arguments)
  - [Elipsis](https://en.wikipedia.org/wiki/Ellipsis_(computer_programming))


















