#include <iostream>
#include <fstream>

using namespace std;

struct Node {
  int data;
  Node *link = NULL;
};

typedef Node* NodePtr;

int main() {
  // Open the input stream
  ifstream in_stream;
  in_stream.open("values.txt");

  // Read values into the linked list
  // head points to the start of the list, here points to current location in the list
  int value;
  NodePtr head = NULL, here = NULL;
  while (in_stream >> value) {
    // If here is NULL, we are at the first value and we need to create the first node
    // Otherwise we need to create a node that is linked to by the previous node
    if (here == NULL) { //NULL is the last node, end marker for a linked list
      head = new Node;
      here = head;
    } else {
      here->link = new Node;
      here = here->link;
    }

    here->data = value;
  }

  // Print the list
  cout << "values.txt: " << endl;
  here = head;
  while (here) {
    cout << here->data << endl;
    here = here->link;
  }
  cout << endl;

  // Ask for filter value
  int value_to_remove;
  cout << "Enter a value. All integers below your value will be removed from values.txt. Input: ";
  cin >> value_to_remove;

  // Remove appropriate values from list
  NodePtr prev = NULL, to_delete = NULL;
  here = head; // Move back to the start of the list
  while (here) {
    cout << here->data;
    // If we need to remove a value, remove it
    // Otherwise move to the next value
    if (here->data < value_to_remove) {
      to_delete = here;

      // If we are at the start of the list we need to move the head
      // Otherwise, we need to fix the previous node
      if (prev == NULL)
        head = here->link;
      else
        prev->link = here->link;

      here = here->link; // Move to the next value, prev is unchanged
      delete to_delete;
    } else {
      prev = here; // Move prev to the current value
      here = here->link; // Move to the next value
    }
  }

  // Close input stream and open the output stream
  in_stream.close();
  ofstream out_stream;
  out_stream.open("values.txt");

  // Output the filtered list into values.txt
  here = head;
  while (here) {
    out_stream << here->data << endl;
    here = here->link;
  }
  out_stream.close();
}
