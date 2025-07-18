#ifndef STACK_H

#define STACK_H



#include<iostream>



struct stack{



	struct Node{

		int data;

		struct Node* next;

		

		Node(int val){

			data = val;

			next = NULL;

		}

	};

	

	int size;

	Node* top;

	stack(){

		size = 0;

		top = NULL;

	}

		

	int peek(){

		if(is_empty()){

			std::cout << "Stack is empty\n";

			return -1;

		}

			

		return top->data;

	}

		

	void push(int val){

		Node* temp = new Node(val);

		temp->next = top;

		top = temp;

		size++;

	}

		

	void pop(){

		if(!size){

			std::cout << "Stack is Empty\n" << "\n";

			return;

		}

			

		Node* temp = top;

		top = top->next;

		delete temp;

		size--;

	}

		

	bool is_empty(){

		return (!size);

	}

	

	int size(){

		return size;

	}

};



#endif
