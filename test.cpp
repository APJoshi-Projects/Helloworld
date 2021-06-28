#include <iostream>
using namespace std;
void line(), message(); // Prototypes
int main()
{
cout << "Hello! The program starts in main()."
<< endl;
line();
message();
line();
cout << "At the end of main()." << endl;
return 0;
}
void line() // To draw a line.
{
cout << "--------------------------------" << endl;
}
void message() // To display a message.
{
cout << "In function message()." << endl;
}