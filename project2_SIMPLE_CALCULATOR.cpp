#include<iostream>
using namespace std ;

int main(){
    char op; //for operator 
    float num1,num2,answer; //for value 

    cout << "Enter 1st number: " << endl;
    cin >> num1;

    cout << "select the operator: '+','-','*','/' " << endl;
    cin >> op;

    cout << "Enter 2nd number: " << endl;
    cin >> num2;

//using conditional statement

    if(op == '+'){
        answer = num1 + num2;
    }
    else if(op == '-'){
        answer = num1 - num2;
    }
    else if(op == '*'){
        answer = num1 * num2;
    }
    else if(op == '/'){

        if(num2 !=0){
            answer = num1 / num2;
        }
        else{
            cout << "Error: You are dividing by zero !!" << endl;
            return 1;
        }
        
    }
    else{
        cout << "invalid operator !!" << endl;
        return 1;
    }

    cout << "answer:" << answer << endl;

    return 0;
}