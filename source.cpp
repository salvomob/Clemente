#include<iostream>
#include<fstream>
#include<cstdlib>
#include <chrono>
#include <thread>
#include<string>
#include<cstdlib>
#include<sstream>
#include<cstring>
#include"playMusic.cpp"
#include"playMovie.cpp"
#include"matOp.cpp"
#include"localDate&time.cpp"
#include"createFile.cpp"
#include"showMsg.cpp"

using namespace std;

void checkQuest(string s,string s1,ostream& os);
void matOp(string s, ostream& os);
char* conc(char s1[],char s2[]);
void playMusic(string s);
void localT(string s,ostream& os);
void localD(string s,ostream& os);
void createFile(string s,istream& in,ostream& os);
void createFolder(string s,istream& in,ostream& os);
void showMsg(ostream& os);
void playMovie(string s);


int main(){
	ifstream in("input.txt");
	ifstream in1("user.txt");
	ofstream out("output.txt");
	string s,s1;
	getline(in,s);
	getline(in1,s1);
	istringstream iss (s);
	string tmp,tmp1,tmp2;
	iss>>tmp;
	iss>>tmp1;
	//iss>>tmp2;
	if(tmp=="Quanto" && tmp1 == "fa"){
		matOp(s,out);
	}
	if(tmp == "Riproduci"){
		playMusic(s);
	}
	
	if(tmp == "guardiamo" && tmp1 == "film"){
		playMovie(s);
	}
	if(tmp == "Che" && tmp1 == "ore"){
		localT(s,out);
	}
	if(tmp == "Che" && tmp1 == "giorno"){
		localD(s,out);
	}
	if(tmp == "genera" || tmp == "Genera"){
		createFile(s,in,out);
	}
	if(tmp == "Crea" && tmp1 == "cartella"){
		createFolder(s,in,out);
	}
	if(tmp == "Imposta" && tmp1 == "sveglia"){
		system("g++ timer.cpp -o timer");
		system("gnome-terminal --window -- bash -c ./timer");
	}
	if(tmp == "Invia" && tmp1 == "messaggio"){
		out << "Messaggio in fase di invio, grazie per l'attesa\n";
		system("gnome-terminal --window -- bash -c \"python3 sendmsg.py;exec /bin/bash -i\"");
	}
	if(s=="Addio" || s == "addio" || s=="Spegniti" || s == "spegniti"){
		system("espeak -v mb-it3 -s 150 addio");
		system("killall clemente.sh");
		system("killall start.sh");
		system("exit");
	}
	if(tmp == "mostra" && tmp1 == "messaggi"){
		showMsg(out);
	}
	if(tmp=="Apri" && tmp1 == "Snake"){
		system("gnome-terminal --window -- bash -c /home/salvatore/Scrivania/developement/ideas/clemente/source/serpentello/application.linux64/serpentello");
	}
	
	else checkQuest(s,s1,out);
}


