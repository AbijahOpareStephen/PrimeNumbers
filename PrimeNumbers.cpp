/*  NAME : ABIJAH OPARE STEPHEN
    STUDENT ID : 10966785 */

# include <iostream>
using namespace std;

int main(){

int num, i, j, sum = 0;
cout << "Please enter any number of your choice" << endl;
cin >> num;

cout << "The prime numbers between " << num << " are ";

for (i = 1; i <= num; i++){
        for ( j = 2; j <= i; j++ ){
            if ( i % j == 0 ){
                break;
            }
        }
        if ( j == i){
                sum = sum + i;
                cout << i << " , ";
        }
}

cout << endl;
cout << "The Sum of all prime numbers between 1 to " << num << " = " << sum;
    return 0;
}