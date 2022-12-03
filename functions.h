//
// Created by sauce on 12/1/2022.
//

#ifndef THE_END_FUNCTIONS_H
#define THE_END_FUNCTIONS_H
#include <iostream>

using namespace std;



void pickClass(){
    cout << "Welcome to The World of Dungeons & Dragons!" << endl;
    cout << "Pick your Class"<<endl;
    cout << "Warrior : 1 : 'Smack 'em in da head'" << endl;
    cout << "\t Strength = 8";
    cout << "\t Dexterity = 1";
    cout << "\t Intelligence = 1" << endl;
    cout << "Ranger : 2 : 'Make every shot count'" << endl;
    cout << "\t Strength = 2";
    cout << "\t Dexterity = 6";
    cout << "\t Intelligence = 4" << endl;
    cout << "Wizard : 3: 'Think first, act second'" << endl;
    cout << "\t Strength = 1";
    cout << "\t Dexterity = 2";
    cout << "\t Intelligence = 7" << endl;
    cout << "Thief : 4 : 'Sneaky Sneaky, Stabby Stabby'" << endl;
    cout << "\t Strength = 1";
    cout << "\t Dexterity = 8";
    cout << "\t Intelligence = 1 \n";


}
void pickRace(){
    cout << "Now choose your Race" << endl;
    cout << "Human : 1 : \n \t +1 All Stats" << endl;
    cout << "Orc : 2 : \n \t +2 Strength" << endl;
    cout << "Elf : 3 : \n \t +1 Dexterity, +1 Intelligence" << endl;
    cout << "Dwarf : 4 : \n \t +1 Strength, +1 Intelligence" << endl;

}

void tutorial() {
    int c;
    cout<<"Would you like to see the tutorial? (1, Yes)(2, No)"<<endl;
    cin>>c;
    if(c==1){
        cout<<"All inputs will be either N,E,S,W for directions"<<endl;
        cout<<"All inputs will be 1,2,3,4 for options in battle"<<endl;
        cout<<" 1. Attack (Option 1) \n 2. Run (Suffer an Attack before leaving) \n 3. Healing"<<endl;
        cout<<" Your HP bar will be shown as an amount of (+) and so will your mana with (-) missing HP or Mana will be shown as (/) \n a monster wil also show this information and its level of challenge"<<endl;


    }
    else{
        cout<<"You have skipped the tutorial"<<endl;
    }
}

void credits(){
    cout << "Hello player, hope you liked the game, just wanted to give credit to those who helped" << endl;
    cout << "my friends thanks for the rooms and characters of the game" << endl;
    cout << "Javier, for listening to my coding problems and helping" << endl;
    cout << "Alex Cole for giving me the idea of doing D&D" << endl;
    cout << "lastly the player thanks for playing" << endl;

}

int actions(){
    int action; cout << " " << endl;
    int key = 0;

    while (key!=1) {
        cin >> action;
        if (action == 1) { action = 1; key = 1; }
        if (action == 2) { action = 2; key = 1; }
        if (action == 3) { action = 3; key = 1; }
    }
    return action;
}


#endif //THE_END_FUNCTIONS_H
