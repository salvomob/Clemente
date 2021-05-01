#include<iostream>
#include<cstdlib>
#include<sstream>
#include<cstring>


using namespace std;



char* conc(char s1[],char s2[]){
	unsigned int i1 = strlen(s1);
	unsigned int i2 = strlen(s2);
	unsigned int len = i1+i2;
	char* ret = new char[len];
	for(int i = 0 ; i < len;i++){
		while(i < i1) {
			ret[i] = s1[i];
			i++;
		}
		while(i>=i1 && i-i1 <= i2 ){
			ret[i] = s2[i-i1];
			i++;
		}
	}
	return ret;
}
