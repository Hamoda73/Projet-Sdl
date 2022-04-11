#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include <math.h> 
#include"enemy.h"


int main(int argc, char* argv[])
{int i,j;

Ennemi e;
personne p;

SDL_Surface *screen=NULL,*arriere_plan=NULL;
SDL_Rect pos_arriere_plan;
pos_arriere_plan.x=0;
pos_arriere_plan.y=0;

	SDL_Event event;
 int continuer = 1;

SDL_Init(SDL_INIT_VIDEO);    
screen =SDL_SetVideoMode(768,432,32,SDL_HWSURFACE|SDL_RESIZABLE|SDL_DOUBLEBUF);

arriere_plan= IMG_Load("/home/amine/Desktop/Projet-Sdl/projet/farm.jpg");
	
	initEnnemi(&e);  
        init_personnage(&p); 
  
   while (continuer) 
   {
   	
	SDL_BlitSurface(arriere_plan, NULL, screen,&pos_arriere_plan);
        afficher_personnage(p,screen);
	afficherEnnemi(e,screen);

         if(collisionBB(p,e))
         {
          p.posperso.y=0;
	  p.posperso.x=0;
            
         }
        while (SDL_PollEvent(&event)); 
       {
         
       switch(event.type) 

        {

           case SDL_QUIT: 

               continuer = 0; 

               break;

        }

      }
     deplacer(&e);
     animerEnnemi(&e);
     SDL_Delay(70);
   }
   for(j=0;j<2;j++)
   {
   for(i=0;i<5;i++)
   {
SDL_FreeSurface(e.mat[j][i]);
}
}
SDL_FreeSurface(p.sprite_perso);

SDL_Quit();
 


 return EXIT_SUCCESS;  
}
