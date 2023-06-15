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

	// method for shcek if data is empty
	bool empty() {
		return (top == -1);
	}

	void display() {
		if (empty()) {
			cout << "\nStack is empty." << endl;
		}
		else {
			for (int tmp = 0; tmp <= top; tmp++) {
				cout << stack_array[tmp] << endl;
			}
		}
	}
};

int main() {
	StackArray s; // Deklarasikan variabel s yang merupakan objek dari kelas dari SA --> ini digunakan untuk mengakses metode dan data dalam kelas SA
	while (true) {
		cout << endl;
		cout << "\n**Stack Menu***\n";
		cout << "1. Push\n";
		cout << "2. Pop\n";
		cout << "3. Display\n";
		cout << "4. Exit\n";
		cout << "\nEnter your choice: ";
		string input;
		getline(cin, input); //untuk mendefinisikan cinnya di variabel inputnya
		char ch = (input.empty() ? '0' : input[0]);
		switch (ch) { // method udah ditentukan
		case '1': {
			s.push();
			break;
		}

}