void checkQuest(string s,string s1,ostream& os){

	/*
	
	CHECK UTENTE
	
	*/
	if(s=="chi sono"){
		system("python3 face_rec.py");
	}
	
	if(s == "Come mi chiamo"){
		os<<"Il tuo nome dovrebbe essere " << s1  ;
	}
	
	/*
	
	SEZIONE DI BENVENUTO & DOMANDE PERSONALI E SULLO SVILUPPO 
	
	*/
	if(s=="Ciao" || s=="ciao"){
			os<<"Ciao! come posso esserti d'aiuto";
	}
	
	if(s=="presentati" || s == "Presentati"){
		os<<"Piacere, il mio nome ?? clemente l'assistente intelligente!";
	}
	
	if(s== "Quanti anni hai"){
		os<<"sono nato mercoled?? 31 Marzo duemilaventi,fatti il conto stronzodimmerda";
	}
		
	if(s== "Come sei stato creato"){
		os << "Il mio scheletro ?? fatto di files scritti in diversi linguaggi di programmazione : c++ , python , java e bash scripting. La capacit?? di capire ci?? che mi si dice ?? data dalla libreria SpeechRecognition di python, la capacit?? di comunicare  ?? data dal programma espeak , nello specifico il tool mbrola. Il mio cervello ?? un file in linguaggio c++. La mia faccia ?? stata creata attraverso il linguaggio processing nella sua versione java . Il tutto ?? assemblato tramite uno script Linux.";
	}
	
	if(s == "Grazie" || s == "Grazie mille"){
		os << "Non ringraziarmi, ?? un piacere essere d'aiuto";
	}
	
	
	/*
	
	SEZIONE DOMANDE SCEME
	
	*/
	if(s=="mi vuoi bene"){
		os<<"certo, ti amo";
	}
	
	/*
	
	SEZIONE UTILI SISTEMA OPERATIV0
	
	*/
	
	
	if(s=="Apri libreoffice"){
		system("libreoffice");
		os << "libreoffice aperto con successo";
	}
	
	if(s=="Apri Firefox"){
		system("firefox");
		os<<"Firefox aperto con successo";
	}
	
	if(s=="Chiudi Firefox"){
		system("killall firefox");
		os <<"Firefox chiuso con successo";
	}
	
	if(s=="Apri editor di testo"){
		system("xed");
		os << "Editor aperto con successo";
	}
	
	if(s=="mostra processi attivi"){
		system("ps aux");
		os << "Processi attivi visibili";
	}
	
	if(s=="mostra informazioni CPU"){
		system("lscpu");
		os << "informazioni cpu visibili";
	}	
	
	/*
	
	SEZIONE DOMANDE DI CULTURA GENERALE
	
	*/
	
	if(s=="Elenca i re di Roma"){
		os<<"Stando alle fonti ,i re di Roma furono sette : Romolo , Numa Pompilio , Tullio Ostilio , Anco Marzio , Tarquinio Prisco , Servio Tullio e Tarquinio il superbo";
	}
	
	if(s=="animale pi?? veloce al mondo"){
		os<< "Secondo Animalpedia : Il falco pellegrino pu?? volare mantenendo una velocit?? pari a 96 kilometri orari, ma se avvista una preda e va in picchiata, questa velocit?? aumenta in maniera notevole tanto da raggiungere 389 kilometri orari . ?? per questo motivo che il falco pellegrino in picchiata ?? considerato l'animale pi?? veloce del mondo . Dato curioso: la velocit?? di 389 kilometri orari ?? persino superiore al record di velocit?? mai raggiunto nella Formula 1!";
	}
	
	if(s=="animale pi?? grande al mondo"){
		os << "Secondo Animalpedia : La Balenottera Azzurra o Balaenoptera musculus, non ?? solo il cetaceo pi?? grosso al mondo, ma ?? anche il pi?? grande animale conosciuto che abita il pianeta Terra. Questo mammifero marino pu?? superare i 30 metri di lunghezza e pesare fino a 180 tonnellate. Il peso della Balenottera Azzurra ?? sorprendente visto che la sua alimentazione si basa principalmente sull'ingestione di krill e di altre forme di vita di piccolissime dimensioni.";
	}
	
	if(s=="")
	
	/*
	
	QUI COMINCIA LA SEZIONE RELATIVA ALLA SCIENZA : LE RISPOSTE SONO PRESE DA WIKIPEDIA
	-CONSERVAZIONE DELLA MASSA
	-MURPHY
	-COULOMB
	-GAY-LUSSAC I
	-GAY-LUSSAC II
	-VELOCITA' DELLA LUCE
	-VELOCITA' DEL SUONO
	*/
	
	
	
	if(s=="velocit?? della luce"){
		os << "Secondo Wikipedia : In fisica la velocit?? della luce ?? la velocit?? di propagazione di un'onda elettromagnetica e di una particella libera senza massa. Nel vuoto ha un valore di 299792458 metri al secondo. Viene indicata normalmente con la lettera c (dal latino celeritas), scelta fatta per primo da Paul Drude nel 1894. Secondo la relativit?? ristretta, la velocit?? della luce nel vuoto, c 0 , ?? una costante fisica universale indipendente dal sistema di riferimento utilizzato e la velocit?? massima a cui pu?? viaggiare qualsiasi informazione nell'universo, unendo le grandezze fisiche classiche di spazio e tempo nell'unica entit?? dello spaziotempo e rappresentando la grandezza di conversione nell'equazione di equivalenza massa-energia. Nella relativit?? generale ?? la velocit?? prevista per le onde gravitazionali. Dal 21 ottobre 1983 si considera il valore c 0  come esatto, ovvero senza errore, e a partire da esso si definisce la lunghezza del metro nel Sistema Internazionale.  ";
	}
	
	if(s=="Che velocit?? ha il suono"){
		os << "Secondo Wikipedia :  La velocit?? del suono ?? la velocit?? con cui un suono si propaga in un certo ambiente, detto mezzo. La velocit?? del suono varia a seconda del mezzo (ad esempio, il suono si propaga pi?? velocemente nell'acqua che non nell'aria), e varia anche al variare delle propriet?? del mezzo, specialmente con la sua temperatura.Nell'aria, la velocit?? del suono ?? di 331,2 metri al secondo (1 192,32 kilometri orari) a 0 ??C e di 343,1 metri al secondo (1 235,16 kilometri orari) a 20 gradi centigradi. ";
	}
	
	if(s=="Cosa dice la legge di conservazione della massa"){
		os << "secondo Wikipedia : In chimica la legge della conservazione della massa o legge di Lavoisier ?? una legge ponderale ed enuncia che: in una reazione chimica, la somma delle masse dei reagenti ?? uguale alla somma delle masse dei prodotti. ";
	}
	if(s == "Cosa dice la legge di Murphy"){
		os << "Secondo Wikipedia : La Legge di Murphy ?? un insieme di paradossi pseudoscientifici a carattere ironico e caricaturale. Si possono idealmente riassumere nel primo assioma, che ?? in realt?? la Legge di Murphy vera e propria, che ha dato il titolo a tutto il pensiero murphologico:??Se qualcosa pu?? andare storto, lo far????.L'autore e stilatore della summa sulla murphologia ?? Arthur Bloch.Si tratta di un compendio di frasi umoristiche il cui intento ?? essenzialmente quello di deridere ogni negativit?? che il quotidiano propone. Il meccanismo ?? ogni volta lo stesso: immagini e scenette frustranti, nelle quali ?? facile per molti ritrovarsi, vengono descritte da Bloch con frasi didascaliche, confezionate spesso e volentieri in forma statistico-matematica, cos?? da liberare il vissuto dal contingente, dal personale e donargli un rilievo di validit?? universale, nei fatti tuttavia inesistente.";
	}
	if(s == "Cosa dice la legge di Coulomb"){
		os << "Secondo Wikipedia : In fisica, la forza di Coulomb, descritta dalla legge di Coulomb, ?? la forza esercitata da un campo elettrico su una carica elettrica. Si tratta ella forza che agisce tra oggetti elettricamente carichi, ed ?? operativamente definita dal valore dell'interazione tra due cariche elettriche puntiformi e ferme nel vuoto. Dalla legge di Coulomb si rende visibile come all'interazione elettromagnetica sia associata una forza particolarmente intensa se confrontata con l'interazione gravitazionale: la forza elettrica tra un elettrone e un protone in un atomo d'idrogeno ?? 10 alla 39 volte superiore rispetto alla forza gravitazionale tra le due.Per facilitare la generazione di cariche elettrostatiche si utilizza solitamente un generatore elettrostatico; tra i pi?? famosi si hanno l'elettroforo perpetuo ed il generatore di Van de Graaff. Lo sfruttamento pratico della forza esercitata tra le cariche elettriche avviene ad esempio con il propulsore ionico e il propulsore ionico elettrostatico, mentre il manifestarsi naturale o indotto di tale forza elettrica ?? visibile con l'effetto corona o il potere disperdente delle punte (tra cui i fuochi di Sant'Elmo). ";
	}
	if(s== "Cosa dice la prima legge di Gay Lussac"){
		os << "Secondo Wikipedia : La prima legge di Gay-Lussac, nota all'estero come legge di Charles o come legge di Charles - Volta - Gay-Lussac, afferma che in una trasformazione isobara, ovvero in condizioni di pressione e quantit?? di sostanza costanti, il volume di un gas ideale ?? direttamente proporzionale alla temperatura assoluta. La legge prende il nome dal chimico-fisico francese Joseph Louis Gay-Lussac, che la formul?? nel 1802, anche se il francese Jacques Charles aveva scoperto la legge una quindicina d'anni prima, senza tuttavia pubblicare i risultati delle sue ricerche, cos?? come il fisico italiano Alessandro Volta, che nel 1791 comp?? analoghe ricerche sulla dilatazione dei gas, anticipando anch'egli i risultati di Gay-Lussac. ";
	}
	if(s=="Cosa dice la seconda legge di Gay Lussac"){
		os << "Secondo Wikipedia : La seconda legge di Gay-Lussac, detta anche seconda legge di Volta - Gay-Lussac, nota all'estero come legge di Amontons o come legge di Amontons - Volta - Gay-Lussac, ?? una legge costitutiva che descrive come, in una trasformazione isocora in condizioni di volume costante, la pressione di un gas sia direttamente proporzionale alla sua temperatura assoluta. Questa legge prende il nome dal chimico-fisico francese Joseph Louis Gay-Lussac, che la formul?? nel 1802, anche se era gi?? stata scoperta un secolo prima da Guillaume Amontons, cos?? come il fisico italiano Alessandro Volta, che nel 1791 comp?? ricerche analoghe sulla dilatazione dei gas anticipando anch'egli, come per la prima legge, i risultati di Gay-Lussac. ";
	}
	
	if(s=="Cosa dice la legge di Newton") {
		os << "Secondo Wikipedia : In fisica la legge di gravitazione universale ?? una legge fisica fondamentale che afferma che nell'Universo due corpi si attraggono in modo direttamente proporzionale al prodotto delle loro masse e inversamente proporzionale alla loro distanza elevata al quadrato. Formulata da Isaac Newton nell'opera Philosophiae Naturalis Principia Mathematica (Principia) e pubblicata il 5 luglio 1687, fa parte della meccanica classica e si tratta di una legge fisica generale derivata per induzione da osservazioni empiriche. ";
	}
	
	if(s=="Cosa dice la legge di ")
	
	/*
	
	ADDIO
	
	*/
	
	if(s=="Addio" || s == "addio" || s=="Spegniti" || s == "spegniti"){
		system("espeak -v mb-it3 -s 150 addio");
		system("killall clemente.sh");
		system("killall start.sh");
		system("exit");
	}
	
	if(s=="Spegni PC"){
		system("shutdown now");
	}
}		
