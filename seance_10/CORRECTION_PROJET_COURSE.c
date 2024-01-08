#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Structures
typedef struct {
    int nombre_tours;
    int tour_courant;
    char nom_pilote_premiere_place[50];
    char couleur_voiture_premiere_place[20];
} Course;

typedef struct {
    char nom_pilote[50];
    char couleur_voiture[20];
    int temps_total_tour;
} VoitureCourse;

// Fonctions d'affichage
void affiche_intro() {
    printf("Bienvenue à notre Course de fonceurs !\n");
    printf("J'espère que tout le monde a pris son goûter, car nous sommes sur le point de commencer !\n");
}

void affiche_compte_a_rebours() {
    printf("Les coureurs sont prêts ! Dans...\n");
    for (int i = 5; i > 0; i--) {
        printf("%d\n", i);
        // Ajouter un délai si nécessaire
    }
    printf("Go !\n");
}

void affiche_premiere_place_tour(Course course) {
    printf("Après le tour %d\n", course.tour_courant);
    printf("La première place est occupée par %s dans la voiture de course %s !\n", 
           course.nom_pilote_premiere_place, course.couleur_voiture_premiere_place);
}

void affiche_felicitations(Course course) {
    printf("Félicitons tous %s, dans la voiture de course %s, pour son excellente performance.\n", 
           course.nom_pilote_premiere_place, course.couleur_voiture_premiere_place);
    printf("C'était vraiment une belle course et bonne nuit à tous !\n");
}

// Fonctions logiques
int calcul_temps_tour_complet() {
    int vitesse = rand() % 3 + 1;
    int acceleration = rand() % 3 + 1;
    int nerfs = rand() % 3 + 1;
    return vitesse + acceleration + nerfs;
}

void voiture_course_maj(VoitureCourse *voitureCourse) {
    voitureCourse->temps_total_tour += calcul_temps_tour_complet();
}

void debutCourse(Course *course, VoitureCourse *voitureCourse1, VoitureCourse *voitureCourse2) {
    for (course->tour_courant = 1; course->tour_courant <= course->nombre_tours; course->tour_courant++) {
        voiture_course_maj(voitureCourse1);
        voiture_course_maj(voitureCourse2);

        if (voitureCourse1->temps_total_tour < voitureCourse2->temps_total_tour) {
            strcpy(course->nom_pilote_premiere_place, voitureCourse1->nom_pilote);
            strcpy(course->couleur_voiture_premiere_place, voitureCourse1->couleur_voiture);
        } else {
            strcpy(course->nom_pilote_premiere_place, voitureCourse2->nom_pilote);
            strcpy(course->couleur_voiture_premiere_place, voitureCourse2->couleur_voiture);
        }

        affiche_premiere_place_tour(*course);
    }
}

int main() {
    srand(time(0));

    Course course;
    course.nombre_tours = 5;

    VoitureCourse voitureCourse1 = { "George", "jaune", 0};
    VoitureCourse voitureCourse2 = {
        "Cosmo", "orange", 0};

    affiche_intro();
    affiche_compte_a_rebours();
    debutCourse(&course, &voitureCourse1, &voitureCourse2);
    affiche_felicitations(course);

    return 0;
}