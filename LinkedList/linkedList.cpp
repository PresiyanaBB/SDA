
class Node {
public:
    int data;
    Node* next;

    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class Linkedlist {
    Node* head;

public:
    Linkedlist() { head = NULL; }

    void insertNode(int data)
    {
        Node* newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    void deleteNode(int nodeOffset)
    {
        Node* temp1 = head, * temp2 = NULL;
        int ListLen = 0;

        if (head == NULL) {
            std::cout << "List empty.\n";
            return;
        }

        while (temp1 != NULL) {
            temp1 = temp1->next;
            ListLen++;
        }

        if (ListLen < nodeOffset) {
            std::cout << "Index out of range\n";
            return;
        }

        temp1 = head;
        if (nodeOffset == 1) {
            head = head->next;
            delete temp1;
            return;
        }

        while (nodeOffset-- > 1) {

            temp2 = temp1;
            temp1 = temp1->next;
        }

        temp2->next = temp1->next;
        delete temp1;
    }

    void printList()
    {
        Node* temp = head;

        if (head == NULL) {
            std::cout << "List empty\n";
            return;
        }

        while (temp != NULL) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
