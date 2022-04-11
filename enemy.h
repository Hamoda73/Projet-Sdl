#ifndef Enemy_H
#define Enemy_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
typedef struct {
//SDL_Surface *sprite;
SDL_Surface *mat[5][5];
int direction;
SDL_Rect posennemi;
SDL_Rect possprite;
int num;
}Ennemi;
typedef struct
{
SDL_Surface *sprite_perso;
SDL_Rect posperso;
SDL_Rect possprite_perso;
int direction_perso;
} personne ;
void initEnnemi(Ennemi *e);
void afficherEnnemi(Ennemi e,SDL_Surface *screen);
void animerEnnemi(Ennemi *e);
void deplacer( Ennemi *e);
int collisionBB(personne p,Ennemi e);
void deplacerIA(Ennemi *e,SDL_Rect posperso);
void init_personnage(personne* p);
void afficher_personnage(personne p, SDL_Surface *screen);
#endif
