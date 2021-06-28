#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
      
    // Declare second integer, double, and String variables.
    int int1;
    double dbl1;
    string str1;
    
    // Read and save an integer, double, and String to your variables.
   
    cin >> int1;
    
    cin >> dbl1;
    cin.ignore();
    getline(cin, str1);
    
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    cout << i + int1 << endl;
    
    // Print the sum of the double variables on a new line.
    cout << setprecision(2) << d + dbl1 << endl;
    
    // Concatenate and print the String variables on a new line
    cout << s + str1 << endl;
    
    // The 's' variable above should be printed first.
    return 0;
}