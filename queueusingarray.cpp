#include<iostream>
using namespace std;
#define n 100

class Queue{

	int* arr;
	int front;
	int back;

public:
	Queue(){
		arr = new int[n];
		front = -1;
		back = -1;
	}
	
	void enque(int data){
		if(back == n-1){
			cout<<"Queue Overflow"<<endl;
			return;
		}
		back++;
		arr[back] = data;
		if(front == -1){
			front++;
		}
	}

	void deque(){

		if(front == -1 || front > back){
			cout<<"No elements in the queue"<<endl;
			return;
		}
		front++;
	}


	int peek(){
		if(front == -1 || front > back){
			cout<<"No elements in the queue"<<endl;
			return -1;
		}
		return arr[front];
	}
	void display(){
		if(front == -1 || front > back){
			cout<<"No elements in the queue"<<endl;
			return;
		}
		cout<<"The elements are : ";
		for(int i = front; i <= back; i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};

int main(){

	Queue q;
	q.enque(10);
	q.enque(20);
	q.enque(30);
	q.enque(40);
	cout<<"Peeked element : " <<q.peek() <<endl;
	
	q.display();
}
