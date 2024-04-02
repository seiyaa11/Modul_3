#include <iostream>
using namespace std;

// Declaration of struct Node
struct Node {
    int data;
    string kata;
    Node *next;
};

Node *head = nullptr;
Node *tail = nullptr;

// Initialize List
void init() {
    head = nullptr;
    tail = nullptr;
}

// Check if List is Empty
bool isEmpty() {
    return head == nullptr;
}

// Insert at the Beginning
void insertDepan(int nilai, string kata) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->kata = kata;
    baru->next = nullptr;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        baru->next = head;
        head = baru;
    }
}

// Insert at the End
void insertBelakang(int nilai, string kata) {
    Node *baru = new Node;
    baru->data = nilai;
    baru->kata = kata;
    baru->next = nullptr;

    if (isEmpty()) {
        head = tail = baru;
    } else {
        tail->next = baru;
        tail = baru;
    }
}

// Display List
void tampil() {
    if (isEmpty()) {
        cout << "List masih kosong!" << endl;
        return;
    }

    Node *bantu = head;
    while (bantu != nullptr) {
        cout << bantu->data << "\t" << bantu->kata << "\t";
        bantu = bantu->next;
    }
    cout << endl;
}

int main() {
    init();

    insertDepan(3, "satu");
    tampil();

    insertBelakang(5, "dua");
    tampil();

    insertDepan(2, "tiga");
    tampil();

    insertDepan(1, "empat");
    tampil();

    // Add more operations as needed

    return 0;
}