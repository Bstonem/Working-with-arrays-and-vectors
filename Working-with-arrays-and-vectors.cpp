#include <iostream>
#include <vector>
#include <string>
using namespace std;

//Below is a program to run an array of a fixed number.
int main() {

    cout << "Part 1!" << endl;
    int value[5] = {7, 13, 77, 308, 420}; //An array of 5 integers is listed here.
        for(int i = 0; i < 5; i++){       //A for loop is used to print the values in the array.
            cout << value[i] << " ";
        }
    cout << endl;
    
    value[1] = 11;                        //Values for index 1 and 4 are being changed here,
    value[4] = 777;                         //and here.
        for(int i = 0; i < 5; i++){       //The updated array is printed in this loop.
            cout << value[i] << " ";
        }
        cout << endl << endl;
    
    cout << "Part 2!" << endl;            //Part 2 is using vectors for data sets.
    vector <string> pizzas = {"Hawaiian", "Meat lover", "Supreme"}; //Original data set.
        for(auto pizza : pizzas){                                   //Prints the set.
            cout << pizza << ", ";
        }
        cout << endl;

    pizzas.push_back ("Three cheese");    //This modifies the set by adding another value.
        for(auto pizza : pizzas){
            cout << pizza << ", ";
        }
        cout<< endl;

    pizzas.erase(pizzas.begin() + 1);     //This modifies the set by erasing the 2nd value.
        for(auto pizza : pizzas){
            cout << pizza << ", ";
        }
        cout<< endl;

    cout << "Number of pizzas to order: " << pizzas.size() << endl;  //Prints total # of values
        for(auto pizza : pizzas){                                       //in set.
            cout << pizza << ", ";         //Prints final list of values.
    }




    return 0;
}