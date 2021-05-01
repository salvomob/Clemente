#include<fstream>
#include<sstream>

void matOp(string s,ostream& os){
	istringstream iss (s);
	string tmp;
	iss>>tmp>>tmp;
	float val1;
	float val2;
	char op;
	iss>>val1;
	iss>>op;
	iss>>val2;
	float res;
	if(op=='+'){
		res = val1+val2;
	}
	if(op=='-'){
		res = val1-val2;
	}
	if(op=='*'){
		res = val1*val2;
	}
	if(op=='/'){
		res = val1/val2;
	}
	os << "Il risultato e' " << res;
}
