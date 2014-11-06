#include <iostream>
using namespace std;

class Car {
protected:
    int color;
    int currentSpeed;
    int maxSpeed;
public:
    void applyHandBrake(){
        this->currentSpeed = 0;
    }
    void pressHorn(){
        cout << "Teeeeeeeeeeeeen "<<endl; // funny noise for a horn
    }
    void driveAtFullSpeed(int mph){
        // code for moving the car ahead;
    }
};

class PlayerCar : public Car {
    
};

class PoliceCar : public Car {
private:
    bool sirenOn;  // identifies whether the siren is on or not
    bool inAction; // identifies whether the police is in action (following the player) or not
public:
    bool isInAction(){
        return this->inAction;
    }
};


int main(){
    
    
    PlayerCar p;
    PoliceCar p1;
    
    p.pressHorn();
    
    cout<<"isInAction : "<<p1.isInAction()<<" "<<endl;
    return 0;
}