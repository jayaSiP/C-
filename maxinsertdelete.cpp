#include <iostream>
#include <vector>
using namespace std;

void heapifyDown(vector<int>& heap, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && heap[left] > heap[largest])
        largest = left;

    if (right < n && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        swap(heap[i], heap[largest]);
        heapifyDown(heap, n, largest);
    }
}

void heapifyUp(vector<int>& heap, int i) {
    int parent = (i - 1) / 2; // cal the parent index of node at i

    if (i > 0 && heap[i] > heap[parent]) {
        swap(heap[i], heap[parent]);
        heapifyUp(heap, parent);
    }
}
void insert(vector<int>& heap, int key) {
    heap.push_back(key);
    int index = heap.size() - 1;
    heapifyUp(heap, index);
}
 
void deleteMax(vector<int>& heap) {
    int n = heap.size();

    if (n == 0) {
        cout << "Heap is empty, nothing to delete." << endl;
        return;
    }

    heap[0] = heap[n - 1];
    heap.pop_back();
    heapifyDown(heap, heap.size(), 0);
}

void printHeap(const vector<int>& heap) {
    for (int i : heap)
        cout << i << " ";
    cout << endl;
}

int main() {
    vector<int> heap;
    int choice, element;

    do {
        cout << "\nMax Heap Operations Menu:\n";
        cout << "1. Insert element\n";
        cout << "2. Delete max element\n";
        cout << "3. Print heap\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the element to insert: ";
                cin >> element;
                insert(heap, element);
                cout << "Element inserted successfully.\n";
                break;

            case 2:
                deleteMax(heap);
                cout << "Max element deleted successfully.\n";
                break;

            case 3:
                cout << "Current Max Heap: ";
                printHeap(heap);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
