/**
 *@file image10.h
 *@brief  program testing  
 *@author Mohamed khelifi
 *@version 1
 *@date Apr 26, 2022
 *
 * testing full program
 *
*/

#ifndef Image_H
#define Image_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#define SCREEN_W 700
#define SCREEN_H 400
#include <SDL/SDL_ttf.h>
/**
 * @struct Image
 *@brief struct for image
*/
struct Image {  
      SDL_Rect pos1;  /*!< positions abs */
      SDL_Rect pos2;   /*!< position reel */
      SDL_Surface *img;  /*!< surface */
    };
typedef struct Image Image;

/**
 * @struct Text
 *@brief struct for text
*/

typedef struct
{
SDL_Surface *texte;
SDL_Rect position;//position du clock
TTF_Font *police ;
char entree[100];//mm:ss
int secondesEcoulees; 
SDL_Color couleurBlanche;
time_t t1,t2;//t1 temps initiale ,,, t2 temps actuel
int min,sec;
}timetime;


typedef struct {
	SDL_Rect position;  /*!< position du texte */
	TTF_Font *font;  /*!< polisse  */
	SDL_Surface *surfacetexte;  /*!< surface */
	SDL_Color textColor;  /*!< text color */
	char texte[50];  /*!< texte type chaine de caracteres */
	
}Text;

/**
 * @struct Personnage
 *@brief struct for personnages
*/

struct Personnage {  
      SDL_Rect pos1;  /*!< position abs */
      SDL_Rect pos2;  /*!< position reel */
      SDL_Surface *persoimg;  /*!< surface image */
      timetime score;  /*!< score type time */
      Text vies;  /*!< vies type text */
      int direction;  /*!< direction du personnage 0 si droite et 1 si gauche  */
      int num;  /*!< indice pour faciliter lanimation dont elle nous permet de connaitre a quel frame nous somme */
      int etat;  /*!< etat mobile ou immobile pour afficher notre personnage  */
      SDL_Surface *mat[10][10];  /*!< matrice 2 lignes, 6 colones nous permet de stocker les sprites des personnages */
      int fin;
      int speed;  /*!< etat en acceleration ou non */
      int fight;
      SDL_Rect minix;
      int dragondies;
    };
typedef struct Personnage Personnage;

/**
 * @struct Ennemy
 *@brief struct for ennemies
*/

typedef struct { 
//SDL_Surface *sprite;
SDL_Surface *mat[5][5];  /*!< matrice de type surface nous permet de stocker les sprites des ennemies */
int direction;  /*!< direction de lennemi */
SDL_Rect posennemi;  
SDL_Rect possprite;
int num;
}Ennemi; 

/**
 * @struct Background
 *@brief struct for background
*/

typedef struct {
SDL_Rect camera;//x,y,h,w
SDL_Surface *imagebg;
Mix_Music *musique;
}Background;

typedef struct
{
SDL_Surface *map ;
SDL_Rect posmap;
SDL_Surface *mini_perso;
SDL_Rect perso_pos_map;
}minimap;

typedef struct 
{
 SDL_Surface * img;
 SDL_Rect 	p;
int pos_selected;
	SDL_Rect pos_timer;//pos timer al ecran
	SDL_Surface *timer[12];
	int num_animation;
	int time_over;
	char image1[100];
	char image2[100];
	char image3[100];
}enigme;

void init_enigme(enigme * e,char nomfichier[]);
void  generate_afficher (SDL_Surface * screen  , char image [],enigme *e,int *alea) ;
 int solution_e (char image []);
int resolution (int * running,int *run);
void afficher_resultat (SDL_Surface * screen,int s,int r,enigme *en) ;
void animer(enigme *e) ; 
void afficher_chrono(enigme *en,SDL_Surface *screen,int i) ;


void initEnnemi3(Ennemi *e);
void deplacerennemy3( Ennemi *e);
void animerEnnemi3( Ennemi * e);
void initBackk3(Background * b);
void initEnnemi4(Ennemi *e);
void deplacerennemy4( Ennemi *e);
void animerEnnemi4( Ennemi * e);
int collisionperso( Personnage perso, Personnage e);

void inittime(timetime *t);
void affichertime(timetime *t, SDL_Surface *screen);
void liberer_time(timetime *t);
void deplacerennemy2( Ennemi *e);
void initEnnemi2(Ennemi *e);
void initBackk2(Background * b);
void initminimap (minimap *m);
void MAJMinimap(SDL_Rect posJoueur,minimap *m, SDL_Surface *screen, SDL_Rect camera, int redimensionnement);
void afficherminimap (minimap m, SDL_Surface *screen);
void libererminimap (minimap *m);
void animerEnnemi2( Ennemi * e);
void initlilith(Image *A);
void afficherEnnemi2(Ennemi e,SDL_Surface *screen);
  void initTextlevel1(Text *A);
        void displayTextlevel1(Text t, SDL_Surface *screen);

void initBackk(Background * b);
void afficherBack(Background b, SDL_Surface * screen);
void scrolling (SDL_Rect * b, int bdirection,int wigth);
void QuitBack(Background * b);
void afficherstable(Personnage perso, SDL_Surface *screen);
void animerPerso2(Personnage *perso2);
  void initEnnemi5(Ennemi *e);
  void deplacerennemy5( Ennemi *e);
  void animerEnnemi5( Ennemi * e);
    void initcuts1(Image *A);
        void initcuts2(Image *A);
            void initcuts3(Image *A);
                void initcuts4(Image *A);
                    void initcuts5(Image *A);
                        void initcuts6(Image *A);
                            void initcuts7(Image *A);
                                void initcuts8(Image *A);
                                    void initcuts9(Image *A);
                                        void initcuts10(Image *A);
                                            void initcuts11(Image *A);
                 void initcuts12(Image *A);
                       void initcuts13(Image *A);
                void initcuts14(Image *A);
                    void initcuts15(Image *A);
             void initcuts16(Image *A);
           void initcuts17(Image *A);
            void initcuts18(Image *A);
      void initcutsxx(Image *A);
    
    
    
    
    
void initEnnemi(Ennemi *e);
void afficherEnnemi(Ennemi e,SDL_Surface *screen);
void animerEnnemi(Ennemi *e);
void deplacerennemy( Ennemi *e);
int collisionBB(Personnage perso,Ennemi e);
void deplacerIA(Ennemi *e,SDL_Rect posperso);
void init_personnage(Personnage* perso);
void afficher_personnage(Personnage perso, SDL_Surface *screen);
/////
void deplacer(Personnage *perso);
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
    
    void afficherPerso2(Personnage perso2,SDL_Surface *screen);
    
           
     void initsinisterv(Image *A);
     void initPerso(Personnage *perso);
      void initPerso2(Personnage *perso2);
            void afficherPerso(Personnage perso,SDL_Surface *screen);
                 void libererPerso(Personnage perso);
                       void freescore(Personnage score);
              void displayscore(Personnage *perso, SDL_Surface *screen);
          void initscore(Personnage *score);
          void initvies(Personnage *perso);
          void freevies(Personnage perso);
          void displayvies(Personnage perso,SDL_Surface *screen);
          void initPersoleft(Personnage *perso);
 void animerPerso(Personnage *perso);
   void saut(Personnage *perso,int posx,int posy);
#endif


 
