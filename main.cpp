/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: R162625H
 *
 * Created on September 12, 2017, 12:14 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
class Tool {
protected:
    int strength;
    char type;
    bool fight;

public:

    Tool(int thisStr, char thisTp) {
        strength = thisStr;
        type = thisTp;
    }

    void SetStrength(int thisStr) {
        strength = thisStr;
    }

};

class Rock : public Tool {
public:

    Rock(int thisStr, char r) : Tool(thisStr, r) {
        strength = thisStr;
        type = r;
    }

    void Display() {
        cout << "Type: " << type << endl;
        cout << "Strength: " << strength << endl;
    }

    using Tool::fight;
};

class Paper : public Tool {
public:

    Paper(int thisStr, char p) : Tool(thisStr, p) {
        strength = thisStr;
        type = p;
    }

    void Display() {
        cout << "Type: " << type << endl;
        cout << "Strength: " << strength << endl;
    }

    using Tool::fight;
};

class Scissors : public Tool {
public:

    Scissors(int thisStr, char s) : Tool(thisStr, s) {
        strength = thisStr;
        type = s;
    }
    void Display(){
        cout<<"Type: "<<type<<endl;
        cout<<"Strength: "<<strength<<endl;
    }

    using Tool::fight;
};

int main(int argc, char** argv) {

    return 0;
}

