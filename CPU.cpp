/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CPU.cpp
 * Author: laxcab
 * 
 * Created on 17. November 2019, 19:52
 */

#include "CPU.h"

CPU::CPU() {
    this->reset();
    this->start();
}

void CPU::reset()
{
    //RESET CLOCK
    this->STARTTIME = getCurrentTime();
    R1 = 0;
    R2 = 0;
}

void CPU::start()
{
    cout << "CPU gestartet" << endl;
    this->runProcess();
}

time_t CPU::getCurrentTime()
{
    time_t curtime = time(0);
    string now = ctime(&curtime);
    return curtime;
}

void CPU::runProcess()
{
    ifstream input;
    input.open("/home/laxcab/Downloads/BS_Praktikum2/init.txt");
    
    if (!input) {
    cerr << "Unable to open file!";
}
    string line;
    while (getline(input, line)) {
        cout << line << endl;
}
}
