#include<iostream>
using namespace std;

char before(char x){
    int i = 0;
    char a = 'A';
    while (i < 26){
        if(  x == 'A'+i){
            if(x == 'A'){
                return 'Z';
            }
           return x-1 ; 
        }
        i++;
    } 
    return '0';
}
int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
