#include<iostream>
#include<fstream>
#include<cstdlib>
#include <chrono>
#include <thread>
#include<string>
#include<cstdlib>
#include<sstream>
#include<cstring>

void localT(string s,ostream& os){
	if(s== "Che ore sono"){
		time_t now = time(0);
		tm *ltm = localtime(&now);
		os <<"Sono le :" <<  ltm->tm_hour << ":"<< ltm->tm_min << " e " << ltm->tm_sec << "secondi";
	}
}
void localD(string s,ostream& os){	
	if(s == "Che giorno è oggi"){
		time_t now = time(0);
		tm *ltm = localtime(&now);
		string giorno,mese;
		if(ltm->tm_mday==1) giorno = "primo";
		else giorno = ltm->tm_mday;
		if(1 + ltm->tm_mon == 1) mese = "gennaio";
		if(1 + ltm->tm_mon == 2) mese = "febbraio";
		if(1 + ltm->tm_mon == 3) mese = "marzo";
		if(1 + ltm->tm_mon == 4) mese = "aprile";
		if(1 + ltm->tm_mon == 5) mese = "maggio";
		if(1 + ltm->tm_mon == 6) mese = "giugno";
		if(1 + ltm->tm_mon == 7) mese = "luglio";
		if(1 + ltm->tm_mon == 8) mese = "agosto";
		if(1 + ltm->tm_mon == 9) mese = "settembre";
		if(1 + ltm->tm_mon == 10) mese = "ottobre";
		if(1 + ltm->tm_mon == 11) mese = "novembre";
		if(1 + ltm->tm_mon == 12) mese = "dicembre";
		if(ltm->tm_mday==1) os << "Oggi è il " << giorno << " " << mese << " " << 1900 + ltm->tm_year;
		else os << "Oggi è il " << ltm->tm_mday << " " << mese << " " << 1900 + ltm->tm_year;
	}
}

void setTimer(string s,ostream& os){
	system("./timer.sh");
}

