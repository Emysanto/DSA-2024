#include <iostream>
using namespace std;

struct node {
    struct node* prev;
    int data;
    struct node* next;
};

class myclass {
public:
    void accept(int a) {
        struct node *head = new node();
        head->prev = NULL;
        cout << "Enter data for node 1: ";
        cin >> head->data;
        head->next = NULL;
        struct node *current = head;

        for (int i = 1; i < a; i++) {
            struct node *newNode = new node();
            cout << "Enter data for node " << i + 1 << ": ";
            cin >> newNode->data;
            newNode->prev = current;
            newNode->next = NULL;
            current->next = newNode;
            current = newNode;
        }
        print(head);
        pos(head);
        dele(head);
    }

    void dele(struct node* head) {
        int position;
        cout << "Enter the position of the node to be deleted: ";
        cin >> position;

        struct node *temp = head;

        if (position == 1) {
            // Deleting the head node
            head = temp->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete temp;
        } else {
            for (int i = 1; i < position && temp != NULL; i++) {
                temp = temp->next;
            }

            if (temp == NULL) {
                cout << "Position out of range!" << endl;
                return;
            }

            if (temp->next != NULL) {
                temp->next->prev = temp->prev;
            }
            if (temp->prev != NULL) {
                temp->prev->next = temp->next;
            }

            delete temp;
        }
        print(head);
    }

    void pos(struct node* head) {
        int position, data;
        cout << "Enter the position and data to insert: ";
        cin >> position >> data;

        struct node *newNode = new node();
        newNode->data = data;

        if (position == 1) {
            // Inserting at the head
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
            head->prev = NULL;
        } else {
            struct node *temp = head;
            for (int i = 1; i < position - 1 && temp != NULL; i++) {
                temp = temp->next;
            }

            if (temp != NULL) {
                newNode->next = temp->next;
                newNode->prev = temp;

                if (temp->next != NULL) {
                    temp->next->prev = newNode;
                }

                temp->next = newNode;
            } else {
                cout << "Position out of range!" << endl;
                delete newNode;  // Free memory if position is invalid
                return;
            }
        }
        print(head);
    }

    void print(struct node* head) {
        struct node *ptr = head;
        while (ptr != NULL) {
            cout << ptr->data << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
};

int main() {
    int a;
    cout << "Enter the number of nodes: ";
    cin >> a;
    myclass obj;
    obj.accept(a);

    return 0;
}
