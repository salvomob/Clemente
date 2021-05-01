#include<cstdlib>

using namespace std;

void showMsg(ostream& os){
	os << "Ecco tutti i messaggi Whatsapp inviati dal puo pc fino ad ora\n";
	system("xed pywhatkit_dbs.txt");
}
