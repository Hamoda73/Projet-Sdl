#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include "enemy.h"
#include <SDL/SDL_image.h>
#include<time.h> 
#include <math.h>
/*const int LARGEUR_SPRITE= 864;
const int HAUTEUR_SPRITE= 280;*/
void initEnnemi(Ennemi *e)
{    const int A=60,B=600;
srand(time(NULL));
//e->sprite = IMG_Load("/home/amine/Downloads/scottpilgrim_multiple.png");*/

//les positions de l'ennemi sur l'écran
e->posennemi.y=200;
e->posennemi.x=/*(rand() % (B - A + 1)) +A*/300 ;


/*e->possprite.x=0;
e->possprite.y=0;
e->possprite.w=108;
e->possprite.h=140;*/
e->mat[0][0]=IMG_Load("/home/amine/Desktop/projet/sprite11.png");
e->mat[0][1]=IMG_Load("/home/amine/Desktop/projet/sprite22.png");
e->mat[0][2]=IMG_Load("/home/amine/Desktop/projet/sprite33.png");
e->mat[0][3]=IMG_Load("/home/amine/Desktop/projet/sprite44.png");
e->mat[0][4]=IMG_Load("/home/amine/Desktop/projet/sprite55.png");
e->mat[1][0]=IMG_Load("/home/amine/Desktop/projet/sprite11 left.png");
e->mat[1][1]=IMG_Load("/home/amine/Desktop/projet/sprite22 left.png");
e->mat[1][2]=IMG_Load("/home/amine/Desktop/projet/sprite33 left.png");
e->mat[1][3]=IMG_Load("/home/amine/Desktop/projet/sprite44 left.png");
e->mat[1][4]=IMG_Load("/home/amine/Desktop/projet/sprite55 left.png");

//la direction initial
e->direction=0;
e->num=0;
}
void afficherEnnemi(Ennemi e,SDL_Surface *screen)
{
SDL_BlitSurface( e.mat[e.direction][e.num], NULL , screen , &e.posennemi );
SDL_Flip(screen);

}
void animerEnnemi( Ennemi * e)
{
if(e->direction==0)
{
if(e->num==4)
e->num=0;
else
e->num++;

}
else
{
if(e->num==4)
e->num=0;
else
e->num++;

}

/*if(e->direction == 0)//si direction == droite
    e->possprite.y= 0;
else
   e->possprite.y= 67; 

if(e->possprite.x == LARGEUR_SPRITE -79)//si le dernier frame est atteint
   e->possprite.x=0; //revenir au premier frame
else
   e->possprite.x += 79;//sinon avancer au frame suivant */
}
void deplacer( Ennemi *e)
{int x=300,y=200;
srand(time(NULL));
e->posennemi.y=(rand()%(350-300))+140;
if( e->posennemi.x > 710 )//if the position of the enemy is on the far right
 e->direction = 1;//direction will change to  left
 else
 {
if( e->posennemi.x < 20 )//if the enemy is on the far left 
 e->direction = 0;//same as before but right instead of left
}
if( e->direction == 0)//droit
  e->posennemi.x+=6;//move right
  
else
  e->posennemi.x-=6;//move left
 
}
int collisionBB( personne p, Ennemi e)
{
if(( (p.posperso.x + p.possprite_perso.w)< e.posennemi.x ) || (e.posennemi.x + 54 < p.posperso.x ) ||((p.posperso.y + p.possprite_perso.h)< e.posennemi.y)||((e.posennemi.y + 54 < p.posperso.y)))
return 0;
else
return 1;

}
void init_personnage(personne* p)
{ 

p->sprite_perso = IMG_Load("/home/amine/Desktop/projet/scottpilgrim_multiple.png"); 

p->posperso.x= 600;
p->posperso.y= 200;

//le clip à afficher
p->possprite_perso.x=0;
p->possprite_perso.y=140;
p->possprite_perso.w=100;
p->possprite_perso.h=140;

p->direction_perso=0;


}


void afficher_personnage(personne p, SDL_Surface * screen)
{
SDL_BlitSurface( p.sprite_perso , &p.possprite_perso , screen , &p.posperso );
SDL_Flip(screen);
}



