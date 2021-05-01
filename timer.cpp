#include <iostream>
#include <ctime>
//#include <Ncurses.h>
#include <cstdlib>
using namespace std;
int ora,minn,secc;
bool sveglia;
void  taketime();
bool ring(int hourr,int minut,int seconds);
int main(){
    int h,m,s;
    cout<<"Inserisci l'orario per il  quale la sveglia dovra' suonare\n";
    cout<<"Per prima cosa inserisci le ore\n";
    cin>>h;
    cout<<"Inserisci i minuti\n";
    cin>>m;
    cout<<"Inserisci i secondi\n";
    cin>>s;
    cout<<"Perfetto,ora tieni aperto il programma,eventuali errori di battitura dell'ora non sono controllati\n";
    while(!sveglia){
        taketime();
        sveglia=ring(h,m,s);
    }
    cout<<"E' l'ora zoticone,fai quello che devi fare!\n";
    system("play /home/salvatore/Scrivania/developement/ideas/clemente/musica/ALARMCLOCK.WAV");
    

    cin.get();
    return 0;
}
void  taketime(){
    time_t tempo;
    struct tm *orario;
    tempo=time(NULL);
    orario=localtime(&tempo);
    ora=orario->tm_hour;
    minn=orario->tm_min;
    secc=orario->tm_sec;

}
bool ring(int hourr,int minut,int seconds){
    if(ora==hourr && minn==minut && secc==seconds) return true;
    else return false;
}
