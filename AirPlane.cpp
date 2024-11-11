#include <iostream>
using namespace std;

int main() {
    double distanceAB;
    double distanceBC;
    double Weight;

    cout << "Enter distance from A to B: ";
    cin >> distanceAB;
    cout << "Enter distance from B to C: ";
    cin >> distanceBC;
    cout << "Enter cargo weight (kg): ";
    cin >> Weight;

    if (Weight > 2000) {
        cout << "The airplane cannot carry a weight over 2000 kg.\n";
        return 0;
    }

    double fuelKm;
    if (Weight <= 500) {
        fuelKm = 1;
    }
    else if (Weight <= 1000) {
        fuelKm = 4;
    }
    else if (Weight <= 1500) {
        fuelKm = 7;
    }
    else {
        fuelKm = 9;
    }

    double fuelNeededAB = distanceAB * fuelKm;
    double fuelNeededBC = distanceBC * fuelKm;

    if (fuelNeededAB > 300) {
        cout << "It is impossible to fly from A to B with the given cargo.\n";
    }
    if (fuelNeededBC > 300) {
        cout << "It is impossible to fly from B to C with the given cargo.\n";
    }

    double fuelAtB = 300.0 - fuelNeededAB;
    if (fuelAtB < 0) {
        fuelAtB = 0;
    }
    cout << "Minimum fuel needed at point B to reach C: " << fuelAtB << " liters.\n";
}
