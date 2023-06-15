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
		stack_array[top] = element;		//Step 3
		cout << endl;
		cout << element << " ditambahakan(pushed)" << endl;

	}

	void pop() {
		if (empty()) {			// Step 1
			cout << "\nStack is empty. Cannot pop." << endl;		// 1.a
			return;												// 1.b
		}

		cout << "\nThe popped element is: " << stack_array[top] << endl;		//Step 2
		top--;		//Step 3 decrement


	}

};