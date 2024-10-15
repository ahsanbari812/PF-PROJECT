#include <iostream>
#include <string>
using namespace std;


class Engine {
private:
    string engineName;
public:
    Engine(string name) {
        engineName = name;
        cout << "Engine " << engineName << " created." << endl;
    }
    void startEngine() {
        cout << "Engine " << engineName << " is running..." << endl;
    }
};

class Wheels {
private:
    int wheelCount;
public:
    Wheels(int count) {
        wheelCount = count;
        cout << "Wheels created with count: " << wheelCount << endl;
    }
    void move() {
        cout << "Wheels rotating..." << endl;
    }
};


class Headlights {
private:
    int headlightCount;
public:
    Headlights(int count) {
        headlightCount = count;
        cout << "Headlights created with count: " << headlightCount << endl;
    }
    void turnOn() {
        cout << "Headlights on..." << endl;
    }
    void turnOff() {
        cout << "Headlights off..." << endl;
    }
};


class Steering {
private:
    string steeringType;
public:
    Steering(string type) {
        steeringType = type;
        cout << "Steering type: " << steeringType << endl;
    }
    
    void steer(const string& direction) { 
        cout << "Steering the car to the " << direction << "..." << endl;
    }
};


class Brakes {
private:
    string brakeType;
public:
    Brakes(string type) {
        brakeType = type;
        cout << "Brakes type: " << brakeType << endl;
    }
    void apply() {
        cout << "Brakes applied..." << endl;
    }
};


class Car {
private:
    Engine* carEngine; 
    Steering* carSteering; 
    Wheels carWheels; 
    Headlights carHeadlights;
    Brakes carBrakes; 

public:
    Car(int wheelCount, int headlightCount, string brakeType)
        : carWheels(wheelCount), carHeadlights(headlightCount), carBrakes(brakeType) {
        carEngine = nullptr; 
        carSteering = nullptr;
    }

    void setEngine(Engine* engine) {
        this->carEngine = engine;
    }

    void setSteering(Steering* steering) {
        this->carSteering = steering;
    }

    void start() {
        if (carEngine) {
            carEngine->startEngine();
        } else {
            cout << "No engine set!" << endl;
        }
    }

    void drive() {
        carWheels.move();
        carHeadlights.turnOn();
        if (carSteering) {
            carSteering->steer("left");  
        } else {
            cout << "No steering set!" << endl;
        }
        carBrakes.apply();
    }
};

int main() {
    
    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;
    
    Engine engine1("Inline Engine");
    Engine engine2("Electric Engine");
    Steering steering1("Rotatory Steering");
    Steering steering2("Sport Steering");

    Car car1(4, 2, "antilock Brakes");
    car1.setEngine(&engine1);
    car1.setSteering(&steering1);
    
    Car car2(4, 2, "Drum Brakes");
    car2.setEngine(&engine2);
    car2.setSteering(&steering2);
    
    Car car3(4, 2, "Parking Brakes");
    car3.setEngine(&engine1);
    car3.setSteering(&steering1);


    cout << "Starting Car 1:" << endl;
    car1.start();
    car1.drive();

    cout << "Starting Car 2:" << endl;
    car2.start();
    car2.drive();

    cout << "Starting Car 3:" << endl;
    car3.start();
    car3.drive();

}


