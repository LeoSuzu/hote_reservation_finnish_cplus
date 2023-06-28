#pragma once
#include <iostream>
#include <vector>
#include <numeric>
#include "reservation.h"
#include "moneyMachine.h"
using namespace std;

// Functioesittely
void moneyMachine();
bool varaustilanne(int nro);
void varaaHuone(int nro);
int res_num();
int rand_room();
void menu();
void tulosta_tiedot(int nro);
void numerohaku(int varausNum);
void nimihaku(string varausnimi);
int int_taker_room();
int int_taker_menu();
int int_taker_money();


// Menuvalikko alkaa tästä
void menu()
{
    int huone, varausnumero, peruttava, nro;
    char valikko;

    do // Mennään whileloop menuvalikkooon kunnes asiakas haluaa poistua.
    {

    // Tässä on ensin perus hotellitervehdys.
    cout << endl;
    cout << endl;
    cout << "Tämä on vastaanottonne. Miten voimme auttaa? \n";
    cout << endl;

    cout << "-------------------------------------------------- \n";
    cout << "Tee varaus                                       1 \n";
    cout << "-------------------------------------------------- \n";
    cout << "Peruuta varaus                                   2 \n";
    cout << "-------------------------------------------------- \n";
    cout << "Maksa huone                                      3 \n";
    cout << "-------------------------------------------------- \n";
    cout << "Lopeta                                           4 \n";
    cout << "-------------------------------------------------- \n";
    cout << endl;
    // Käyttäjän valinta valikosta.
    valikko = int_taker_menu();

        
        //valikko = ((int)(valikko)-48);

        switch(valikko)
        {
        case 1: // Asikas ohjaantuu varaus osioon, jossa valitaan huone tai arvotaa
            huonevalinta();
            break;

        // Asiakas ohjataan peruutusosioon, jossa kysytään peruutusmenetelmä nimi tai varausnumero
        case 2:
            cancel_room();
            break;

        // Laskutetaan huone.
        case 3:
            moneyMachine();
            break;
        // Päätetään ohjelma.

        case 4:
        cout << "Kiitos asioinnista ja mukavaa päivää.";
        break;

        default:
        cout << "Valitse valikon numeroista_";

        }
    } while (valikko != 4 && valikko !=3 );
    // Lopetetaan ohjelma
    cout << "\n\nxxxxxxxxxxxxxxxxx Ohjelma on päättynyt xxxxxxxxxxxxxxxxx\n\n";
    
}

int int_taker_menu()
{
    int i;
    cout << "Valitse numero 1-4: " << endl;
    do
    {
        cin >> i;
        if (!cin)
        {
            cout << "Et syöttänyt numeroita. Syötä numero uudelleen." << endl;
            cin.clear();
            cin.ignore(80, '\n');
        }
        else if (i < 1 || i > 4)
        {
            cout << "Numerovalintaa ei löydy valikosta." << endl;
        }
        else
        {
            break;
        }
    } while (true);

    return i;
}
