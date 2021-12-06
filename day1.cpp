#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {

    string line;
    ifstream myfile ("day1.txt");

    int counter = 0;


    if(myfile.is_open()) {
        
        getline(myfile, line);
        int baseNumber = stoi(line);
        
        cout << "Base Number is" << baseNumber << endl;
        while(getline(myfile, line)) { 
            
            int number = stoi(line);
            if(number > baseNumber) {
                counter++;
            }
            baseNumber = number;
        }
        myfile.close();
        cout << counter << endl;
    }
    return 0;
}