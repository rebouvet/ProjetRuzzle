#define N 4

enum t_bonus {aucun, LettreDouble, LettreTriple, MotDouble, MotTriple};

typedef struct {int lettre; enum t_bonus bonus;} t_case;
typedef struct {char mot[20]; int points;} t_score;
typedef struct element{int x; int y; int chemin[4][4]; struct element* suivant;} t_element;
