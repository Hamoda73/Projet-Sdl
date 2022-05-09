/**
 *@file image10.c
 *@brief fonctions du jeu 
 *@author Mohamed khelifi
 *@version 1
 *@date Apr 26, 2022
 *
 * testing full program
 *
*/
#include <SDL/SDL.h>
#include "image10.h"
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include<SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include<math.h>
#include<time.h>
/**
 * @brief pour initialiser limage du bouton play A
 * @param A limage du boutton
 * @return Nothing
 */



void initlilith(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/lilith.png");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=530;
  A->pos1.y=255;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  
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
  
  
  void initcuts1(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts1.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts2(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts2.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  void initcuts3(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts3.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
void initcuts4(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts4.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}  
  
  void initcuts5(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts5.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts6(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts6.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts7(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts7.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts8(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts8.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts9(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts9.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts10(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts10.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts11(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts11.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  void initcuts12(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts12.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts13(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts13.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts14(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts14.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  void initcuts15(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts15.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts16(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts16.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcuts17(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts17.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  
  void initcuts18(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cuts18.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  void initcutsxx(Image *A)
{
A->img=IMG_Load("///home/ubuntu123/Desktop/projet/cutsxx.jpg");
    if (A->img==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  A->pos1.x=-100;
  A->pos1.y=-5;
  A->pos1.w=0;
  A->pos1.h=A->img->h;;
  }}
  
  /**
 * @brief pour initialiser limage du bouton settings A
 * @param A limage du boutton settings
 * @return Nothing
 */
 
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
  /**
 * @brief pour initialiser limage du bouton full screen A
 * @param A limage du boutton 
 * @return Nothing
 */
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
 
 /**
 * @brief pour initialiser limage du bouton normal screen A
 * @param A limage du boutton
 * @return Nothing
 */
 
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
  
  /**
 * @brief pour initialiser limage du logo du jeu A
 * @param A limage du logo
 * @return Nothing
 */
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
  
  
  /**
 * @brief pour initialiser limage du bouton volume min A
 * @param A limage du boutton
 * @return Nothing
 */
 
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
  
  /**
 * @brief pour initialiser le score dun personnage
 * @param perso La structure du personnage ou se trouve le score
 * @return Nothing
 */
 
  void initscore(Personnage *perso)
      {
      perso->score.texte = NULL; //surface qui sert à l'affichage du temps
     perso->score.position.x=50;
     perso->score.position.y=30;
     perso->score.police = NULL;
perso->score.police = TTF_OpenFont("///home/ubuntu123/Downloads/Condensed.ttf",40);
     strcpy( perso->score.entree,"");
     (perso->score.secondesEcoulees)=0;
     time(&(perso->score.t1));
      }
      
  /**
 * @brief pour liberer le score
 * @param perso la strucutre personnage ou se trouve le score
 * @return Nothing
 */
    /*  void freescore(Personnage perso)
      {
      SDL_FreeSurface(perso.score.surfacetexte);
      } */
      
      /**
 * @brief pour afficher le score dun personnage perso
 * @param perso la strucutre personnage ou se trouve le score
 * @param screen la surface ou va s afficher le score
 * @return Nothing
 */
      void displayscore(Personnage *perso, SDL_Surface *screen)
      {
  SDL_Color couleurBlanche= {255,255,255};
     time(&(perso->score.t2));//temps actuel
     perso->score.secondesEcoulees = perso->score.t2 - perso->score.t1;
     perso->score.min=((perso->score.secondesEcoulees));
     perso->score.sec= ((perso->score.secondesEcoulees));
     sprintf(perso->score.entree,"score %02d",perso->score.min);
     perso->score.texte = TTF_RenderUTF8_Solid(perso->score.police, perso->score.entree, couleurBlanche);
     SDL_BlitSurface(perso->score.texte, NULL,screen, &(perso->score.position)); 
//SDL_Delay(80);
      }
      
      
      
      /////
     /**
 * @brief pour initialiser les vies dun personnage  perso
 * @param perso la strucutre personnage ou se trouve variable vies
 * @return Nothing
 */
   
      void initvies(Personnage *perso)
      {
      perso->vies.position.x=500;
      perso->vies.position.y=50;
      
      perso->vies.textColor.r=255;
      perso->vies.textColor.g=255;
      perso->vies.textColor.b=255;
          
perso->vies.font= TTF_OpenFont("///home/ubuntu123/Downloads/Condensed.ttf",40);
      }
       /**
 * @brief pour liberer les ves dun perso
 * @param perso la strucutre personnage ou se trouve variable vies
 * @return Nothing
 */
      void freevies(Personnage perso)
      {
      SDL_FreeSurface(perso.vies.surfacetexte);
      }
      
       /**
 * @brief pour afficher les vies dun personnage
 * @param perso la strucutre personnage ou se trouve variable vies
 * @param screen la surface ou va s afficher les vies
 * @return Nothing
 */
      void displayvies(Personnage perso, SDL_Surface *screen)
      {
      if (perso.fight == 0)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 5",perso.vies.textColor);
  }
  if (perso.fight == 1)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 4",perso.vies.textColor);
  }
    if (perso.fight == 2)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 3",perso.vies.textColor);
  } 
  if (perso.fight == 3)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 2",perso.vies.textColor);
  }
  if (perso.fight == 4)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 1",perso.vies.textColor);
  }
  if (perso.fight == 5)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 0",perso.vies.textColor);
  }
  if (perso.fight > 5)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 0",perso.vies.textColor);
  } SDL_BlitSurface(perso.vies.surfacetexte,NULL,screen,&perso.vies.position);
      }
      /////
      
      
  /**
 * @brief pour afficher un personnage
 * @param perso la strucutre du personnage
 * @param screen la surface ou va s afficher le perso
 * @return Nothing
 */   
       void afficherPerso(Personnage perso,SDL_Surface *screen)
     {
       /*SDL_BlitSurface(perso.persoimg,NULL,screen,&perso.pos1); */
       
       if ((perso.num == 0) && (perso.direction==0)&& (perso.dragondies==0)) 
      {
        SDL_BlitSurface(perso.mat[0][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 0)&& (perso.dragondies==0))
      {
        SDL_BlitSurface(perso.mat[0][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 0)&& (perso.dragondies==0))
      {     
        SDL_BlitSurface(perso.mat[0][2],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 0)&& (perso.dragondies==0))
      {
        SDL_BlitSurface(perso.mat[0][3],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==0)&& (perso.dragondies==0))
      {
        SDL_BlitSurface(perso.mat[0][4],NULL,screen,&perso.pos1);
      }
      
      
      
       if ((perso.num == 0) && (perso.direction==1)&& (perso.dragondies==0)) 
      {
        SDL_BlitSurface(perso.mat[1][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 1)&& (perso.dragondies==0))
      {
        SDL_BlitSurface(perso.mat[1][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 1)&& (perso.dragondies==0))
      {     
        SDL_BlitSurface(perso.mat[1][2],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 1)&& (perso.dragondies==0))
      {
        SDL_BlitSurface(perso.mat[1][3],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==1) && (perso.dragondies==0))
      {
        SDL_BlitSurface(perso.mat[1][4],NULL,screen,&perso.pos1);
      }
      
       
      ///////
      
      
   /*   if ((perso.num == 0) && (perso.direction==0)&& (perso.dragondies==1)) 
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 0)&& (perso.dragondies==1))
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 0)&& (perso.dragondies==1))
      {     
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 0)&& (perso.dragondies==1))
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==0)&& (perso.dragondies==1))
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }
      
      
      
       if ((perso.num == 0) && (perso.direction==1)&& (perso.dragondies==1)) 
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 1)&& (perso.dragondies==1))
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 1)&& (perso.dragondies==1))
      {     
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 1)&& (perso.dragondies==1))
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==1) && (perso.dragondies==1))
      {
        SDL_BlitSurface(perso.mat[2][0],NULL,screen,&perso.pos1);
      }
      
      
      
      //////
      
      
      if ((perso.num == 0) && (perso.direction==0)&& (perso.dragondies==2)) 
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 0)&& (perso.dragondies==2))
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 0)&& (perso.dragondies==2))
      {     
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 0)&& (perso.dragondies==2))
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==0)&& (perso.dragondies==2))
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }
      
      
      
       if ((perso.num == 0) && (perso.direction==1)&& (perso.dragondies==2)) 
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 1)&& (perso.dragondies==2))
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 1)&& (perso.dragondies==2))
      {     
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 1)&& (perso.dragondies==2))
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==1) && (perso.dragondies==2))
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }
      */
      /////
      if ( (perso.dragondies==1))
      {
        SDL_BlitSurface(perso.mat[2][1],NULL,screen,&perso.pos1);
      }
      if ( (perso.dragondies==2))
      {
        SDL_BlitSurface(perso.mat[2][2],NULL,screen,&perso.pos1);
      }
      
       }    
       /**
 * @brief pour afficher un 2eme personnage perso2
 * @param perso2 la strucutre du personnage2
 * @param screen la surface ou va s afficher le perso2
 * @return Nothing
 */   
       void afficherPerso2(Personnage perso2,SDL_Surface *screen)
     {
       /*SDL_BlitSurface(perso.persoimg,NULL,screen,&perso.pos1); */
       
       if ((perso2.num == 0) && (perso2.direction==0)) 
      {
        SDL_BlitSurface(perso2.mat[0][0],NULL,screen,&perso2.pos1);
      }
    if ((perso2.num == 1) && ( perso2.direction == 0))
      {
        SDL_BlitSurface(perso2.mat[0][1],NULL,screen,&perso2.pos1);
      }
    if ((perso2.num == 2) && (perso2.direction == 0))
      {     
        SDL_BlitSurface(perso2.mat[0][2],NULL,screen,&perso2.pos1);
      }  
    if ((perso2.num == 3) && (perso2.direction == 0))
      {
        SDL_BlitSurface(perso2.mat[0][3],NULL,screen,&perso2.pos1);
      }  
    if ((perso2.num == 4) && (perso2.direction ==0))
      {
        SDL_BlitSurface(perso2.mat[0][4],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 5) && (perso2.direction ==0))
      {
        SDL_BlitSurface(perso2.mat[0][5],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 6) && (perso2.direction ==0))
      {
        SDL_BlitSurface(perso2.mat[0][6],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 7) && (perso2.direction ==0))
      {
        SDL_BlitSurface(perso2.mat[0][7],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 8) && (perso2.direction ==0))
      {
        SDL_BlitSurface(perso2.mat[0][8],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 9) && (perso2.direction ==0))
      {
        SDL_BlitSurface(perso2.mat[0][9],NULL,screen,&perso2.pos1);
      }
      
      
       if ((perso2.num == 0) && (perso2.direction==1)) 
      {
        SDL_BlitSurface(perso2.mat[1][0],NULL,screen,&perso2.pos1);
      }
    if ((perso2.num == 1) && ( perso2.direction == 1))
      {
        SDL_BlitSurface(perso2.mat[1][1],NULL,screen,&perso2.pos1);
      }
    if ((perso2.num == 2) && (perso2.direction == 1))
      {     
        SDL_BlitSurface(perso2.mat[1][2],NULL,screen,&perso2.pos1);
      }  
    if ((perso2.num == 3) && (perso2.direction == 1))
      {
        SDL_BlitSurface(perso2.mat[1][3],NULL,screen,&perso2.pos1);
      }  
    if ((perso2.num == 4) && (perso2.direction ==1))
      {
        SDL_BlitSurface(perso2.mat[1][4],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 5) && (perso2.direction ==1))
      {
        SDL_BlitSurface(perso2.mat[1][5],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 6) && (perso2.direction ==1))
      {
        SDL_BlitSurface(perso2.mat[1][6],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 7) && (perso2.direction ==1))
      {
        SDL_BlitSurface(perso2.mat[1][7],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 8) && (perso2.direction ==1))
      {
        SDL_BlitSurface(perso2.mat[1][8],NULL,screen,&perso2.pos1);
      }
      if ((perso2.num == 9) && (perso2.direction ==1))
      {
        SDL_BlitSurface(perso2.mat[1][9],NULL,screen,&perso2.pos1);
      }
      
       
      
       }
       
       
       /**
 * @brief pour animer les images dun personnage perso
 * @param perso la strucutre du personnage perso
 * @return Nothing
 */   
 void animerPerso(Personnage *perso)
 {
 
        
       
       if (perso->num == 4)
       {
            perso->num =0;
       }
       else if (perso->num < 4)
       {
            (perso->num)++;
       } 
        
        
 }
 
   /**
 * @brief pour animer les mouvements dun personnage perso 2
 * @param perso2 la strucutre du personnage2 perso2
 * @return Nothing
 */   
 
 
 void animerPerso2(Personnage *perso2)
 {
 
        
       
       if (perso2->num == 9)
       {
            perso2->num =0;
       }
       else if (perso2->num < 9)
       {
            (perso2->num)++;
       }
        
        
 }
   /**
 * @brief pour initialiser un personnage
 * @param perso la strucutre du personnage perso
 * @return Nothing
 */   
 
  void initPerso(Personnage *perso)
{
 perso->persoimg=IMG_Load("///home/ubuntu123/Desktop/projet/sprite11.png");
 
    if (perso->persoimg==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  SDL_SetColorKey(perso->persoimg, SDL_SRCCOLORKEY,SDL_MapRGB(perso->persoimg->format ,255,255,255));
  perso->pos1.x=255;
  perso->pos1.y=170;
  perso->pos1.w=200;
  perso->pos1.h=perso->persoimg->h ;
  initscore(&(*perso));
  initvies(&(*perso));
  perso->direction=0;
  perso->num=0;
  perso->speed=0;
  perso->fight=0;
  perso->etat=0;
   perso->minix.x=0;
   perso->minix.y=0;
   perso->dragondies=0;
  perso->mat[0][0]=IMG_Load("///home/ubuntu123/Desktop/projet/sprite11.png");
  perso->mat[0][1]=IMG_Load("///home/ubuntu123/Desktop/projet/sprite22.png");
  perso->mat[0][2]=IMG_Load("///home/ubuntu123/Desktop/projet/sprite33.png");
  perso->mat[0][3]=IMG_Load("///home/ubuntu123/Desktop/projet/sprite44.png");
  perso->mat[0][4]=IMG_Load("///home/ubuntu123/Desktop/projet/sprite55.png");
  
  perso->mat[1][0]=IMG_Load("///home/ubuntu123/Downloads/sprite11left.png");
  perso->mat[1][1]=IMG_Load("///home/ubuntu123/Downloads/sprite22left.png");
  perso->mat[1][2]=IMG_Load("///home/ubuntu123/Downloads/sprite33left.png");
  perso->mat[1][3]=IMG_Load("///home/ubuntu123/Downloads/sprite44left.png");
  perso->mat[1][4]=IMG_Load("///home/ubuntu123/Downloads/sprite55.png");
  
perso->mat[2][0]=IMG_Load("///home/ubuntu123/Desktop/projet/fight3.png");
perso->mat[2][1]=IMG_Load("///home/ubuntu123/Desktop/projet/fight1.png"); 
perso->mat[2][2]=IMG_Load("///home/ubuntu123/Desktop/projet/fight3.png");
perso->mat[2][3]=IMG_Load("///home/ubuntu123/Desktop/projet/fight4.png"); 
  }}
  
  /**
 * @brief pour initialiser un 2eme personnage perso2
 * @param perso2 la strucutre du personnage perso2
 * @return Nothing
 */   
 
  void initPerso2(Personnage *perso2)
{
 perso2->persoimg=IMG_Load("///home/ubuntu123/Desktop/projet/sprite11.png");
 
    if (perso2->persoimg==NULL)
      {
       printf("unable to load png : %s \n",SDL_GetError());
        return;
        } else {
  SDL_SetColorKey(perso2->persoimg, SDL_SRCCOLORKEY,SDL_MapRGB(perso2->persoimg->format ,255,255,255));
  perso2->pos1.x=255;
  perso2->pos1.y=170;
  perso2->pos1.w=200;
  perso2->pos1.h=perso2->persoimg->h ;
  initscore(&(*perso2));
  initvies(&(*perso2));
  perso2->direction=0;
  perso2->num=0;
  perso2->speed=0;
  perso2->etat=0;
  perso2->mat[0][0]=IMG_Load("///home/ubuntu123/Downloads/perso2.v3(2).png");
  perso2->mat[0][1]=IMG_Load("///home/ubuntu123/Downloads/perso2(1).v3.png");
  perso2->mat[0][2]=IMG_Load("///home/ubuntu123/Downloads/perso2(2).v3.png");
  perso2->mat[0][3]=IMG_Load("///home/ubuntu123/Downloads/perso2(3).v3.png");
  perso2->mat[0][4]=IMG_Load("///home/ubuntu123/Downloads/perso2(4).v3.png");
  perso2->mat[0][5]=IMG_Load("///home/ubuntu123/Downloads/perso2(5).v3.png");
  perso2->mat[0][6]=IMG_Load("///home/ubuntu123/Downloads/perso2(6).v3.png");
  perso2->mat[0][7]=IMG_Load("///home/ubuntu123/Downloads/perso2(7).v3.png");
  perso2->mat[0][8]=IMG_Load("///home/ubuntu123/Downloads/perso2(8).v3.png");
  perso2->mat[0][9]=IMG_Load("///home/ubuntu123/Downloads/perso2(9).v3.png");
  
  perso2->mat[1][0]=IMG_Load("///home/ubuntu123/Downloads/left.png");
   perso2->mat[1][1]=IMG_Load("///home/ubuntu123/Downloads/left1.png");
   perso2->mat[1][2]=IMG_Load("///home/ubuntu123/Downloads/left2.png");
  perso2->mat[1][3]=IMG_Load("///home/ubuntu123/Downloads/left3.png");
  perso2->mat[1][4]=IMG_Load("///home/ubuntu123/Downloads/left4.png");
   perso2->mat[1][5]=IMG_Load("///home/ubuntu123/Downloads/left5.png");
    perso2->mat[1][6]=IMG_Load("///home/ubuntu123/Downloads/left6.png");
     perso2->mat[1][7]=IMG_Load("///home/ubuntu123/Downloads/left7.png");
   perso2->mat[1][8]=IMG_Load("///home/ubuntu123/Downloads/left8.png");
   perso2->mat[1][9]=IMG_Load("///home/ubuntu123/Downloads/left9.png");
  
  
  }}
  
  
  /**
 * @brief permettre de sauter le personnage perso
 * @param perso la strucutre du personnage perso
 * @param posx la position derniere du perso selon laxe des abscisses
 * @param posy la position derniere du perso selon laxe des ordonnees
 * @return Nothing
 */   
 
  void saut(Personnage *perso,int posx, int posy)
  {
    
    // La position relative de Mario
    
    
      
    

    // Boucle principale du programme
    
     
        // EVOLUTION
            //On avance de 1
            perso->pos2.x++;

            

            //On met à "0" les pos abs:
            perso->pos1.x = posx ;
            perso->pos1.y = posy ;
            

            //On calcule la valeur relative de y:
          perso->pos2.y=(-0.04*(perso->pos2.x*perso->pos2.x)+95.5555555555555555555555);

            //On calcule maintenant les valeurs abs
            perso->pos1.x = perso->pos1.x + perso->pos2.x +50;
            perso->pos1.y = perso->pos1.y - perso->pos2.y;


if(perso->pos2.x>=50)
            {
                
                perso->pos2.x=-50;
                perso->pos1.x=-100; 
                 
            }
        //Intervalle de 10ms
        SDL_Delay(10);

        // FIN EVOLUTION

        
    
      
         
  }
  
  /**
 * @brief permettre le personnage de deplacer
 * @param perso la structure du personnage perso
 * @return Nothing
 */   
 
  void deplacer(Personnage *perso)
  {
    if ((perso->direction == 0 ) && ( perso->speed == 0))
     {
       perso->pos1.x += 20; 
     }
    else if (( perso->direction == 1) && ( perso->speed == 0))
    {
       perso->pos1.x -= 20;
    }
    
    if ((perso->direction == 0) && ( perso->speed ==1 ))
     {
       perso->pos1.x += 40; 
     }
    else if (( perso->direction == 1) && ( perso->speed == 1))
    {
       perso->pos1.x -= 40;
    }
    
    if (perso->pos1.x >= 520 )
    {
      perso->pos1.x = 520 ;
    }
    if (perso->pos1.x <= 120 )
    {
      perso->pos1.x = 120 ;
    }
    
    
    
    
  }
  
  /**
 * @brief initialiser le texte A
 * @param Text la structure dun text 
 * @return Nothing
 */   
 
 
 
  void initTextlevel1(Text *A)
      {
      A->position.x=80;
      A->position.y=250;
      
      A->textColor.r=255;
      A->textColor.g=255;
      A->textColor.b=0;
       
      A->font= TTF_OpenFont("a.otf",20);
      }
      /**
 * @brief pour liberer un texte A
 * @param Text la structure dun text 
 * @return Nothing
 */ 
    
      /**
 * @brief pour afficher le text tsur une surface screen
 * @param Text la structure dun text 
 * @param screen surface ou on va afficher le texte 
 * @return Nothing
 */ 
      void displayTextlevel1(Text t, SDL_Surface *screen)
      {
      t.surfacetexte= TTF_RenderText_Solid(t.font,"Congrats on finishing level 1,\npress space to start level 2",t.textColor);
      SDL_BlitSurface(t.surfacetexte,NULL,screen,&t.position);
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
      /**
 * @brief pour liberer un texte A
 * @param Text la structure dun text 
 * @return Nothing
 */ 
      void freeText(Text A)
      {
      SDL_FreeSurface(A.surfacetexte);
      }
      /**
 * @brief pour afficher le text tsur une surface screen
 * @param Text la structure dun text 
 * @param screen surface ou on va afficher le texte 
 * @return Nothing
 */ 
      void displayText(Text t, SDL_Surface *screen)
      {
      t.surfacetexte= TTF_RenderText_Solid(t.font,"SinisterV",t.textColor);
      SDL_BlitSurface(t.surfacetexte,NULL,screen,&t.position);
      }
      
      /**
 * @brief pour initialiser limage du bouton volume max
 * @param image image du bouton
 * @return Nothing
 */  
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
  
  
  
    /**
 * @brief pour initialiser limage du bouton quitter
 * @param image image du bouton 
 * @return Nothing
 */  
 
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
  
   /**
 * @brief pour initialiser limage du background Backg
 * @param image image du background
 * @return Nothing
 */  
 
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
   
    /**
 * @brief pour initialiser limage du background du gameplay NewPlayBackg
 * @param image image du background gameplay
 * @return Nothing
 */  
 
   void initNewPlay(Image *NewPlayBackg)
  {

NewPlayBackg->img=IMG_Load("///home/ubuntu123/Downloads/2ndback.v4.jpg");
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
   
    /**
 * @brief pour initialiser limage du background du settings SettingsBackg
 * @param image image du background setting
 * @return Nothing
 */  
 
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

 /**
 * @brief pour initialiser limage du niveau volume 1 A
 * @param image image du niveau volume 1
 * @return Nothing
 */  
 
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
   
   /**
 * @brief pour initialiser limage du niveau volume 2 A
 * @param image image du niveau volume 2
 * @return Nothing
 */  
 
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


/**
 * @brief pour initialiser limage du bouton back A
 * @param image image du bouton back
 * @return Nothing
 */  
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
   


/**
 * @brief pour initialiser limage du niveau volume 3 A
 * @param image image du niveau volume 3
 * @return Nothing
 */  
 
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
   

/**
 * @brief pour initialiser limage du bouton play souligne A
 * @param image image du bouton play souligne
 * @return Nothing
 */  
 
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
  
  /**
 * @brief pour initialiser limage du bouton options souligne A
 * @param image image du bouton options souligne
 * @return Nothing
 */  
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
  
  /**
 * @brief pour initialiser limage du bouton quit souligne A
 * @param image image du bouton quit souligne
 * @return Nothing
 */  
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
  
  
      
  
  /**
 * @brief pour liberer une image A
 * @param image image dont on va liberer
 * @return Nothing
 */  
   void liberer(Image A)
   {
     SDL_FreeSurface(A.img);
     }
  
  /**
 * @brief pour liberer une personnage perso
 * @param personnage perso dont on va liberer
 * @return Nothing
 */  
 
     void libererPerso(Personnage perso)
   {
     SDL_FreeSurface(perso.persoimg);
     }
 
 /**
 * @brief pour afficher une image A
 * @param image image dont on va afficher
 * @param screen surface dont sur laquelle on va afficher limage
 * @return Nothing
 */  
     
     void afficher(Image p,SDL_Surface *screen)
     {
       SDL_BlitSurface(p.img,NULL,screen,&p.pos1);
       }
      
        
////////tache ennemy /////////

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
e->mat[0][0]=IMG_Load("///home/ubuntu123/Desktop/projet/draguno1.png");
e->mat[0][1]=IMG_Load("///home/ubuntu123/Desktop/projet/draguno2.png");
e->mat[0][2]=IMG_Load("///home/ubuntu123/Desktop/projet/draguno3.png");
e->mat[0][3]=IMG_Load("///home/ubuntu123/Desktop/projet/draguno4.png");
e->mat[0][4]=IMG_Load("///home/ubuntu123/Desktop/projet/draguno1.png");
e->mat[1][0]=IMG_Load("///home/ubuntu123/Downloads/draguno1.png");
e->mat[1][1]=IMG_Load("///home/ubuntu123/Downloads/draguno2.png");
e->mat[1][2]=IMG_Load("///home/ubuntu123/Downloads/draguno3.png");
e->mat[1][3]=IMG_Load("///home/ubuntu123/Downloads/draguno4.png");
e->mat[1][4]=IMG_Load("///home/ubuntu123/Downloads/draguno1.png");

//la direction initial
e->direction=0;
e->num=0;
}
///
void initEnnemi2(Ennemi *e)
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
e->mat[2][0]=IMG_Load("///home/ubuntu123/Desktop/projet/kkk1.png");
e->mat[2][1]=IMG_Load("///home/ubuntu123/Desktop/projet/kkk2.png");
e->mat[2][2]=IMG_Load("///home/ubuntu123/Desktop/projet/kkk3.png");
e->mat[2][3]=IMG_Load("///home/ubuntu123/Desktop/projet/kkk4.png");
e->mat[2][4]=IMG_Load("///home/ubuntu123/Desktop/projet/kkk5.png");
e->mat[3][0]=IMG_Load("///home/ubuntu123/Downloads/kkk1.png");
e->mat[3][1]=IMG_Load("///home/ubuntu123/Downloads/kkk2.png");
e->mat[3][2]=IMG_Load("///home/ubuntu123/Downloads/kkk3.png");
e->mat[3][3]=IMG_Load("///home/ubuntu123/Downloads/kkk4.png");
e->mat[3][4]=IMG_Load("///home/ubuntu123/Downloads/kkk5.png");

//la direction initial
e->direction=2;
e->num=0;
}

///
void deplacerennemy2( Ennemi *e)
{int x=300,y=200;
  int xx = 0;
   
srand(time(NULL));
e->posennemi.y=(rand()%(350-300))+140;
if( e->posennemi.x > 710 )//if the position of the enemy is on the far right
 e->direction = 3;//direction will change to  left
 else
 {
if( e->posennemi.x < 20 )//if the enemy is on the far left 
 e->direction = 2;//same as before but right instead of left
}
if( e->direction == 2)//droit
  e->posennemi.x+=6;//move right
  
else
  e->posennemi.x-=6;//move left
 
}

void animerEnnemi2( Ennemi * e)
{
if(e->direction==2)
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
}


///

void initEnnemi3(Ennemi *e)
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
e->mat[0][0]=IMG_Load("///home/ubuntu123/Desktop/projet/angel.png");
e->mat[0][1]=IMG_Load("///home/ubuntu123/Desktop/projet/angel.png");
e->mat[0][2]=IMG_Load("///home/ubuntu123/Desktop/projet/angel.png");
e->mat[0][3]=IMG_Load("///home/ubuntu123/Desktop/projet/angel.png");
e->mat[0][4]=IMG_Load("///home/ubuntu123/Desktop/projet/angel.png");
e->mat[1][0]=IMG_Load("///home/ubuntu123/Downloads/angel.png");
e->mat[1][1]=IMG_Load("///home/ubuntu123/Downloads/angel.png");
e->mat[1][2]=IMG_Load("///home/ubuntu123/Downloads/angel.png");
e->mat[1][3]=IMG_Load("///home/ubuntu123/Downloads/angel.png");
e->mat[1][4]=IMG_Load("///home/ubuntu123/Downloads/angel.png");

//la direction initial
e->direction=0;
e->num=0;
}

///
void deplacerennemy3( Ennemi *e)
{int x=300,y=200;
  int xx = 0; 
   
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

void animerEnnemi3( Ennemi * e)
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
}
/////

 
void initEnnemi4(Ennemi *e)
{    const int A=60,B=600;
srand(time(NULL));
//e->sprite = IMG_Load("/home/amine/Downloads/scottpilgrim_multiple.png");*/

//les positions de l'ennemi sur l'écran
e->posennemi.y=200;
e->posennemi.x=/*(rand() % (B - A + 1)) +A*/710 ;


/*e->possprite.x=0;
e->possprite.y=0;
e->possprite.w=108;
e->possprite.h=140;*/
e->mat[0][0]=IMG_Load("///home/ubuntu123/Desktop/projet/dvil.png");
e->mat[0][1]=IMG_Load("///home/ubuntu123/Desktop/projet/dvil.png");
e->mat[0][2]=IMG_Load("///home/ubuntu123/Desktop/projet/dvil.png");
e->mat[0][3]=IMG_Load("///home/ubuntu123/Desktop/projet/dvil.png");
e->mat[0][4]=IMG_Load("///home/ubuntu123/Desktop/projet/dvil.png");
e->mat[1][0]=IMG_Load("///home/ubuntu123/Downloads/dvil.png");
e->mat[1][1]=IMG_Load("///home/ubuntu123/Downloads/dvil.png");
e->mat[1][2]=IMG_Load("///home/ubuntu123/Downloads/dvil.png");
e->mat[1][3]=IMG_Load("///home/ubuntu123/Downloads/dvil.png");
e->mat[1][4]=IMG_Load("///home/ubuntu123/Downloads/dvil.png");

//la direction initial
e->direction=0;
e->num=0;
}
///

void initEnnemi5(Ennemi *e)
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
e->mat[0][0]=IMG_Load("///home/ubuntu123/Downloads/maya.png");
e->mat[0][1]=IMG_Load("///home/ubuntu123/Downloads/maya.png");
e->mat[0][2]=IMG_Load("///home/ubuntu123/Downloads/maya.png");
e->mat[0][3]=IMG_Load("///home/ubuntu123/Downloads/maya.png");
e->mat[0][4]=IMG_Load("///home/ubuntu123/Downloads/maya.png");
e->mat[1][0]=IMG_Load("///home/ubuntu123/Desktop/projet/maya.png");
e->mat[1][1]=IMG_Load("///home/ubuntu123/Desktop/projet/maya.png");
e->mat[1][2]=IMG_Load("///home/ubuntu123/Desktop/projet/maya.png");
e->mat[1][3]=IMG_Load("///home/ubuntu123/Desktop/projet/maya.png");
e->mat[1][4]=IMG_Load("///home/ubuntu123/Desktop/projet/maya.png");

//la direction initial
e->direction=0;
e->num=0;
}
void deplacerennemy5( Ennemi *e)
{int x=300,y=200;
  int xx = 0; 
   
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

void animerEnnemi5( Ennemi * e)
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
}
///

///
void deplacerennemy4( Ennemi *e)
{int x=300,y=200;
  int xx = 0; 
   
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

void animerEnnemi4( Ennemi * e)
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
}


////
void afficherEnnemi(Ennemi e,SDL_Surface *screen)
{
SDL_BlitSurface( e.mat[e.direction][e.num], NULL , screen , &e.posennemi );
SDL_Flip(screen);

}
void afficherEnnemi2(Ennemi e,SDL_Surface *screen)
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
void deplacerennemy( Ennemi *e)
{int x=300,y=200;
  int xx = 0;
   
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
int collisionBB( Personnage perso, Ennemi e)
{
if(( (perso.pos1.x-150 + perso.pos1.w)< e.posennemi.x ) || (e.posennemi.x + 54 < perso.pos1.x-150 ) ||((perso.pos1.y + perso.pos1.h)< e.posennemi.y)||((e.posennemi.y + 220 < perso.pos1.y)))
return 0;
else
return 1;

}


int collisionperso( Personnage perso, Personnage e)
{
if(( (perso.pos1.x-150 + perso.pos1.w)< e.pos1.x ) || (e.pos1.x + 54 < perso.pos1.x-150 ) ||((perso.pos1.y + perso.pos1.h)< e.pos1.y)||((e.pos1.y + 220 < perso.pos1.y)))
return 0;
else
return 1;

}



/////// fin tache ennemy //////
       
//// tache background ////

void initBackk(Background * b)
{
b->camera.x=0;
b->camera.y=0;
b->camera.w=800; 
b->camera.h=600;
 
b->imagebg=IMG_Load("///home/ubuntu123/Desktop/projet/hCUwLQ_2_85.png");
 
}

void initBackk2(Background * b)
{
b->camera.x=0;
b->camera.y=0;
b->camera.w=800; 
b->camera.h=600;
 
b->imagebg=IMG_Load("///home/ubuntu123/Desktop/projet/background.jpg");
 
}
void initBackk3(Background * b)
{
b->camera.x=0;
b->camera.y=0;
b->camera.w=800; 
b->camera.h=600;
 
b->imagebg=IMG_Load("///home/ubuntu123/Desktop/projet/level3_80.jpg");
 
}

void afficherBack(Background b, SDL_Surface * screen){
SDL_BlitSurface(b.imagebg,&b.camera,screen,NULL);

}


void scrolling (SDL_Rect * b, int bdirection,int wigth)
{
int save=b->x;
b->x+=5*bdirection;
if(b->x<0 ||b->x>wigth-800){
b->x=save;
}

}

void QuitBack(Background * b){
SDL_FreeSurface(b->imagebg);
 
 
}

///// fin back ////
   
/////minimap///
void initminimap(minimap *m)
{
m -> map = IMG_Load("///home/ubuntu123/Desktop/projet/minimap.jpg");
        m->posmap.x=200;
        m->posmap.y=40;
        m->perso_pos_map.x=m->posmap.x;
        m->perso_pos_map.y=m->posmap.y;
}
void MAJMinimap(SDL_Rect posJoueur,minimap *m,SDL_Surface *screen, SDL_Rect camera , int redimensionnement)
{
  SDL_Rect posJoueurABS;
  m->perso_pos_map.x=0;
  m->perso_pos_map.y=0;
  posJoueurABS.x = posJoueur.x ; // dans simulation avant majminimap
  posJoueurABS.y = posJoueur.y ;
  m->perso_pos_map.x=(posJoueurABS.x * redimensionnement/100)+250;
  m->perso_pos_map.y=(posJoueurABS.y * redimensionnement/100)+20;
  m->mini_perso=SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_DOUBLEBUF,10,10,32,0,0,0,0);//taaml mouraba fil mini map qui represente le perso
  SDL_FillRect(m->mini_perso,NULL,SDL_MapRGB(screen->format,0,255,0));// pour couleur
}
void afficherminimap (minimap m, SDL_Surface *screen)
{
  SDL_BlitSurface(m.map,NULL,screen,&m.posmap);
  SDL_BlitSurface(m.mini_perso,NULL,screen,&m.perso_pos_map);
}
void libererminimap (minimap *m)
{
SDL_FreeSurface(m->map);
SDL_FreeSurface(m->mini_perso);
}


void inittime(timetime *t)
{
     t->texte = NULL; //surface qui sert à l'affichage du temps
     t->position.x=50;
     t->position.y=65;
     t->police = NULL;
t->police = TTF_OpenFont("///home/ubuntu123/Downloads/Condensed.ttf",40);
     strcpy( t->entree,"");
     (t->secondesEcoulees)=0;
     time(&(t->t1)); //temps du debut
}
void affichertime(timetime *t,SDL_Surface *screen)
{
     SDL_Color couleurBlanche= {255,255,255};
     time(&(t->t2));//temps actuel
     t->secondesEcoulees = t->t2 - t->t1;
     t->min=((t->secondesEcoulees/60)%60);
     t->sec= ((t->secondesEcoulees)%60);
     sprintf(t->entree,"%02d:%02d",t->min,t->sec);
     t->texte = TTF_RenderUTF8_Solid(t->police, t->entree, couleurBlanche);
     SDL_BlitSurface(t->texte, NULL,screen, &(t->position)); 
//SDL_Delay(80);
}
void liberer_time(timetime *t)
{
     SDL_FreeSurface(t->texte);
     TTF_CloseFont(t->police);
}


////fin minimap////


//////enigme /////

void init_enigme(enigme * e,char nomfichier[])
{
	e->p.x=0;//plein écran
	e->p.y=0;	
	e->img=NULL;	
FILE *f=NULL;
f=fopen(nomfichier,"r");//ouvrir 
if(f!=NULL){

while(fscanf(f,"%s %s %s\n",e->image1,e->image2,e->image3)!=EOF)

fclose(f);}

printf(" image 1 :%s  %s %s\n",e->image1,e->image2,e->image3);

}





///////////////////////////////////////
 void generate_afficher (SDL_Surface * screen  , char image [],enigme *e,int *alea)
{ 
	int test=*alea ;
do{
 *alea = 1+ rand()%3;//1,2,3
}while(*alea==test) ;//le nombre aléa obtenu


 if(*alea==1)
	strcpy(image,e->image1);
 else  if(*alea==2)
	strcpy(image,e->image2);
 else  if(*alea==3)
	strcpy(image,e->image3);

 e->img = IMG_Load(image);//recupérer l'image conscernée
 SDL_BlitSurface(e->img,NULL,screen,&(e->p)) ;//afficher cette image
  SDL_Flip(screen);//mise à jour de l'écran
}






 int solution_e (char image [])
 {
 	int solution =0 ;
 	if(strcmp(image,"img/1.jpg")==0)//comparaison
 	{
     	solution =2 ;//position de la solution dans l'image
 	}
 	else  	if(strcmp(image,"img/2.jpg")==0)
 	{
 		solution =3;

 	}
 	else 	if(strcmp(image,"img/3.jpg")==0)
 	{
 		solution =1;	
 	}
       /* else 	if(strcmp(image,"4.jpg")==0)
 	{
 		solution =1;	
 	}*/
 	return solution;
 }
/////////////////////



int resolution (int * running,int *run )
{


}////////////////////////




void afficher_chrono(enigme *en,SDL_Surface *screen,int i ) 
{ 
SDL_Surface *img=NULL;
SDL_Rect pos;
SDL_Rect post;
                pos.x=300;
                pos.y=-20;

                post.x=150;
                post.y=270;
		

	
          
           
             switch ( i )
		{
		case 0:	
		en->img = IMG_Load("timer0.png");	
		break;

		case 1:
		en->img = IMG_Load("timer1.png");
		break;

		case 2:	
		en->img = IMG_Load("timer2.png");       
		break;

		case 3:		
		en->img = IMG_Load("timer3.png");	
		break;

		case 4:		
		en->img = IMG_Load("timer4.png"); 		
		break;

		case 5:		
		en->img = IMG_Load("timer5.png");		
		break;

		case 6:
		en->img = IMG_Load("timer6.png");
		break;

		case 7:		
		en->img = IMG_Load("timer7.png"); 		
		break;

                case 8:		
		en->img = IMG_Load("timer8.png"); 		
		break;

		case 9:		
		en->img = IMG_Load("timer9.png");  		
		break;

		case 10:		
		en->img = IMG_Load("timer10.png");  		
		break;


                case 11:		
		en->img = IMG_Load("timer11.png");
		break;
		

}


	SDL_Flip(screen);
	SDL_BlitSurface(en->img, NULL, screen, &pos) ;



	
   /*  if (i==12){SDL_FreeSurface(en->img);
		en->img = IMG_Load("img/youlost.png");
  		SDL_BlitSurface(en->img, NULL, screen, &post) ;}
	*/

	//SDL_Delay(750);	
        
 	
     

}

 void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *en)
 {
         SDL_Rect pos;
          pos.x=250;
                pos.y=570; 


	SDL_Rect pos_passfail;
        pos_passfail.x=0;
        pos_passfail.y=0; 

	SDL_Surface *pass=IMG_Load("pass.jpg");	
	SDL_Surface *fail=IMG_Load("failed.jpg");	



 	if (r==s)//si la réponse est juste(déja connu maintenant)
 	{
	SDL_BlitSurface(pass, NULL, screen,&pos_passfail) ;
		


       for (int j=0;j<=5;j++){
                 switch(j){
		case 1 :
                en->img=IMG_Load("anime/p1.png");
              
 		SDL_BlitSurface(en->img, NULL, screen,&pos) ;
                break;
                case 2: 
                  en->img=IMG_Load("anime/p1.png");
              
 		SDL_BlitSurface(en->img, NULL, screen,&pos) ;
                break;
                case 3: 
                  en->img=IMG_Load("anime/p2.png");
              
 		SDL_BlitSurface(en->img, NULL, screen,&pos) ;
                break;
                 case 4: 
                  en->img=IMG_Load("anime/p2.png");
              
 		SDL_BlitSurface(en->img, NULL, screen,&pos) ;
                break;
       		 }
          SDL_Delay(50);
         SDL_Flip(screen);
      
 	}

       }

	else if ((r!=s)&&(r!=0))
		SDL_BlitSurface(fail, NULL, screen,&pos_passfail) ;

 }///////////////////////
void animer (enigme *e){
		e->num_animation++;
		if(e->num_animation==12){
			e->num_animation=0;
			e->time_over=1;	
		}	
SDL_Delay(250);
}

//////
