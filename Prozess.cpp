/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Prozess.cpp
 * Author: laxcab
 * 
 * Created on 17. November 2019, 20:59
 */

#include "Prozess.h"

Prozess::Prozess() {
}

void Prozess::start()
{
    //SAVE START-TIME
    this->STARTTIME = getCurrentTime();
    cout << "Prozess gestartet" << endl;    
}

time_t Prozess::getCurrentTime()
{
    time_t curtime = time(0);
    //string now = ctime(&curtime);
    return curtime;
}

int Prozess::getTimePast()
{
    int timepast = getCurrentTime() - this->STARTTIME;
    cout << timepast << " Sekunden am laufen." << endl;
    
    return timepast;
}