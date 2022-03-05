#include <SDL/SDL.h>
#include "image10.h"
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include<SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>




void initPlayButton(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/hateplay.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=130;
  A->pos1.y=155;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  void initOptionsButton(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/hatesettings.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=85;
  A->pos1.y=220;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  
   void initOptionsButton1(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/settingsicon.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=290;
  A->pos1.y=95;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  
  void initFullscreen(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/fullnorm1.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=270;
  A->pos1.y=265;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
 
 void initNarrow(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/choose.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=232;
  A->pos1.y=320;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  
  
  void initbaka(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/back.png");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=10;
  A->pos1.y=340;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  
   void initsinisterv(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/sinisterv.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=100;
  A->pos1.y=40;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  
  
  void initmini(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/mini.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=255;
  A->pos1.y=187;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  
  void initmaxi(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/maxi.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=395;
  A->pos1.y=187;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  
  
  
  
  void initQuitButton(Image *A)
{



A->img=IMG_Load("///home/ubuntu123/Desktop/projet/hatequit.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=128;
  A->pos1.y=280;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  void initBackground(Image *Backg)
  {
  


    Backg->img= IMG_Load("///home/ubuntu123/Desktop/projet/sally5.jpg");
       if (Backg->img==NULL) 
       { 
         printf("unable to load jpg : %s \n",SDL_GetError());
         return ;
         }
         Backg->pos1.x=0;
         Backg->pos1.y=0;
         Backg->pos2.x=0;
         Backg->pos2.y=0;
         Backg->pos2.w=700 ;
         Backg->pos2.h=400 ;
       
   
   }
   
   void initNewPlay(Image *NewPlayBackg)
  {

 NewPlayBackg->img=IMG_Load("///home/ubuntu123/Desktop/projet/farm.jpg");
       if (NewPlayBackg->img==NULL) 
       { 
         printf("unable to load jpg : %s \n",SDL_GetError());
         return ;
         }
         NewPlayBackg->pos1.x=0;  
         NewPlayBackg->pos1.y=0;
         NewPlayBackg->pos2.x=0;
         NewPlayBackg->pos2.y=0;
         NewPlayBackg->pos2.w=700 ;
         NewPlayBackg->pos2.h=400 ;
   }
   
    void initSettingsBackg(Image *SettingsBackg)
  {

 SettingsBackg->img=IMG_Load("///home/ubuntu123/Downloads/OPTIONS.jpg");
       if (SettingsBackg->img==NULL) 
       { 
         printf("unable to load jpg : %s \n",SDL_GetError());
         return ;
         }
         SettingsBackg->pos1.x=0;  
         SettingsBackg->pos1.y=0;
         SettingsBackg->pos2.x=0;
         SettingsBackg->pos2.y=0;
         SettingsBackg->pos2.w=700 ;
         SettingsBackg->pos2.h=400 ;
   }

  void initVolume1(Image *A)
  {
   A->img=IMG_Load("///home/ubuntu123/Desktop/projet/volumeup11.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=290;
  A->pos1.y=187;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  
   }
   }
   
   
    void initVolume2(Image *A)
  {
   A->img=IMG_Load("///home/ubuntu123/Desktop/projet/volumeup22.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=290;
  A->pos1.y=187;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  
   }
   }



void initBackButton(Image *A)
  {
   A->img=IMG_Load("///home/ubuntu123/Desktop/projet/PlayButton.png");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=110;
  A->pos1.y=400;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  
   }
   }
   



 void initVolume3(Image *A)
  {
   A->img=IMG_Load("///home/ubuntu123/Desktop/projet/volumeup33.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=290;
  A->pos1.y=187;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  
   }
   }
   


void initPlayButtonh(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/hateplayh.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=130;
  A->pos1.y=155;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  void initOptionsButtonh(Image *A)
{
     A->img=IMG_Load("///home/ubuntu123/Desktop/projet/hatesettingsh.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=85;
  A->pos1.y=220;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }}
  
  
  void initQuitButtonh(Image *A)
{



A->img=IMG_Load("///home/ubuntu123/Desktop/projet/hatequith.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=128;
  A->pos1.y=280;
  A->pos1.w=200;
  A->pos1.h=A->img->h;;
  }
  }
  
  
    void initText(Text *A)
      {
      A->position.x=300;
      A->position.y=50;
      
      A->textColor.r=255;
      A->textColor.g=255;
      A->textColor.b=0;
       
      A->font= TTF_OpenFont("a.otf",20);
      }
      void freeText(Text A)
      {
      SDL_FreeSurface(A.surfacetexte);
      }
      void displayText(Text t, SDL_Surface *screen)
      {
      t.surfacetexte= TTF_RenderText_Solid(t.font,"SinisterV",t.textColor);
      SDL_BlitSurface(t.surfacetexte,NULL,screen,&t.position);
      }
      
      
  
  
   void liberer(Image A)
   {
     SDL_FreeSurface(A.img);
     }
     void afficher(Image p,SDL_Surface *screen)
     {
       SDL_BlitSurface(p.img,NULL,screen,&p.pos1);
       }
       
       

   
