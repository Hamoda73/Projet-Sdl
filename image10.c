#include <SDL/SDL.h>
#include "image10.h"
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include<SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include<math.h>



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
  
  
  void initscore(Personnage *perso)
      {
      perso->score.position.x=50;
      perso->score.position.y=50;
      
      perso->score.textColor.r=255;
      perso->score.textColor.g=255;
      perso->score.textColor.b=255;
          
perso->score.font= TTF_OpenFont("///home/ubuntu123/Downloads/Condensed.ttf",40);
      }
      void freescore(Personnage perso)
      {
      SDL_FreeSurface(perso.score.surfacetexte);
      }
      void displayscore(Personnage perso, SDL_Surface *screen)
      {
  perso.score.surfacetexte=TTF_RenderText_Solid(perso.score.font,"score 00",perso.score.textColor);
      SDL_BlitSurface(perso.score.surfacetexte,NULL,screen,&perso.score.position);
      }
      
      
      
      /////
      void initvies(Personnage *perso)
      {
      perso->vies.position.x=500;
      perso->vies.position.y=50;
      
      perso->vies.textColor.r=255;
      perso->vies.textColor.g=255;
      perso->vies.textColor.b=255;
          
perso->vies.font= TTF_OpenFont("///home/ubuntu123/Downloads/Condensed.ttf",40);
      }
      void freevies(Personnage perso)
      {
      SDL_FreeSurface(perso.vies.surfacetexte);
      }
      void displayvies(Personnage perso, SDL_Surface *screen)
      {
  perso.vies.surfacetexte=TTF_RenderText_Solid(perso.vies.font,"vies : 5",perso.vies.textColor);
      SDL_BlitSurface(perso.vies.surfacetexte,NULL,screen,&perso.vies.position);
      }
      /////
      
      
       void afficherPerso(Personnage perso,SDL_Surface *screen)
     {
       /*SDL_BlitSurface(perso.persoimg,NULL,screen,&perso.pos1); */
       
       if ((perso.num == 0) && (perso.direction==0)) 
      {
        SDL_BlitSurface(perso.mat[0][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 0))
      {
        SDL_BlitSurface(perso.mat[0][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 0))
      {     
        SDL_BlitSurface(perso.mat[0][2],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 0))
      {
        SDL_BlitSurface(perso.mat[0][3],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==0))
      {
        SDL_BlitSurface(perso.mat[0][4],NULL,screen,&perso.pos1);
      }
      
      
      
       if ((perso.num == 0) && (perso.direction==1)) 
      {
        SDL_BlitSurface(perso.mat[1][0],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 1) && ( perso.direction == 1))
      {
        SDL_BlitSurface(perso.mat[1][1],NULL,screen,&perso.pos1);
      }
    if ((perso.num == 2) && (perso.direction == 1))
      {     
        SDL_BlitSurface(perso.mat[1][2],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 3) && (perso.direction == 1))
      {
        SDL_BlitSurface(perso.mat[1][3],NULL,screen,&perso.pos1);
      }  
    if ((perso.num == 4) && (perso.direction ==1))
      {
        SDL_BlitSurface(perso.mat[1][4],NULL,screen,&perso.pos1);
      }
      
       
      
       }
       
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
  perso->etat=0;
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
  
  
  
  
  }}
  
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
    
    
    
    
  }
  void initPersoleft(Personnage *perso)
{
     perso->persoimg=IMG_Load("///home/ubuntu123/Desktop/projet/spriteleft.jpg");
 
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
  
  
  }}
  
  
  
  
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
  
  
      
  
  
   void liberer(Image A)
   {
     SDL_FreeSurface(A.img);
     }
     
     void libererPerso(Personnage perso)
   {
     SDL_FreeSurface(perso.persoimg);
     }
     
     void afficher(Image p,SDL_Surface *screen)
     {
       SDL_BlitSurface(p.img,NULL,screen,&p.pos1);
       }
      
        

       

   
