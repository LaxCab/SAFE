/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: laxcab
 *
 * Created on 17. November 2019, 19:44
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "CPU.h"
#include "Prozess.h"

using namespace std;

string commandCutter(string input);
string argumentCutter(string input);
void userInput();

/*
 * 
 */
int main() {

    CPU myCPU;
    
    userInput();
    
    return 0;
}

void userInput()
{
      //MENÜ
    cout << "___________________________\nGeben Sie Ihren Befehl ein:\n";
    char input[30];
    cin.getline(input,30);
        
    string command = commandCutter(input);
    string argument = argumentCutter(input);
    
    //cout << "KOMMANDO: " << command << " ARGUMENT: " << argument << endl;
    
    
    //STEP-Command
    if((command == "S") || (command == "Step") || (command == "s"))
    {
        cout << "Step";
    }else
    // UNBLOCK-Command
    if((command == "U") || (command == "Unblock") || (command == "u"))
    {
        cout << "Unblock";
    }
    else
    // PRINT-Command
    if((command == "P") || (command == "Print") || (command == "p"))
    {
        cout << "Print";
    }else
    // QUIT-Command
    if((command == "Q") || (command == "Quit") || (command == "q"))
    {
        cout << "Quit";
    }
    // Kommando unbekannt
    else cout << "Kommando unbekannt!" << endl;
}

string commandCutter(string input)
{
    string cmd = input;
    for (int i = 0; i < input.length(); i++) 
    {
        if(input.at(i) == ' ')
        {
            cmd = input.substr(0,i);
            break;
        }
    }    
    
    return cmd;
}

string argumentCutter(string input)
{
    string arg = "";
    for (int i = 0; i < input.length(); i++) 
    {
        if(input.at(i) == ' ')
        {
            if(input.length() > i)
            arg = input.substr(i+1);
            break;
        }
    }
    
    return arg;
}