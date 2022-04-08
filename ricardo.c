#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
int main()
{
 SDL_Surface *screen = NULL, *image1 = NULL;
 SDL_Rect positionEcran;
 
 int continuer=1;
 SDL_Init(SDL_INIT_VIDEO);
 if (SDL_Init(SDL_INIT_VIDEO)!=0)
    { 
    printf("error : %s \n",SDL_GetError());
    return 1;
    }
    screen=SDL_SetVideoMode(800,500,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
    if (screen == NULL)
      { 
      printf("error : %s \n",SDL_GetError());
      return 1;
      }
       image1 = IMG_Load("wolfy.jpg");
       while (continuer)
       {
       positionEcran.x=0;
       positionEcran.y=0;
       SDL_BlitSurface(image1,NULL,screen,&positionEcran);
       SDL_Flip(screen);
       }
       SDL_Quit();
       return 0;
       }
