/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prozess.h
 * Author: laxcab
 *
 * Created on 17. November 2019, 20:59
 */

#ifndef PROZESS_H
#define PROZESS_H

#include <time.h>
#include <iostream>

using namespace std;

class Prozess {
public:
    Prozess();
    int ID;
    
    //CLOCK
    time_t STARTTIME;

    //METHODS
    void start();
    time_t getCurrentTime();
    int getTimePast();
private:

};

#endif /* PROZESS_H */

