#include<iostream>
#include<cmath>
using namespace std;

int main() {

      cout<<"|-------------------------------------------------------------|"<<endl;
      cout<<"| to find the square root of a number, after the number type r|"<<endl;
      cout<<"| to clear the calculator type c..............................|"<<endl;
      cout<<"|-------------------------------------------------------------|"<<endl;
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
                        cout<<"| ";
			cin >> c;
			cout<<" |"<<endl;
                        cout<<"| "<<a+c<<" |"<<endl;
                        a = a+c;
                        break;

              case '-':
			cout<<"| ";
                        cin >> c;
			cout<<" |"<<endl;
                        cout<<"| "<<a-c<<" |"<<endl;
                        a= a-c;
                        break;

              case '*':
			cout<<"| ";
			cin >> c;
			cout<<" |"<<endl;
                        cout<<"| "<<a*c<<" |"<<endl;
                        a = a*c;
                        break;

              case '/':
			cout<<"| ";                        
			cin >> c;
			cout<<" |"<<endl;
                        cout<<"| "<<a/c<<" |"<<endl;
                        a = a/c;
                        break;

              case 'r':
			cout<<"| "<<sqrt(a)<<" |"<<endl;
                        a = sqrt(a);
                        break;

              case 'c':
              	        cin >> a;
                        break;

        }

        }
        return 0; 
        
} 
