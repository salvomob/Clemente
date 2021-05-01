#include<sstream>
#include<cstdlib>
#include<cstring>
#include<string>

void createFile(string s,istream& in,ostream& os){
	char command[] = "touch /home/salvatore/Scrivania/";
	string tmp,nomeFile,ext;
	istringstream iss(s);
	iss>>tmp;
	iss>>nomeFile;
	iss>>ext;
	for(int i = 0; i < ext.length(); i++) ext[i] = tolower(ext[i]);
	string fileToCreate = nomeFile+"."+ext;
	int len = fileToCreate.length();
	char* last = new char[len];
	for(int i = 0; i < len ; i++) last[i] = fileToCreate[i];
	char *it = conc(command,last);
	system(it);
	os<<"File creato con successo con nome " << nomeFile << ext << " sulla Scrivania" << endl;
 }	
 
void createFolder(string s,istream& in,ostream& os){
 	char command[] = "mkdir /home/salvatore/Scrivania/";
	string tmp,tmp1,nomeFolder;
	istringstream iss(s);
	iss>>tmp;
	iss>>tmp1;
	iss>>nomeFolder;
	int len = nomeFolder.length();
	char* last = new char[len];
	for(int i = 0; i < len ; i++) last[i] = nomeFolder[i];
	char *it = conc(command,last);
	system(it);
	os<<"Cartella creata con successo con nome " << nomeFolder << " sulla Scrivania" << endl;
 }
