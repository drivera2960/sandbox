
#include <iostream>
#include <array>
using namespace std;

//void addALetter(char *array);

void displayArray(char *array, int size);
void swapLetter(int pos, char *array, char replacement);

int main(){

	char word[3];
	char* pointerToArray = word; 
	
//	int n;

	word[0] = 'r';
	word[1] = 'e';
	word[2] = 'd';


	displayArray(pointerToArray, 3);
	swapLetter(0, pointerToArray, 'b');	
	displayArray(pointerToArray, 3);
/*
	cout << "Build mungo, insert size: ";
	cin >> n;
	cout << "\n";

	
	char *mungo = new char[n];
	
	for(int i = 0; i<n; ++i)
		mungo[i] = 'M';	

	displayArray(mungo);
*/

return 0;
}

void displayArray(char *array, int size){

	for(int i = 0; i<size; i++)
		cout << array[i]<< "\t";

	cout << "\n\n";

}

void swapLetter(int pos, char *array, char replacement){

	array[pos] = replacement;

}










