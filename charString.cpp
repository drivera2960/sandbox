#include <iostream>
#include <cstring>
using namespace std;


char str[3];

int main(){

	str[0] = 'r';
	str[1] = 'e';
	str[2] = 'd';



	if(strcmp(str, "bed") == 0){
		cout<<"yepper";	
	}else{
		cout<<"nopper";
	}

	return 0;
}

