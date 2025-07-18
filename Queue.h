#ifndef QUEUE_H

#define QUEUE_H



#include<iostream>



class queue{

    class node{

    public :

        int data;

        node* next; 

        node(int val){

            data = val;

            next = NULL;

        }

    };



private :

    node *front , *end;

    int queue_size;

    

public :



    queue(){

        front = end = NULL;

        queue_size = 0;

    }





    bool is_empty(){

        return (queue_size == 0);

    }



    void enqueue(int n){

        node* temp = new node(n);



        if(front == NULL){

            front = end = temp;

            queue_size = 1;

            return;

        }



        end->next = temp;

        end = temp;

        queue_size++;

    }



    int dequeue(){

        if(is_empty()){

            std::cout << "Queue contains No elements\n";

            return -1;

        }



        int temp = front->data;

        node* temp_node = front;

        front = front->next;



        if(front == NULL) end = NULL;

        queue_size --;



        delete temp_node;

        return temp;

    }



    int get_size(){

        return queue_size;

    }



    int peek(){

        if(is_empty()){

            std::cout << "Queue contains No elements\n";

            return -1;

        }

        return front->data;

    }



    int rear(){

        if(is_empty()){

            std::cout << "Queue contains No elements\n";

            return -1;

        }

        return end->data;

    }



    ~queue(){

        while(!is_empty()) dequeue();

    }

};



#endif
