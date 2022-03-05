

/* #include <SDL/SDL.h>
#include "image10.h"
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_ttf.h>
*/

      void initText(Text *A)
      {
      A->position.x=500;
      A->position.y=500;
      
      A->textColor.r=140;
      A->textColor.g=192;
      A->textColor.b=200;
      A->font=NULL;
      A->font= TTF_OpenFont("///home/ubuntu123/Downloads/Who%20Dares!.otf",70);
      }
      void freeText(Text A)
      {
      SDL_FreeSurface(A.surfacetexte);
      }
      void displayText(Text t, SDL_Surface *screen)
      {
      t.surfacetexte = TTF_RenderText_Solid(t.font,"SINISTERV",t.textColor);
      SDL_BlitSurface(t.surfacetexte,NULL,screen,&t.position);
      }
