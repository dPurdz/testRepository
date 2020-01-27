//
//  main.cpp
//  testRepository
//
//  Created by Dominic Purdie on 27/01/2020.
//  Copyright © 2020 Dominic Purdie. All rights reserved.
//

#include <iostream>
using namespace std;

// ------- Fish Class -----------

class Fish{
    
public:
    
    Fish (){
        m_Squishiness = 0.5;
        m_deadBool = false;
    };
    
    void setSquishiness(float x){
        m_Squishiness = x;
    };
    
    float getSquishiness(){
        return m_Squishiness;
    };
    
    bool isDead(){
        if (m_deadBool == true)
            return true;
        else
            return false;
    };
    
    void kill (){
        m_deadBool = true;
    };

    
protected:
    
    float m_Squishiness;
    

    
private:
    
    bool m_deadBool;
    
};

// ------- Salmon Class -----------

class Salmon: public Fish{
    
public:
    
    Salmon (bool smoked){
        m_smokedBool = false;
    };
    
    bool isSmoked (){
        if (m_smokedBool == true)
            return true;
        else
            return false;
    };
    
    void smokeSalmon(){
        m_smokedBool = true;
    };
    

    
private:

    bool m_smokedBool;
    
};

// --------- main function ------------

int main(int argc, const char * argv[]) {
 
    Salmon jeff(false);
    
    cout << "jeff's smoked value is: " << jeff.isSmoked() << endl;
    
    if (jeff.isSmoked() == true)
        cout << "jeff is smoked" << endl;
    else
        cout << "jeff is unsmoked" << endl;
    
    
    jeff.smokeSalmon();
    
    cout << "jeff's smoked value is: " << jeff.isSmoked() << endl;
    
    if (jeff.isSmoked() == true)
        cout << "jeff is smoked" << endl;
    else
        cout << "jeff is unsmoked" << endl;
    
    
    
    cout << "jeff's squishiness value is: " << jeff.getSquishiness() << endl;
    
    if (jeff.isDead() == true)
        cout << "jeff is dead" << endl;
    else
        cout << "jeff is alive" << endl;

    
    jeff.kill();
    
    if (jeff.isDead() == true)
        cout << "jeff is dead" << endl;
    else
        cout << "jeff is alive" << endl;

    
    return 0;
}
