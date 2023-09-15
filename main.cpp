// This code was taken from https://www.techiedelight.com/queue-implementation-cpp/
// The code has been modified from the original to provide opportunities to learn

//5 Attributes
//1)Exit after error, If we could just resume the program after catching the error it would positivly impact the program
//2) Not grouping everything into one file will also help in the udnerstanding and orginization of the code
//3)Clear linear desing will also help in the understanding and readability of the code
//4)A better choice of data structure might have been a vector as they dont overflow
//5)Clear and understanding comments are needed to ensure code is understandable and readable by others
#include "queue.hpp"
// main function
int main()
{
    

//Test case 1 Testing Enqueue(1) Dequeue(1) Sie(1) isEmpty(1) isFull(1) peek(1)
//Should output the size of the queue
queue test(5);
test.enqueue(2);
test.enqueue(17);
test.size();
// should return a size of 2 because 2 things were enqueued into the function
test.enqueue(3);
test.enqueue(9);
test.enqueue(21);
test.isFull();
test.isEmpty();
test.peek();
//Test full should return true 
//Test is empty should return false
//test Peak should return a 2 because that is whats in front of the queue
test.dequeue();
test.dequeue();
test.dequeue();
test.dequeue();
test.dequeue();
test.isEmpty();
test.isFull();
//Should return true for empty and false for full

//Test 2 Enqueue(2)
queue test2(2);
test.enqueue(4);
test.enqueue(9);
test.enqueue(3);
//The last enqueue would be a overflow error and should return an error to the user

//Test 3 Peek(2)
queue test3(3);
test3.peek();
//This should show an error because there is nothing ot peek and so the program should show an error and then pause the system.

//Test 4 Dequeue(2)
queue test4(2);
test4.dequeue();
//Should return an error because there is nothing to dequeue, should produce an error to see then return.
test.~queue();
test2.~queue();
test3.~queue();
test4.~queue();
	return 0;
}
