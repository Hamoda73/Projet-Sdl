#ifndef Image_H
#define Image_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#define SCREEN_W 700
#define SCREEN_H 400
#include <SDL/SDL_ttf.h>

struct Image {  
      SDL_Rect pos1;
      SDL_Rect pos2;
      SDL_Surface *img;
    };
typedef struct Image Image;
typedef struct {
	SDL_Rect position;
	TTF_Font *font;
	SDL_Surface *surfacetexte;
	SDL_Color textColor;
	char texte[50];
}Text;
void initPlayButton(Image *A);
void initOptionsButton(Image *A);
void initQuitButton(Image *A);
void initPlayButtonh(Image *A);
void initOptionsButtonh(Image *A);
void initQuitButtonh(Image *A);
void initBackground(Image *Backg);
void liberer(Image A);
void afficher(Image p,SDL_Surface *screen);
 void initBackButton(Image *A);
  void initNarrow(Image *A);
   void initbaka(Image *A);
     void initFullscreen(Image *A);
void initText(Text *A);
void freeText(Text A);
void displayText(Text A,SDL_Surface *screen);
void initNewPlay(Image *NewPlayBackg);
void initSettingsBackg(Image *SettingsBackg);
void initVolume1(Image *A);
   void initOptionsButton1(Image *A);
    void initmini(Image *A);
    void initmaxi(Image *A);
    void initVolume2(Image *A);
    void initVolume3(Image *A);
     void initsinisterv(Image *A);
#endif


 
