#include <iostream>
using namespace std;

class Auto {
private:
    int numOfWheels, numOfDoors;
    bool lightsOn;       
    double fuelConsumption;

public:
    
    Auto() {
        numOfWheels = 4;
        numOfDoors = 4;
        lightsOn = false;
        fuelConsumption = 8.0; 
    }

    
    Auto(int wheels, int doors, double fuelCons) {
        numOfWheels = wheels;
        numOfDoors = doors;
        lightsOn = false;
        fuelConsumption = fuelCons;
    }

    
    int GetNumOfWheels() {
        return numOfWheels;
    }

    int GetNumOfDoors() {
        return numOfDoors;
    }

    double GetFuelConsumption() {
        return fuelConsumption;
    }

    
    void SetNumOfWheels(int wheels) {
        numOfWheels = wheels;
    }

    void SetNumOfDoors(int doors) {
        numOfDoors = doors;
    }

    void SetFuelConsumption(double fuelCons) {
        fuelConsumption = fuelCons;
    }

    
    void TurnOnEngine() {
        cout << "The engine started." << endl;
    }

    
    void TurnOffEngine() {
        cout << "The engine stopped." << endl;
    }

    
    void TurnLightsOn() {
        if (!lightsOn) {
            lightsOn = true;
            cout << "The lights were turned on." << endl;
        }
        else {
            cout << "The lights are already on." << endl;
        }
    }

    
    void TurnLightsOff() {
        if (lightsOn) {
            lightsOn = false;
            cout << "The lights were turned off." << endl;
        }
        else {
            cout << "The lights are already off." << endl;
        }
    }

    
    void Drive(double distance) {
        double actualFuelConsumption = fuelConsumption;
        if (lightsOn) {
            actualFuelConsumption *= 1.1; 
        }
        double fuelUsed = actualFuelConsumption * distance;
        cout << "The car drove " << distance << " km and used " << fuelUsed << " liters of fuel." << endl;
    }
};

int main() {
    Auto myCar;

    
    cout << "Number of wheels: " << myCar.GetNumOfWheels() << endl;
    cout << "Number of doors: " << myCar.GetNumOfDoors() << endl;
    cout << "Fuel consumption: " << myCar.GetFuelConsumption() << " L/km" << endl;
    cout << endl;

    
    myCar.TurnOnEngine();
    myCar.TurnLightsOn();
    myCar.Drive(10); 
    myCar.TurnLightsOff();
    myCar.Drive(10); 
    myCar.TurnOffEngine();

    return 0;
}
