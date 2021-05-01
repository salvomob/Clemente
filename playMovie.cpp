#include<sstream>
#include<cstdlib>
#include<cstring>
//#include"conc.cpp"

void playMovie(string s){
istringstream iss(s);
	string tmp;
	char command[] = "vlc /home/salvatore/Scrivania/developement/ideas/clemente/film/";
	char ext[] = ".mkv";
	int n = 0;
	char *tmp1;
	while(iss>>tmp){
		n++;
		if(n>2){
			int len = tmp.length();
			tmp1 = new char[len];
			for(int i = 0; i < len; i++){
				tmp1[i] = tmp[i];
			}
		}
	}
	char *arr1 = conc(command,tmp1);
	char *ret = conc(arr1,ext);
	system(ret);
}
