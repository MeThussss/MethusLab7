#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
    string A, B, C, D; 
    cout << "Input text: ";
    cin >>A;
    
    B = func3(A);
    cout << "Reversed text: ";
        C = func1(A);
        D = func1(B);
        cout << C <<"\n";
    
    cout << "Palindrome: ";
    if(B == D){
        cout <<"Yes"<<"\n";
    }
    else{
        cout <<"No"<<"\n";
    }
    return 0;
}
