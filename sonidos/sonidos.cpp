#include<iostream>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

int main()
{
    sndPlaySound("musiquita.wav", SND_ASYNC | SND_FILENAME );
    system("pause");
    
    sndPlaySound("Ralphentra.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    sndPlaySound("entrafelix.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    sndPlaySound("musicafondo.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    sndPlaySound("caida.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    sndPlaySound("reparaventana.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    sndPlaySound("destruccion.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    sndPlaySound("salto.wav", SND_ASYNC | SND_FILENAME);
    system("pause");

    sndPlaySound("ganaste.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    sndPlaySound("golpe.wav", SND_ASYNC | SND_FILENAME);
    system("pause");

    sndPlaySound("ventanarota.wav", SND_ASYNC | SND_FILENAME );
    system("pause");

    /*
    run: sonidos.exe
        ./sonidos.exe

    sonidos.exe: sonidos.cpp
        g++ -std=c++11 sonidos.cpp -lwinmm -o sonidos.exe
    */

    return 0;

}