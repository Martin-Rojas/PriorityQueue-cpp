/**
Programmer: Martin Rojas
Project number: 6
Project Desc: Implementing the displayQueue Method and the
              enqueue by priority method. 
Course: COSC 2436 PF III Data Structures
Date:   11/09/2024
*/

#include <iostream>
#include "priority_queue.h"
#include "priority_queue2.h"

using namespace std;

int main() {
    PriorityQueue pq;
    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(20);
    pq.enqueue(5);
    pq.enqueue(30);
    pq.enqueue(-100);
    pq.enqueue(1);
    pq.enqueue(0);

    cout << "Front element (highest priority) is: " << pq.peekFront() << endl;
    cout << "Removed element from queue: " << pq.dequeue() << endl;
    cout << "New front element (next highest priority) is: " << pq.peekFront() << endl;

    std::cout << "Display items in the queue: ";
    pq.displayQueue();

    std::cout << " \n";
    std::cout << " \n";

    // Add the test code for case 2 here.
    // You can add a header file for the priority queue for exercise 2 or not it don't matter
    std::cout << "Case 2 \n";

    PriorityQueue2 pq2;

    pq2.enqueue(30,1);
    pq2.enqueue(10,2);
    pq2.enqueue(20,3);
    pq2.enqueue(5,4);
    pq2.enqueue(30,5);
    pq2.enqueue(-100,6);
    pq2.enqueue(1,7);
    pq2.enqueue(0,8);

    pq2.displayQueue();


    return 0;
}