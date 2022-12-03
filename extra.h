//
// Created by sauce on 12/1/2022.
//

#ifndef THE_END_EXTRA_H

#define THE_END_EXTRA_H

#include "functions.h"
#include <vector>
#include <ctime>

using namespace std;



class Everything{
public:
    int hp;
    int mana;
    int lvl = 0;
    int xp = 0;

    int damage;
    int monHP;
    int monDamage;
    int heal;
    int position;
    int clas;
    int race;
    int coinFlip;
    int randRoom;
    int randEvent;


    bool run = true;

    int roomKey;

    int str , intel , dex;

    string action;
    string key;
    string choice;
    string room;
    string encounter;

    vector<Everything> notRepeat;
    Everything(string q, string w){
        room = q;
        encounter = w;
    }
    void push(Everything test){notRepeat.push_back(test);}
    void print(){
        cout << room << endl;
        cout << encounter << " health is: " << endl;
    }

    void sleep(){ // friends helped with rooms and encounters :)
        Everything one("Entering the dark room light start to turn on and you see a someone stuck in a cage, looking closer it's the princess surrounded by a gang of Goblin's", "A gang of goblin's");
        push(one);
        Everything two( "A dark room with water dripping for the ceiling \nAs the door slowly close behind you and torches start to light, floor guardian Medusa comes from the shadows", "Medusa");
        push(two);
        Everything three("Dark room with a small light at the end of the room \nAs you reach the light you see billions of cockroaches covering the walls, floor and ceiling, hills of them \nStanding in the middle, floor guardian Kyouhukou", "Kyouhukou");
        push(three);
        Everything four("Foggy room, with two glistening eyes staring at you \nStanding tall in proud amongst the mist floor guardian Cocytus, an 8'2 ant-mantis warrior", "Cocytus");
        push(four);
        Everything five("A ROSS dress for less changing room, flickering lights, a constant buzzing, musty clothes everywhere, in the center a cracked mirror \nA 10 feet tall ross manager, with a half-off hair line and bargain deal biceps, and hopping cart as his steed appears", "Christian the Ross manager");
        push(five);
        Everything six("A dark room, cobwebs are seen all over the room, bats hanging above the entrance and ceiling, in the darkness a Vampire presents themselves ", " Vampire Dex");
        push(six);
        Everything seven("EMPTY","encounter");
        push(seven);
        Everything eight("EMPTY1","encounter");
        push(eight);
        Everything nine("EMPTY2","encounter");
        push(nine);
        Everything ten("EMPTY3","encounter");
        push(ten);

    }



    void setStats(){
        if(clas==1)
            str =8, dex =1, intel =1;
        if(clas==2)
            str =2, dex =6, intel =4;
        if(clas==3)
            str =1, dex =2, intel =7;
        if(clas==4)
            str =1, dex =8, intel =1;

        if(race==1){
            str = str + 1;
            dex = dex + 1;
            intel = intel + 1;
        }
        if(race==2){
            str = str + 2;
            dex = dex + 0;
            intel = intel + 0;
        }
        if(race==3){
            str = str + 0;
            dex = dex + 1;
            intel = intel + 1;
        }
        if(race==4){
            str = str + 1;
            dex = dex + 0;
            intel = intel + 1;
        }
        mana = intel * 2;
        hp = (str + dex) + 5;
    }

    void displayStats(){
        cout << "\t Your stats are now..." << endl;
        cout << "\t Level : " << lvl << endl;
        cout << "\t Experience Points : " << xp << endl;
        cout << "\t Heath Points : " << hp << endl;
        cout << "\t Mana Points : " << mana << endl;
        cout << "\t Strength : " << str << endl;
        cout << "\t Dexterity : " << dex << endl;
        cout << "\t Intelligence : " << intel << endl;
        cout << "Your Weapon is ... " << endl;

    }

    void displayWeapons(){
        if(clas==1){
            cout << "Long Sword and Shield,(DAMAGE)" << endl;
        }if(clas==2){
            cout << "Long Bow + 20 Arrows,(DAMAGE)" << endl;
        }if(clas==3){
            cout << "Spell Book,(DAMAGE) " << endl;
            cout << "\t \t SPELL BOOK" << endl;
            cout << "\t Fireball, Cost = 20 Mana" << endl;
            // Mana was taken out of the game because of complications
        }
        if(clas==4){
            cout << "Short Swords,(DAMAGE) Short Swords = 2*Roll + Dexterity, Knives = Roll, Limited Ammunition" << endl;
        }
        tutorial();

        for(int i=0;i<hp;i++){
            cout<<"(+)";
        }
        cout << endl;
        for(int i=0;i<mana;i++){
            cout<<"(-)";
        }
        cout << endl;
        cout << "Good Luck on your quest Adventurer " << endl;
    }




