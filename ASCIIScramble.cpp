#include <iostream>

using namespace std; 

int main() {

char c1, c2, c3, c4, c5;
// this program does not take into consideration enter or space entries
cout << "Enter 5 letters: ";
cin >> c1 >> c2 >> c3 >> c4 >> c5;

cout << "ACSII Message: " << int(c1) << " " << int(c2) 
     << " " << int(c3) << " " << int(c4) << " " << int(c5);

}






