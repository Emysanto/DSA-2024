#include <iostream>
using namespace std;

struct node {
    int data;
    struct node *next;
};

class myclass {
public:
    struct node *head = NULL;

    // Create the circular linked list
    void create(int n) {
        int i, data;
        struct node *prevNode, *newNode;

        if (n > 0) {
            head = (struct node*)malloc(sizeof(struct node));
            cout << "Enter data of 1st node: ";
            cin >> data;
            head->data = data;
            head->next = head;  // Initially points to itself
            prevNode = head;

            for (i = 2; i <= n; i++) {
                newNode = (struct node*)malloc(sizeof(struct node));
                cout << "Enter data of " << i << "th node: ";
                cin >> data;
                newNode->data = data;
                newNode->next = head;  // Link new node to head to maintain circular structure
                prevNode->next = newNode;
                prevNode = newNode;
            }
        }
    }

    // Display the circular linked list
    void displayList() {
        if (head == NULL) {
            cout << "The list is empty." << endl;
            return;
        }

        struct node *current = head;
        do {
            cout << current->data << " ";
            current = current->next;
        } while (current != head);
        cout << endl;
    }

    // Insert a node at a specific position
    void insertAtPosition(int position, int data) {
        struct node *newNode = new node();
        newNode->data = data;

        if (position == 1) {
            if (head == NULL) {
                head = newNode;
                head->next = head;
            } else {
                struct node *temp = head;
                while (temp->next != head) {
                    temp = temp->next;
                }
                newNode->next = head;
                temp->next = newNode;
                head = newNode;
            }
        } else {
            struct node *temp = head;
            for (int i = 1; i < position - 1 && temp->next != head; i++) {
                temp = temp->next;
            }

            if (temp->next == head && position != 2) {
                cout << "Position out of range!" << endl;
                delete newNode;
            } else {
                newNode->next = temp->next;
                temp->next = newNode;
            }
        }
        displayList();
    }

    // Delete a node from a specific position
    void deleteAtPosition(int position) {
        if (head == NULL) {
            cout << "The list is empty, cannot delete." << endl;
            return;
        }

        if (position == 1) {
            struct node *temp = head;
            if (head->next == head) {
                head = NULL;
                free(temp);
            } else {
                struct node *last = head;
                while (last->next != head) {
                    last = last->next;
                }
                last->next = head->next;
                head = head->next;
                free(temp);
            }
        } else {
            struct node *temp = head;
            struct node *prev = NULL;
            for (int i = 1; i < position && temp->next != head; i++) {
                prev = temp;
                temp = temp->next;
            }

            if (temp->next == head && position != 2) {
                cout << "Position out of range!" << endl;
            } else {
                prev->next = temp->next;
                free(temp);
            }
        }
        displayList();
    }
};

int main() {
    myclass obj;
    int n, pos, data;
    cout << "Enter the total number of nodes in the list: ";
    cin >> n;

    obj.create(n);
    obj.displayList();

    cout << "Enter the position to insert a new node and its data: ";
    cin >> pos >> data;
    obj.insertAtPosition(pos, data);

    cout << "Enter the position of the node to delete: ";
    cin >> pos;
    obj.deleteAtPosition(pos);

    return 0;
}
