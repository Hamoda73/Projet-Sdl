#include<stdio.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
int main (void)
{ 
   int done = 1;
     SDL_Event event;
     SDL_Surface *screen = NULL;
     SDL_Surface *image1 = NULL;
     SDL_Rect positionecran;
     char pause;
     if (SDL_Init(SDL_INIT_VIDEO)!=0)
     {
        printf("unable to initialize SDL :%s \n",SDL_GetError());
        return(1);
        }
        screen= SDL_SetVideoMode(400,100,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
        if(screen ==NULL)        
        {
          printf("unable to set video mode : %s \n",SDL_GetError());
          return 1;
          }
          image1=IMG_Load("wolfy.jpg");
          if (image1 == NULL)
          {
            printf("unable to load jpg : %s \n", SDL_GetError());
            return 1;
            }
            positionecran.x=0;
            positionecran.y=0;
            SDL_BlitSurface(image1,NULL,screen,&positionecran);
            SDL_Flip(screen);
            
            SDL_Quit();
            return 0;
            }
