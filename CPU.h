/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CPU.h
 * Author: laxcab
 *
 * Created on 17. November 2019, 19:52
 */

#ifndef CPU_H
#define CPU_H

#include <time.h>
#include <iostream>
#include <fstream>

using namespace std;

class CPU {
public:
    CPU();
    
    //REGISTER
    int R1;
    int R2;

    //CLOCK
    time_t STARTTIME;

    //METHODS
    void start();
    void reset();
    void runProcess();
    
    time_t getCurrentTime();
private:

};

#endif /* CPU_H */

