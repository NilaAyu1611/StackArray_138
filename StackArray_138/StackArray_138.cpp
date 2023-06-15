#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	string stack_array[5];
	int top;
public:
	//Constructor
	StackArray() {
		top = -1;
	}
void push() { // mengembalikan nilai Element(void)... (gara2 ada parametrenya)jadi gunain return tadi... tapi kalo semisal bukan void, tapi string itu kalo nggak ada returnnya maka nanti eror. 
	cout << "\nEnter a element: ";
	string element;
	getline(cin, element);

	if (top == 4) {		// Step 1
		cout << "Number of data exceeds the limit." << endl;
		return;
	}
	top++;		//Step 2
