/* Written by Joe Ferrucci - http://joeferrucci.info */
/* Description: Using only primitive types, implement a bounded queue to store integers. */

#include <iostream>     // STDIN and STDOUT
using namespace std;    // Make things easier to read.

class BoundedQueue {
public:
    BoundedQueue(size_t initialCapacity = 10) {
        currentSize = 0;
        maxCapacity = initialCapacity;
        queue = new int[initialCapacity];
    }
    void enqueue(int newInt) {
        try {
            if (currentSize < maxCapacity) {
                queue[currentSize] = newInt;
                currentSize++; // Increment after enqueuing
            } else {
                throw "BoundedQueue is FULL";
            }
        } 
        catch (const char* str) {
            cerr << "Exception raised: " << str << '\n';
        }
    }
    int dequeue() {
        try {
            if (currentSize != 0) {
                currentSize--;
                return queue[currentSize];
            } else {
                throw "BoundedQueue is EMPTY";
            }
        } 
        catch (const char* str) {
            cerr << "Exception raised: " << str << '\n';
            return 0;
        }
    }
private:
    size_t currentSize;
    size_t maxCapacity;
    int *queue;
};


int main(int argc, char *argv[]) {
    BoundedQueue q1;

    // Run the below code, from <Line:52> to <Line:62>, to test "Enqueue" Full.
    q1.enqueue(10);
    q1.enqueue(9);
    q1.enqueue(8);
    q1.enqueue(7);
    q1.enqueue(6);
    q1.enqueue(5);
    q1.enqueue(4);
    q1.enqueue(3);
    q1.enqueue(2);
    q1.enqueue(1);
    q1.enqueue(0); // Fails at 11th enqueue because its full. See error console.

    // The below code, from <Line:65> to <Line:66>, to test "Dequeue" Empty.
    BoundedQueue q2;
    q2.dequeue(); // It starts empty. When you try to dequeue it fails. See error console.

    return 0;
}