/**
   *@file main.c
   *@brief full program
   *@author mohamed
   *@version 1.0
   *@date Apr 25, 2022
   *
   *  
   * program testing 
   */


#include <SDL/SDL.h>
#include "image10.h"
#include <SDL/SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_ttf.h>
#include<SDL/SDL_mixer.h>

int main(int argc, char** argv)
{
      
   SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);
   TTF_Init(); 
    SDL_Surface *screen;
   /* int done=0; */
  Image Play, Options, Quit, Backg , NewPlayBackg, Playh, Optionsh, Quith, SettingsBackg, Volume1, Options1, mini, maxi, Volume2, Volume3, BackButton, lilith
  , Full, Narrow, baka , sinisterv ;
  SDL_Rect camera;
  int running=1;
  timetime timmee;
  minimap m;
  initminimap(&m);
  camera.x=0;
      camera.y=0;
      camera.w=1300;
      camera.h=700;
  Personnage perso, persoleft, perso2;
    Ennemi e,e2,e3,e4,e5;
    Text t , level1;
    Background b,drag,b2,b3;
    atexit(SDL_Quit); 
    
    int done=0, casson=3 , trouve=0;
    trouve = 1;
    int bdirection=0;
    
    SDL_Rect minix;
    /*personne p,p1;*/
     SDL_Event event;
    initText(&t);  
    initTextlevel1(&level1);
    inittime(&timmee);
     
    //////////
    if(Mix_OpenAudio( 48000,MIX_DEFAULT_FORMAT,2,6555158)==-1)
   {
   printf("%s \n",Mix_GetError());
   }
   Mix_Music *musicuts;
   musicuts=Mix_LoadMUS("///home/ubuntu123/Downloads/FullSizeRender.mp3");
   
    ////////////////  son 100%
   if(Mix_OpenAudio( 48000,MIX_DEFAULT_FORMAT,2,6555158)==-1)
   {
   printf("%s \n",Mix_GetError());
   }
   Mix_Music *music;
   music=Mix_LoadMUS("///home/ubuntu123/Downloads/sally_face_ost_home_-8058600635889522696.mp3");
   if (casson==3)
   {
   Mix_PlayMusic(music,-1); 
   }
   /////////
   
    if(Mix_OpenAudio( 48000,MIX_DEFAULT_FORMAT,2,6555158)==-1)
   {
   printf("%s \n",Mix_GetError());
   }
   Mix_Music *music1;
   music1=Mix_LoadMUS("///home/ubuntu123/Downloads/sally_face_empty_hallways_extended_ost_-3535982612414536619.mp3");
   
   
    
    ///////
   Mix_Chunk *son;
   son = Mix_LoadWAV("///home/ubuntu123/Downloads/video-1645139046.wav");

   

   screen = SDL_SetVideoMode(700,400,32,SDL_HWSURFACE | SDL_DOUBLEBUF);
    if (!screen) 
    { 
      printf("unable to set 800x400 video : %s \n", SDL_GetError());
       return 1;
       }
       initBackground(&Backg);
       initBackButton(&BackButton);
       initSettingsBackg(&SettingsBackg);
       initPlayButton(&Play);
       initOptionsButton(&Options);
       initQuitButton(&Quit);
       initPlayButtonh(&Playh);
       initOptionsButtonh(&Optionsh);
       initQuitButtonh(&Quith);
       initVolume1(&Volume1);
       initOptionsButton1(&Options1);
       initmini(&mini); 
       initmaxi(&maxi); 
       initNewPlay(&NewPlayBackg);
       initVolume2(&Volume2);
       initVolume3(&Volume3);
       initNarrow(&Narrow);
       initFullscreen(&Full);
       initbaka(&baka);
       initsinisterv(&sinisterv);
       initPerso(&perso);
       initPerso2(&perso2);
      initlilith(&lilith);
        initEnnemi(&e); 
                initEnnemi2(&e2); 
                                initEnnemi3(&e3); 
                                 initEnnemi4(&e4);
                initEnnemi5(&e5);
        initBackk(&b);
                initBackk2(&b2);
                                initBackk3(&b3);
      perso.etat=0;
       {
         
         afficher(Backg,screen); 
         afficher(Play,screen);
         afficher(Options,screen);
         afficher(Quit,screen); 
         afficher(sinisterv,screen); 
         displayText(t,screen);       
         
         SDL_Flip(screen);
         
           }
          int punch=0;
      int fin=0;
      int posx=0, posy=0;
     perso.pos2.x = -50;
    perso.pos2.y = 0;
    
    perso.pos1.x = 200;
     perso.pos1.y = 170;
     ////
      int fin2=0;
      int posx2=0, posy2=0;
     perso2.pos2.x = -50;
    perso2.pos2.y = 0;
    
    perso2.pos1.x = 200;
     perso2.pos1.y = 170;
     int crocs=0;
     int dragonn=0;
     int dragondies=0, dragondies2=0, dragondies3=0, dragondies4=0;
    int dragondies5=0;
    int i=0, j=0;
    int level22=0;
    int level11=0;
    int level33=0;
    Image cuts1,cuts2,cuts3,cuts4,cuts5,cuts6,cuts7,cuts8,cuts9,cuts10,cuts11,
    cuts13,cuts14,cuts12,cuts15,cuts16,cuts17,cuts18,cutsxx;
    initcuts1(&cuts1);
    initcuts2(&cuts2);
    initcuts3(&cuts3);
    initcuts4(&cuts4);
    initcuts5(&cuts5);
    initcuts6(&cuts6);
    initcuts7(&cuts7);
    initcuts8(&cuts8);
    initcuts9(&cuts9);
    initcuts10(&cuts10);
    initcuts11(&cuts11);
    initcuts12(&cuts12);
    initcuts13(&cuts13);
    initcuts14(&cuts14);
    initcuts15(&cuts15);
    initcuts16(&cuts16);
    initcuts17(&cuts17);
    initcuts18(&cuts18);
    initcutsxx(&cutsxx);
    int cutsmusic=0;
                  SDL_EnableKeyRepeat(100,100);
                  
            SDL_bool program_launched = SDL_TRUE;
            
         while (program_launched)
          {
              
          if (trouve == 0) 
          {
         ////
          
         if (cutsmusic == 0)
         {
         Mix_PlayMusic(musicuts,-1); 
         afficher(cutsxx,screen);
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts1,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cuts2,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cuts3,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cutsxx,screen);
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts4,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cutsxx,screen);
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts5,screen); 
          SDL_Flip(screen);
          SDL_Delay(1000);
          
          afficher(cuts6,screen); 
          SDL_Flip(screen);
          SDL_Delay(1000);
          
          afficher(cuts7,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cutsxx,screen); 
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts8,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cutsxx,screen); 
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts9,screen);
          SDL_Flip(screen);
          SDL_Delay(1000);
          afficher(cutsxx,screen); 
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts10,screen);
          SDL_Flip(screen);
          SDL_Delay(1000);
          afficher(cutsxx,screen); 
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts11,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cuts12,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cuts13,screen);
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cutsxx,screen); 
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts14,screen); 
          SDL_Flip(screen);
          SDL_Delay(2000);
          afficher(cutsxx,screen); 
          SDL_Flip(screen);
          SDL_Delay(500);
          afficher(cuts15,screen);
          SDL_Flip(screen); 
          SDL_Delay(2000);
          afficher(cuts16,screen);
          SDL_Flip(screen); 
          SDL_Delay(2000);
          afficher(cuts17,screen);
          SDL_Flip(screen); 
          SDL_Delay(2000);
          afficher(cutsxx,screen);
          SDL_Flip(screen); 
          SDL_Delay(1000);
          afficher(cuts18,screen); 
          SDL_Flip(screen);
          SDL_Delay(3000);
          afficher(cutsxx,screen); 
          SDL_Flip(screen);
          SDL_Delay(100);
          cutsmusic=1;
          }
                   
          
          
          
          
         if (level33==1)
         {
         Mix_PlayMusic(music1,-1); 
         
          afficherBack(b3,screen);
         displayscore(&perso,screen);
                    displayvies(perso,screen);
                     
                    afficherPerso(perso,screen);
                     afficherPerso2(perso2,screen); 
           afficherminimap (m,screen);
           afficher(lilith,screen); 
                 affichertime (&timmee,screen); 
            deplacerennemy5(&e5);
      
         
     animerEnnemi5(&e5);
     afficherEnnemi(e5,screen);
     
           SDL_Flip(screen);
     
      if(collisionBB(perso, e5))
         {
          perso.pos1.y=170;
	  perso.pos1.x=120; 
	  perso.minix.x=0;
	  perso.fight++; 
	  
	  }
	  
	  if (dragondies5 == 1)
	  {
	     e5.posennemi.x=3500;
	  }
               
         }
         else if (level22==1)
         {
         afficherBack(b2,screen);
         displayscore(&perso,screen);
                    displayvies(perso,screen);
                     
                    afficherPerso(perso,screen);
 
           afficherminimap (m,screen);
       deplacerennemy3(&e3);
            affichertime (&timmee,screen); 
         
     animerEnnemi3(&e3);
     afficherEnnemi(e3,screen);
     
     
      deplacerennemy4(&e4);
      
         
     animerEnnemi4(&e4);
     afficherEnnemi(e4,screen);
     
    
         if(collisionBB(perso,e3))
         {
          perso.pos1.y=170;
	  perso.pos1.x=120; 
	  perso.minix.x=0;
	  perso.fight++; 
	  
	  
         }
         if(collisionBB(perso,e4))
         {
          perso.pos1.y=170;
	  perso.pos1.x=120; 
	  perso.minix.x=0;
	  perso.fight++; 
	  
	  
         }
     
     
     
     if ((dragondies3 ==1)&&(trouve == 0))
     {
      e3.posennemi.x=3500;
    
     SDL_Flip(screen);
     }
     
     if ((dragondies4 ==1)&&(trouve == 0))
     {
      e4.posennemi.x=3500;
    
     SDL_Flip(screen);
     }
     
     
     
      affichertime (&timmee,screen); 
     SDL_Flip(screen);
         }
        else  if (level11=1)
         {
         cutsmusic=2;
         
         if(collisionBB(perso,e))
         {
          perso.pos1.y=170;
	  perso.pos1.x=120; 
	  perso.minix.x=0;
	  perso.fight++; 
	  
	  
         }
         
         if(perso.minix.x <= 80)
         {
          perso.minix.x = 80;
	  
	  
         }
          if(perso.minix.x >= 800)
         {
          perso.minix.x = 800;
	  
	  
         }
          
         
         afficherBack(b,screen);
         displayscore(&perso,screen);
                    displayvies(perso,screen);
                     
                    afficherPerso(perso,screen);
 
         
         
          MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
      
      affichertime (&timmee,screen); 
        
     deplacerennemy(&e);
      
         
     animerEnnemi(&e);
     afficherEnnemi(e,screen);
     SDL_Flip(screen);
     if (dragondies==1)
     {
      deplacerennemy2(&e2);
         
     animerEnnemi2(&e2);
     afficherEnnemi2(e2,screen);
     SDL_Flip(screen);
     if(collisionBB(perso,e2))
         {
          perso.pos1.y=170;
	  perso.pos1.x=120; 
	  perso.minix.x=0;
	  perso.fight++; 
	 
         }
         
     }
     if ( dragondies2 == 1)
    {
            displayTextlevel1(level1,screen);
            SDL_Flip(screen);
    }
    
    
    
     
     /*if ((dragondies ==0)&&(trouve == 0))
     {
      
     SDL_Flip(screen);
     }*/
     if ((dragondies ==1)&&(trouve == 0))
     {
      e.posennemi.x=3500;
    
     SDL_Flip(screen);
     }
     
     if ((dragondies2 ==1)&&(trouve == 0))
     {
      e2.posennemi.x=3500;
    
     SDL_Flip(screen);
     }
     }
      SDL_Delay(70); 
    
    
      SDL_Flip(screen);
     }
     
     
     
   
     
     
           while(SDL_PollEvent(&event))
            {
             switch(event.type)
              {
                 
                 
              
                   case SDL_QUIT:
                   program_launched = SDL_FALSE;
                   break;
              
              
                        
                   
                   case SDL_MOUSEMOTION: 
                    printf("%d/%d \n",event.motion.x, event.motion.y);
               if (trouve==1) {
              
        if (((124<event.motion.x)&&(event.motion.x<215))&&  ((150<event.motion.y)&&(event.motion.y<196)))
               {
                   afficher(Playh,screen);
                     SDL_Flip(screen);   
                 Mix_PlayChannel(-1,son,0);
                      
               }  
               else 
                 {
                 afficher(Play,screen);
                     SDL_Flip(screen); 
                      
                 } 
                  
               }
               
           if (trouve==1){     
                if (((82<event.motion.x)&&(event.motion.x<270))&&  ((215<event.motion.y)&&(event.motion.y<258)))
               {
                   afficher(Optionsh,screen);
                     SDL_Flip(screen);  
                     Mix_PlayChannel(-1,son,0); 
                       
               }  
               else 
               {
               afficher(Options,screen);
                     SDL_Flip(screen); 
               }
               
               } 
               
                if (trouve==1) {
              if (((125<event.motion.x)&&(event.motion.x<222))&&  ((274<event.motion.y)&&(event.motion.y<320)))
               {
                   afficher(Quith,screen);
                     SDL_Flip(screen); 
                     Mix_PlayChannel(-1,son,0); 
                       
               }     
               else 
                 {
                 afficher(Quit,screen);
                     SDL_Flip(screen);    
                 }
                 
               }
               
               break;
                      
                     
                        
                        case SDL_MOUSEBUTTONUP:
        if(trouve==1) {
         if (((124<event.button.x)&&(event.button.x<215))&&  ((150<event.button.y)&&(event.button.y<196)))
               {
               Mix_PlayMusic(music1,-1); 
                  afficherBack(b,screen);
	afficherBack(drag,screen);
                   afficherPerso(perso,screen);
                    afficherPerso(perso2,screen);
                   displayscore(&perso,screen);
                     displayvies(perso,screen); 
                     SDL_Flip(screen);   
                     dragonn=1;
                    trouve=0;
               }  
               }
               if (trouve==1) {
              if (((82<event.button.x)&&(event.button.x<270))&&  ((215<event.button.y)&&(event.button.y<258)))
               {
                   afficher(SettingsBackg,screen);
                    if (casson==3)
                    {
                   afficher(Volume3, screen);
                   }
                   else if (casson==2)
                   {
                   afficher(Volume2, screen);
                   }
                   else if (casson==1)
                   {
                   afficher(Volume1,screen);
                   }
                   /*casson=3; */
                   afficher(Options1, screen);
                   afficher(mini, screen);
                   afficher(maxi, screen);
                   
                  /* afficher(Narrow,screen);  */
                    afficher(Full, screen);
                      afficher(BackButton, screen);
                      afficher(baka,screen);
                   SDL_Flip(screen); 
                    
                     trouve=2; 
                     } }
         if ((trouve==2) && (casson==3))
         {             
   if (((255<event.button.x)&&(event.button.x<276))&&  ((185<event.button.y)&&(event.button.y<210)))
   {
       afficher(Volume2,screen);
       SDL_Flip(screen);
       casson=2; 
         Mix_VolumeMusic(MIX_MAX_VOLUME/6);    
       
     
       break;  
       }
       }
       
       if ((trouve==2) && (casson==2))
         {             
   if (((255<event.button.x)&&(event.button.x<276))&&  ((185<event.button.y)&&(event.button.y<210)))
   {
       afficher(Volume1,screen);
       SDL_Flip(screen);
       Mix_VolumeMusic(MIX_MAX_VOLUME/20);
       casson=1; 
         
       break; 
       }
       }
       
       /////////////
       
        if ((trouve==2) && (casson==1))
         {             
   if (((390<event.button.x)&&(event.button.x<417))&&  ((187<event.button.y)&&(event.button.y<208)))
   {
       afficher(Volume2,screen);
       SDL_Flip(screen);
       Mix_VolumeMusic(MIX_MAX_VOLUME/6);  
       casson=2;  
       
       break;  
       }
       }
       
       if ((trouve==2) && (casson==2))
         {             
   if (((390<event.button.x)&&(event.button.x<417))&&  ((187<event.button.y)&&(event.button.y<208)))
   {
       afficher(Volume3,screen);
       SDL_Flip(screen);
       Mix_VolumeMusic(MIX_MAX_VOLUME);
       casson=3;
       
       break;      
       }
       }
       
       //////
       
       if (trouve==2) 
         {             
   if (((267<event.button.x)&&(event.button.x<320))&&  ((264<event.button.y)&&(event.button.y<293)))
   {
      SDL_WM_ToggleFullScreen(screen);   
       }
       }
       
       //////
       
        if (trouve==2) 
         {             
   if (((346<event.button.x)&&(event.button.x<400))&&  ((264<event.button.y)&&(event.button.y<293)))
   {
      SDL_WM_ToggleFullScreen(screen);     
       }
       }
       
       
       /////////
       
       /*  trouve ==1 ( menu )
           trouve ==2 (settings menu)
           trouve ==0 (play)
           */ 
       
       
      
                    
                  
               
               
                if (trouve==1) {
              if (((125<event.button.x)&&(event.button.x<222))&&  ((274<event.button.y)&&(event.button.y<320)))
               {
                   program_launched = SDL_FALSE; 
                   trouve=0;   
               }       
               }
               
               if (trouve==2) {
              if (((0<event.button.x)&&(event.button.x<120))&&  ((340<event.button.y)&&(event.button.y<400)))
               {
                   trouve=1;
           
           afficher(Backg,screen); 
         afficher(Play,screen);
         afficher(Options,screen);
         afficher(Quit,screen);        
         afficher(BackButton,screen); 
         afficher(sinisterv,screen); 
          displayText(t,screen);       
           SDL_Flip(screen);
              
               }       
               }
               
               
                        break; 
                        
                        
                   case SDL_KEYDOWN:
                     switch(event.key.keysym.sym)
                     {
                     
                     
                       case SDLK_p :
                          if (trouve==1){
                          afficher(Playh,screen);
                          
                     
                     SDL_Flip(screen);
                   Mix_PlayChannel(-1,son,0);
                   
                   } 
                         continue;
                         
                        case SDLK_q :
                          if (trouve==1){
                          afficher(Quith,screen);
                     SDL_Flip(screen);
                         Mix_PlayChannel(-1,son,0);
                         }
                         break;
        
                       case SDLK_i:
                        level22=1;
                        level11=0;
                        afficherBack(b2,screen);
	afficherBack(drag,screen);
                        displayscore(&perso,screen);
                    displayvies(perso,screen); 
                    afficherPerso(perso,screen);
                                              SDL_Flip(screen);
                       break;
                       
                        case SDLK_k:
                        level33=1;
                        level22=0;
                        level11=0;
                        afficherBack(b3,screen);
	afficherBack(drag,screen);
                        displayscore(&perso,screen);
                    displayvies(perso,screen); 
                    afficherPerso(perso,screen);
                                              SDL_Flip(screen);
                       break;
                       
                       
                       
                       
                         case SDLK_UP :
                      if ((trouve==0)&&(level11==1))
                         
                           {
                       fin=0;
    while (!fin)
    {    
      
                         afficherBack(b,screen);
	afficherBack(drag,screen);   
                          
                          saut(&perso,posx,posy); 
                          
                          displayscore(&perso,screen);
                    displayvies(perso,screen); 
                    afficherPerso(perso,screen);
                     MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
      
      affichertime (&timmee,screen); 
                    afficherPerso2(perso2,screen); 
                        /* afficherEnnemi(e,screen); */
                          SDL_Flip(screen);
                         if (perso.pos2.x == 49)
                         {
                         fin=1;
                         }
                         
                         
                         }
                         }
                         
                         
                         else if ((trouve==0)&&(level22==1))
                         
                           {
                       fin=0;
    while (!fin)
    {    
      
                         afficherBack(b2,screen);
	afficherBack(drag,screen);   
                          
                          saut(&perso,posx,posy); 
                          
                          displayscore(&perso,screen);
                    displayvies(perso,screen); 
                    afficherPerso(perso,screen);
                     MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
      
      affichertime (&timmee,screen); 
                    afficherPerso2(perso2,screen); 
                        /* afficherEnnemi(e,screen); */
                          SDL_Flip(screen);
                         if (perso.pos2.x == 49)
                         {
                         fin=1;
                         }
                         
                         
                         }
                         }
                         
                         
                        
                         break;
                         
                        
                        
                         case SDLK_w :
                      if ((trouve==0)&&(level11==1))
                         
                           {
                       fin2=0;
    while (!fin2)
    {    
      
                         afficherBack(b,screen);
	afficherBack(drag,screen);   
                          
                          saut(&perso2,posx2,posy2); 
                          
                          displayscore(&perso,screen);
                    displayvies(perso,screen); 
                    afficherPerso2(perso2,screen); 
                    afficherPerso(perso,screen);
                     MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
      
      affichertime (&timmee,screen); 
                        /* afficherEnnemi(e,screen); */
                          SDL_Flip(screen);
                         if (perso2.pos2.x == 49)
                         {
                         fin2=1;
                         }
                         
                         
                         }
                         }
                        
                       else if ((trouve==0)&&(level22==1))
                         
                           {
                       fin2=0;
    while (!fin2)
    {    
      
                         afficherBack(b2,screen);
	afficherBack(drag,screen);   
                          
                          saut(&perso2,posx2,posy2); 
                          
                          displayscore(&perso,screen);
                    displayvies(perso,screen); 
                    afficherPerso2(perso2,screen); 
                    afficherPerso(perso,screen);
                     MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
      
      affichertime (&timmee,screen); 
                        /* afficherEnnemi(e,screen); */
                          SDL_Flip(screen);
                         if (perso2.pos2.x == 49)
                         {
                         fin2=1;
                         }
                         
                         
                         }
                         }
                         
                         break;
                         
                          
                          case SDLK_s :
                          if(trouve==1){
                          afficher(Optionsh,screen);
                     SDL_Flip(screen);
                     Mix_PlayChannel(-1,son,0); }
                         break;
                         default:
                         continue;
                         
                         
                         
                           case SDLK_RIGHT:
                         if (trouve==0)
                         
                           {
                         perso.dragondies=0;
                           fin =1;
                           perso.speed=0;
                       /*     afficher(NewPlayBackg,screen); */
                      
                             displayscore(&perso,screen);
                    displayvies(perso,screen);
                           perso.direction=0;
                           bdirection=5;
                           perso.minix.x+=5;
                          deplacer(&perso);
                       posx= perso.pos1.x;       
                         posy= perso.pos1.y;  
                       if (perso.pos1.x == 520 || perso.pos1.x == 120 )
                       {
                       perso2.direction=0;
                         scrolling (&b.camera,bdirection,b.imagebg->w);
                         scrolling (&b2.camera,bdirection,b2.imagebg->w);
                scrolling (&b3.camera,bdirection,b3.imagebg->w);
                         animerPerso2(&perso2);
                         }
                        /*  afficherBack(b,screen); */
	/*afficherBack(drag,screen);*/
	 displayscore(&perso,screen);
                    displayvies(perso,screen);
                         
                         perso.etat=1;
	 
	
	   
	
                          
    
                           animerPerso(&perso);
                      /*     afficherPerso(perso,screen);*/
                           
                   /* afficherPerso(perso,screen); */
                   MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                         SDL_Flip(screen); 
                         SDL_Delay(40);   
                        
                          
                         }
                         
                         
                         break;
                         
                         case SDLK_LEFT:
                         if (trouve==0)  
                         {
                         fin =1;
                         perso.dragondies=0;
                         perso.speed=0;
                           displayscore(&perso,screen);
                     displayvies(perso,screen); 
                         perso.direction = 1;
                         bdirection=-5;
                         perso.minix.x-=10;
                          deplacer(&perso);
                          posx= perso.pos1.x;       
                         posy= perso.pos1.y; 
                           
                          perso.etat=1;
                        
                       if (perso.pos1.x == 520 || perso.pos1.x == 120 )
                       {
                       perso2.direction = 1;
                         scrolling (&b.camera,bdirection,b.imagebg->w);
         scrolling (&b2.camera,bdirection,b2.imagebg->w);                scrolling (&b3.camera,bdirection,b3.imagebg->w);
                       
                         animerPerso2(&perso2);
                         }
	 
	/*afficherBack(b,screen);
	afficherBack(drag,screen); */
	 displayscore(&perso,screen);
                    displayvies(perso,screen);
	
                          
                           animerPerso(&perso);
                  /*  afficherPerso(perso,screen); */
                   MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                         SDL_Flip(screen); 
                        
                         
	SDL_Delay(40);
                         }
                         break;
                   
                  
                    case SDLK_d:
                         if (trouve==0)
                           
                           {
                           fin2 =1;
                           perso2.speed=0;
                       /*     afficher(NewPlayBackg,screen); */
                      
                             displayscore(&perso,screen);
                    displayvies(perso,screen);
                           perso2.direction=0;
                           bdirection=5;
                            perso.minix.x+=5;
                          deplacer(&perso2);
                       posx2= perso2.pos1.x;       
                         posy2= perso2.pos1.y;  
                       if (perso2.pos1.x == 520 || perso2.pos1.x == 120 )
                       {
                       perso.direction=0;
                         scrolling (&b.camera,bdirection,b.imagebg->w);
                                         scrolling (&b3.camera,bdirection,b3.imagebg->w);
                          scrolling (&b2.camera,bdirection,b2.imagebg->w);
                          animerPerso(&perso);
                         }
                        /*  afficherBack(b,screen); */
	/*afficherBack(drag,screen);*/
	 displayscore(&perso,screen);
                    displayvies(perso,screen);
                         
                         perso2.etat=0;
	 
	
	
	
                          
    
                           animerPerso2(&perso2);
                      /*     afficherPerso(perso,screen);*/
                           
                   /* afficherPerso(perso,screen); */
                   MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                         SDL_Flip(screen); 
                         SDL_Delay(40);   
                        
                          
                         }
                         
                         
                         break;
                         
                         case SDLK_a:
                         if (trouve==0)  
                         {
                         fin2 =1;
                         perso2.speed=0;
                           displayscore(&perso,screen);
                     displayvies(perso,screen); 
                         perso2.direction = 1;
                         bdirection=-5;
                         perso.minix.x-=5;
                          deplacer(&perso2);
                          posx2= perso2.pos1.x;       
                         posy2= perso2.pos1.y; 
                           
                          perso2.etat=1;
                         
                       if (perso2.pos1.x == 520 || perso2.pos1.x == 120 )
                       {
                        perso.direction = 1;
                                         scrolling (&b3.camera,bdirection,b3.imagebg->w);
                         scrolling (&b.camera,bdirection,b.imagebg->w);
                       scrolling (&b2.camera,bdirection,b2.imagebg->w);  
                          animerPerso(&perso);
                         }
	 
	/*afficherBack(b,screen);
	afficherBack(drag,screen); */
	 displayscore(&perso,screen);
                    displayvies(perso,screen);
	
                          
                           animerPerso2(&perso2);
                  /*  afficherPerso(perso,screen); */
                   MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                         SDL_Flip(screen); 
                        
                         
	SDL_Delay(40);
                         }
                         break;
                   
                   
                   //
                   
                   case SDLK_x:
                   if (trouve == 0)
                   {
 
                       perso.dragondies=1;
                       if (level11==1)
                       {
    if(collisionBB(perso,e))
         {
         dragondies=1;
                   }
                   
                   if(collisionBB(perso,e2) && dragondies==1)
         {
         dragondies2=1;
                   }
                   }
                   if (level22==1)
                   {
                   if(collisionBB(perso,e3))
                   {
                     dragondies3=1;
                   }
                   if(collisionBB(perso,e4))
                   {
                     dragondies4=1;
                   }
                   }
                   if (level33==1)
                   {
                   if(collisionBB(perso,e5))
                   {
                     dragondies5=1;
                   }
                   }
                   }
                   
                   break;
                     case SDLK_r:
                         if (trouve==0)  
                         {
                       /* afficherBack(b,screen);
	afficherBack(drag,screen);
                          displayscore(perso,screen);
                     displayvies(perso,screen);  */
                         perso.dragondies=0;
                         perso.direction = 0;
                         perso.speed=1;
                          bdirection=10;
                          deplacer(&perso); 
                         perso.etat=1;
                         perso.minix.x+=10;
                         posx= perso.pos1.x;
                         posy= perso.pos1.y;   
                             if (perso.pos1.x == 520 || perso.pos1.x == 120 )
                       {
                       perso2.direction = 0;
                         scrolling (&b.camera,bdirection,b.imagebg->w);
                     scrolling (&b2.camera,bdirection,b2.imagebg->w);
                                         scrolling (&b3.camera,bdirection,b3.imagebg->w);
                         animerPerso2(&perso2);
                         }
                           animerPerso(&perso);
                /*    afficherPerso(perso,screen); */
                    MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                         SDL_Flip(screen); 
                         }
                         break;
                              
                    case SDLK_l:
                         if (trouve==0)  
                         {
                        /*afficherBack(b,screen);
	afficherBack(drag,screen); 
                           displayscore(perso,screen);
                     displayvies(perso,screen);  */
                         perso.direction = 1;
                         perso.speed=1;
                         perso.minix.x-=10;
                         perso.dragondies=0;
                           bdirection=-10;
                          if (perso.pos1.x == 520 || perso.pos1.x == 120 )
                       {
                        perso2.direction = 1;
                         scrolling (&b.camera,bdirection,b.imagebg->w);
                  scrolling (&b2.camera,bdirection,b2.imagebg->w);
                                         scrolling (&b3.camera,bdirection,b3.imagebg->w);
                         animerPerso2(&perso2);
                         }
                         
                         deplacer(&perso);
                      
                      posx= perso.pos1.x;
                         posy= perso.pos1.y;
                               
                          perso.etat=1;
                           animerPerso(&perso);
                  /*  afficherPerso(perso,screen); */
                  MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                         SDL_Flip(screen); 
                         }
                         break;
                              
                         ////
                         
                         case SDLK_c:
                         if (trouve==0)  
                         {
                       /* afficherBack(b,screen);
	afficherBack(drag,screen);
                          displayscore(perso,screen);
                     displayvies(perso,screen);  */
                         perso2.direction = 0;
                         perso2.speed=1;
                          bdirection=10;
                          perso.minix.x+=10;
                          deplacer(&perso2); 
                         perso2.etat=1;
                         posx2= perso2.pos1.x;
                          
                         posy2= perso2.pos1.y;   
                             if (perso2.pos1.x == 520 || perso2.pos1.x == 120 )
                       {
                       perso.direction = 0;
                         scrolling (&b.camera,bdirection,b.imagebg->w);
               scrolling (&b2.camera,bdirection,b2.imagebg->w);
                                         scrolling (&b3.camera,bdirection,b3.imagebg->w);
                         animerPerso(&perso);
                         }
                           animerPerso2(&perso2);
                /*    afficherPerso(perso,screen); */
                MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                    
                         SDL_Flip(screen); 
                         }
                         break;
                              
                    case SDLK_z:
                         if (trouve==0)  
                         {
                        /*afficherBack(b,screen);
	afficherBack(drag,screen); 
                           displayscore(perso,screen);
                     displayvies(perso,screen);  */
                         perso2.direction = 1;
                         perso2.speed=1;
                           bdirection=-10;
                           perso.minix.x-=10;
                          if (perso2.pos1.x == 520 || perso2.pos1.x == 120 )
                       {
                        perso.direction = 1;
                         scrolling (&b.camera,bdirection,b.imagebg->w);
                        scrolling (&b2.camera,bdirection,b2.imagebg->w);
                                         scrolling (&b3.camera,bdirection,b3.imagebg->w);
                         animerPerso(&perso);
                         }
                         
                         deplacer(&perso2);
                      
                      posx2= perso2.pos1.x;
                         posy2= perso2.pos1.y;
                               
                          perso2.etat=1;
                           animerPerso2(&perso2);
                  /*  afficherPerso(perso,screen); */
                  MAJMinimap(perso.minix,&m,screen,camera,20); //20%
      afficherminimap (m,screen);
                         SDL_Flip(screen); 
                         }
                         break;
                              
                              
                              ///
                         
                         }
                         case SDL_KEYUP:
                    switch(event.key.keysym.sym)
                    {
                    
                      case SDLK_p :
                  
                   if (trouve==1)  {
                   
                  
 
                  afficherBack(b,screen);
	afficherBack(drag,screen);
                        displayscore(&perso,screen);
                    displayvies(perso,screen); 
                    afficherPerso(perso,screen);
         level11=1;
         level22=0;          
      /*   afficherEnnemi(e,screen); */
         
         
          
         
                                         
                          SDL_Flip(screen);  
                            
                          }
                      trouve=0; 
                        
                         break;
                         
                         case SDLK_x:
                   if (trouve == 0)
                   {
                    
                       perso.dragondies=2;
                       
                     
                   }
                   break;
                        case SDLK_q :   
                               program_launched = SDL_FALSE;
                         break;
            
               case SDLK_d:
                perso2.etat=1;
               
               break;
                         case SDLK_s :   
                                if (trouve==1) {
                           
                           afficher(SettingsBackg,screen);
                   if (casson==3)
                    {
                   afficher(Volume3, screen);
                   }
                   else if (casson==2)
                   {
                   afficher(Volume2, screen);
                   }
                   else if (casson==1)
                   {
                   afficher(Volume1,screen);
                   }
                   afficher(Options1, screen);
                   afficher(mini, screen);
                   afficher(maxi, screen);
                    afficher(BackButton, screen);  
                    afficher(Full, screen);
                 /*   afficher(Narrow, screen); */
                    afficher(baka, screen);  
                   SDL_Flip(screen);  
                        trouve=2;   ////trouve=2 means 2 : settings
                        break;
                        }
                        break;
          case SDLK_MINUS:
       if ((trouve==2) && (casson==3))
         {             
  
       afficher(Volume2,screen);
       SDL_Flip(screen);
       /*Mix_PlayMusic(music70,-1);*/
       Mix_VolumeMusic(MIX_MAX_VOLUME/6);
       casson=2; 
             
       break;  
       
       }
       
       
       if ((trouve==2) && (casson==2))
         {             
   
       afficher(Volume1,screen);
       SDL_Flip(screen);
       /*Mix_PlayMusic(music25,-1);*/
       Mix_VolumeMusic(MIX_MAX_VOLUME/20);
       casson=1;     
       break; 
       
       }
       break;  
       
       ///////
       
       case SDLK_g:
       if ((trouve==2) && (casson==1))
         {             
  
       afficher(Volume2,screen);
       SDL_Flip(screen);
       /*Mix_PlayMusic(music70,-1);*/
        Mix_VolumeMusic(MIX_MAX_VOLUME/6);
       casson=2;    
       break;  
       
       }
       
       if ((trouve==2) && (casson==2))
         {             
  
       afficher(Volume3,screen);
       SDL_Flip(screen);
       /*Mix_PlayMusic(music,-1);*/
       Mix_VolumeMusic(MIX_MAX_VOLUME);
       casson=3;
       break;      
       
       }
       break;
       
       case SDLK_n:
       if (trouve==2)
       {
         SDL_WM_ToggleFullScreen(screen);
   
       }
       
       
       break;
       
       case SDLK_f:
       if (trouve==2)
       {
         SDL_WM_ToggleFullScreen(screen);
         
   
       }
       
       
       break;
       
       
       
       case SDLK_b:
        if ((trouve==2) || (trouve==0))
        {
           trouve=1;
           
           afficher(Backg,screen); 
         afficher(Play,screen);
         afficher(Options,screen);
         afficher(Quit,screen);        
         afficher(BackButton,screen); 
         afficher(sinisterv,screen);  
         displayText(t,screen);       
           SDL_Flip(screen);
           
           }
       
       //////
                          
       
       
                         break;
                   
                
                        
                       default :
                        continue;
                     }
                     
                     
                     }
                   }
              
             }
           
            
             liberer(Play);
             liberer(Options);
             liberer(Quit); 
             liberer(Playh);
             liberer(Optionsh);
             liberer(Quith); 
             liberer(BackButton);  
             liberer(NewPlayBackg);
             liberer(SettingsBackg);
             liberer(Backg);
             liberer(Volume1);
             liberer(Volume2);
             liberer(Volume3);
             libererPerso(perso);
             
            
     
             return 0;
             }
             
             
