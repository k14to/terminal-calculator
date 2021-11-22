#include<iostream>
#include<cmath>
using namespace std;

int main() {


      cout<<"to find the square root of a number, after the number type r"<<endl;

        int a;

        char b;

        int c;
		
	cin >> a;


        while(true)
        {
        cin >> b;
        switch(b)
        {
              case '+':
                        cin >> c;
			cout<<a+c<<endl;
			a = a+c;
			break;

              case '-':
                        cin >> c;
                        cout<<a-c<<endl;
                        a= a-c;
			break;

              case '*':
                        cin >> c;
                        cout<<a*c<<endl;
                        a = a*c;
			break;

              case '/':
                        cin >> c;
                        cout<<a/c<<endl;
			a = a/c;
                        break;

              case 'r':
                        cout<<sqrt(a)<<endl;
			a = sqrt(a);
                        break;

        }

        }
        return 0; 
        
} 
