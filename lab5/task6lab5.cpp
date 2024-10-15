
#include <iostream>
using namespace std;

class GraphicsRenderingEngine {
public:
    GraphicsRenderingEngine() {
        cout << "Graphics Rendering Engine initialized: Ready to handle visuals." << endl;
    }

    void render() {
        cout << "Rendering graphics with high-quality textures and lighting effects..." << endl;
    }
};

class InputHandler {
public:
    InputHandler() {
        cout << "Input Handler initialized: Ready to capture user inputs." << endl;
    }

    void processInput() {
        cout << "Processing user input: Keyboard and mouse detected..." << endl;
    }
};

class PhysicsEngine {
public:
    PhysicsEngine() {
        cout << "Physics Engine initialized: Ready to simulate real-world physics." << endl;
    }

    void updatePhysics() {
        cout << "Updating physics: Gravity, collision detection, and object interactions calculated..." << endl;
    }
};

class GameEngine {
private:
    GraphicsRenderingEngine graphics;
    InputHandler input;
    PhysicsEngine physics;

public:
    GameEngine() {
        cout << "Game Engine created: Preparing to combine all components." << endl;
    }

    void run() {
        cout << "Game Engine starting..." << endl;
        cout << "----------------------------------------" << endl;
        input.processInput();
        physics.updatePhysics();
        graphics.render();
        cout << "----------------------------------------" << endl;
        cout << "Game Engine successfully ran all components!" << endl;
    }
};

int main() {

    cout << "NAME: MAHNOOR HUSSAIN" << endl;
    cout << "ROLL NO.: 23K-0535" << endl << endl;

    cout<<"GAME ENGINE"<<endl<<endl;
    cout << "Initializing Game Engine..." << endl;
    
    GameEngine gameEngine;

    cout << "----------------------------------------" << endl;
    cout << "Starting the game engine simulation..." << endl;

    gameEngine.run(); 

    cout << "----------------------------------------" << endl;
    cout << "Game Engine simulation completed." << endl;

}