/**
* Problema: 2176 - Paridade
* Link: https://judge.beecrowd.com/pt/problems/view/2176
* Linguagem: C++
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string x;
	
	int cont=0;
	
	getline(cin, x);
	
	int t = x.size();
	
	for(int i=0; i<t; i++){
	    
	    if(x[i]=='1'){
	        
	        cont++;
	    }
	}
	
	cout << x;
	
	if(cont%2==0){
	    
	    cout << '0' << '\n';
	} else {
	    
	    cout << '1' << '\n';
	}
}
