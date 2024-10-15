#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Liste des braquages (exemple)
    vector<pair<double, double>> braquages = {
        {1.0, 2.0},
        {3.0, 4.0},
        {5.0, 6.0}
        // Ajoutez d'autres braquages ici
    };

    double somme_x = 0.0;
    double somme_y = 0.0;
    int nombre_braquages = 0;

    // Calculer la somme des coordonnées
    for (const auto& braquage : braquages) {
        somme_x += braquage.first;
        somme_y += braquage.second;
        nombre_braquages++;
    }

    // Calculer les coordonnées du lieu d'habitation
    if (nombre_braquages > 0) {
        double habitation_x = somme_x / nombre_braquages;
        double habitation_y = somme_y / nombre_braquages;
        cout << "Lieu d'habitation du brigand : (" << habitation_x << ", " << habitation_y << ")" << endl;
    } else {
        cout << "Erreur : Aucun braquage enregistré." << endl;
    }

    return 0;
}
