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
  Image Play, Options, Quit, Backg , NewPlayBackg, Playh, Optionsh, Quith, SettingsBackg, Volume1, Options1, mini, maxi, Volume2, Volume3, BackButton
  , Full, Narrow, baka , sinisterv;
    
    Text t;
    atexit(SDL_Quit); 
    
    int done=0, casson=3 , trouve=0;
    trouve = 1;
     SDL_Event event;
    initText(&t);  
    
     
    
   ////////////////  son 100%
   if(Mix_OpenAudio( 48000,MIX_DEFAULT_FORMAT,2,6555158)==-1)
   {
   printf("%s \n",Mix_GetError());
   }
   Mix_Music *music;
   music=Mix_LoadMUS("///home/ubuntu123/Desktop/projet/sallyface.mp3");
   if (casson==3)
   {
   Mix_PlayMusic(music,-1); 
   }
   /////////////////  son 70%
   if(Mix_OpenAudio( 48000,MIX_DEFAULT_FORMAT,2,6555158)==-1)
   {
   printf("%s \n",Mix_GetError());
   }
   Mix_Music *music70;
   music70=Mix_LoadMUS("///home/ubuntu123/Downloads/sf70.mp3");
    
   //////////////////   son 25%
   if(Mix_OpenAudio( 48000,MIX_DEFAULT_FORMAT,2,6555158)==-1)
   {
   printf("%s \n",Mix_GetError());
   }
   Mix_Music *music25;
   music25=Mix_LoadMUS("///home/ubuntu123/Downloads/sf25.mp3");
    
   ///////////////////  
  /* 
   if (casson==3)
   {
       Mix_PlayMusic(music,-1);
       }
    else if (casson==2)
    {
      Mix_PlayMusic(music70,-1); 
      }
      
      else if (casson==1)
      {
         Mix_PlayMusic(music25,-1);
         }  
    */
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
     /*  while (!done) */
       {
         
         afficher(Backg,screen); 
         afficher(Play,screen);
         afficher(Options,screen);
         afficher(Quit,screen); 
         afficher(sinisterv,screen); 
         displayText(t,screen);       
         
         SDL_Flip(screen);
         
           }
           /* SDL_PollEvent(&event);
           switch (event.type)
           {
             case SDL_QUIT :
             
                    done =1;
                  
             break; 
             } */  
              /* int trouve=0;
                  trouve = 1; */
            SDL_bool program_launched = SDL_TRUE;
            
         while (program_launched)
          {
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
                   afficher(NewPlayBackg,screen);
                     SDL_Flip(screen);    
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
                         
                          case SDLK_s :
                          if(trouve==1){
                          afficher(Optionsh,screen);
                     SDL_Flip(screen);
                     Mix_PlayChannel(-1,son,0); }
                         break;
                         default:
                         continue;
                         
                         }
                         case SDL_KEYUP:
                    switch(event.key.keysym.sym)
                    {
                      case SDLK_p :
                  
                   if (trouve==1)  {
                       afficher(NewPlayBackg,screen); 
                          SDL_Flip(screen);   
                        trouve=0;
                        } 
                         break;
                         
                        case SDLK_q :   
                               program_launched = SDL_FALSE;
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
            Mix_FreeMusic(music); 
            Mix_FreeMusic(music70); 
            Mix_FreeMusic(music25); 
     
             return 0;
             }
             
             