    void theLoop(){
        srand(time(0));

        while(lvl < 2){
            start:
            if(xp >= 10){
                lvl +=1;
                cout << "You have leveled up" << endl;
                cout << "You level is: " << lvl << endl;
                xp = 0;
            }

            while(position!=1){

                cout << "Enter your direction of choice" << endl;
                cin >> choice;
                if(choice=="N"){cout << "you have gone north" << endl;
                    position=1;}
                if(choice=="E"){cout << "you have gone east" << endl;
                    position=1;}
                if(choice=="S"){cout << "you have gone south" << endl;
                    position=1;}
                if(choice=="W"){cout << "you have gone west" << endl;
                    position=1;}
            }

            roomKey = rand() % notRepeat.size();


            position = 0;

            notRepeat.at(roomKey).print();

            notRepeat.erase(notRepeat.begin() + roomKey);

            monHP = rand()%10 + 1;

            // EVERY IMPORTANT ENTER ONLY 1 2 OR 3, IF NOT ITS ENDLESS TILL YOUR CHAR DIES OR ITS JUST ENDLESS LOOP
                        // WORKING ON IT (MAYBE)

            while (monHP > 0) { // add more different characters
//                cout << encounter << " health is: " << endl;
                for (int i = 0; i < monHP; ++i) { cout << "(+)"; }
                cout << '\n' << "your health is: " << endl;
                for (int i = 0; i < hp; ++i) { cout << "(+)"; }
                cout << '\n' << "your mana is: " << endl;
                for (int i = 0; i < mana; ++i) { cout << "(-)"; }
                if (hp <= 0) {
                    abort:
                    cout << '\n' << "You have failed in your quest, the realm has now descended into madness. Maybe in the next life you become a hero" << endl;
                    cout << "Good Bye!" << endl;
                    goto END;
                }

                cout << '\n';


//                if(!run){tryAgain: cout << "okay" <<endl;}

                cout << "Enter your choice of actions" << endl;
                cout << "1. Attack" << endl;
                cout << "2. Run!!!" << endl;
                cout << "3. Try a healing prayer" << endl;



                while (key!="1") {
                    cin >> action;
                    if (action == "1") {key = "1"; }
                    if (action == "2") {key = "1"; }
                    if (action == "3") {key = "1"; }
                    else{cout << "ERROR (Hint: try entering 1, 2, or 3)" << endl;}
                }
                key = "0";

                damage = rand() % 8 + 1;
                monDamage = rand() % 6 + 2;
                heal = (rand() % 15) + 5;

                if (action == "1") {
                    monHP = monHP - damage;
                    cout << "You attacked the  for " << damage << " damage" << endl;
                }
                if (action == "2") { monDamage = rand()%3+1;
                    hp = hp - monDamage;
                    cout << "You have ran from the battle" << '\n' << "As you ran you've been hit for " << monDamage
                         << " damage" << endl;
                    xp = xp + 5;
                    if(hp <= 0){goto abort;}
                    goto start;
                }
                // fix heal for rand cout
                if (action == "3") { hp = hp + heal; mana = mana - 2; cout << "You've been healed for: " << heal << endl;}

//                else{cout << "ERROR ERROR, try another input (Hint: 1 2 or 3)" << endl; run = false; goto tryAgain;}

                if (monHP > 0) {
                    hp = hp - monDamage;
                    cout << encounter << " attacked you for " << monDamage << " damage" << endl;
                }

                if (monHP <= 0) {
                    xp += (rand() % 15);
                    if (randRoom == 1) {
                        cout << "Your saved the princess, for saving princess Kenya, she gives you a kiss of healing, as you continue your journey" << endl;
                        hp = hp + rand() % 10;
                        cout << '\t' << "Health is now: " << hp << endl;
                    }
                    cout << "You have defeated " << encounter << endl;
                    cout << "you have gained xp" << endl;
                }

            }

            coinFlip = rand()%10;
            if(coinFlip == 1) {
                randEvent = rand()%3 + 1;
                cout << '\n' << '\t' << "Random Event" << endl;
                if(randEvent == 1){cout << "you slipped on a puddle and hurt you big toe" << endl; hp = hp - 1;}
                if(randEvent == 2){cout << "small earthquake happened and a ceiling brick fell on your head, you lost a bit of blood" << endl; hp = hp - 1;}
                if(randEvent == 3){cout << "Your a bit hungry you ate a strange fruit off some vines against the brick wall" << endl; hp = hp + 3;}

            }
        }



        cout << "You have reached the end, you have brought peace and prosperity." << endl;
        cout << "You have in-fact become a great HERO for this land." << endl;
        cout << '\n' << '\t' << "good bye" << endl;

        END:;
        credits();
    }





};





#endif //THE_END_EXTRA_H
