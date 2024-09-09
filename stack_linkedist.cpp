#include <iostream>
using namespace std;

struct node {
    int data;
    struct node* next;
};

class myclass {
public:
    struct node* top = nullptr; // Top pointer for the stack, initialized to nullptr

    // Function to accept initial values and create the stack
    void accept(int n) {
        for (int i = 0; i < n; i++) {
            struct node* new1 = new node(); // Allocate new node for each input
            cout << "Enter value for node " << i + 1 << ": ";
            cin >> new1->data;
            new1->next = top; // Push new node to the top of the stack
            top = new1; // Update top pointer
        }
        display(); // Display the stack
        peek();    // Peek at the top element
    }

    // Function to push a new value onto the stack
    void push(int value) {
        struct node* new1 = new node(); // Allocate a new node
        new1->data = value; // Set data to the new value
        new1->next = top;   // Push new node to the top of the stack
        top = new1;         // Update the top pointer
        display();          // Display the stack after pushing
    }

    // Function to pop the top element from the stack
    void pop() {
        if (top == nullptr) { // Check if the stack is empty
            cout << "Stack is empty, cannot pop!" << endl;
            return;
        }
        struct node* temp = top; // Temporary pointer to hold the current top
        cout << "Popped element: " << top->data << endl;
        top = top->next; // Move the top to the next node
        delete temp;     // Free the memory of the old top node
        display();       // Display the stack after popping
    }

    // Function to display the stack contents
    void display() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
            return;
        }
        struct node* ptr = top; // Start from the top
        cout << "Stack contents: ";
        while (ptr != nullptr) { // Traverse until the end of the stack
            cout << ptr->data << " "; // Print node data
            ptr = ptr->next;          // Move to the next node
        }
        cout << endl;
    }

    // Function to peek at the top element of the stack
    void peek() {
        if (top == nullptr) {
            cout << "Stack is empty!" << endl;
        } else {
            cout << "Top element is: " << top->data << endl;
        }
    }
};

int main() {
    int a;
    cout << "Enter the number of nodes: ";
    cin >> a;
    
    myclass obj;
    obj.accept(a); // Accept input and build the stack

    // Push a new element
    int new_value;
    cout << "Enter value to push onto the stack: ";
    cin >> new_value;
    obj.push(new_value); // Push the new value to the stack
    
    // Pop the top element
    obj.pop(); // Pop and display the stack
    
    return 0;
}
