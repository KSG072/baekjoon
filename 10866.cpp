#include <iostream>
#include <string.h>
using namespace std;
int dq_index = 0;

int dq_is_empty(int* deque){
    if(dq_index == 0) return 1;
    else return 0;
}
void push_front(int* deque, int data){
    if(dq_is_empty(deque) == 0){
        for(int i=dq_index; i>=0; i--){
            deque[i] = deque[i-1];
        }
    }
    deque[0] = data;
    dq_index++;
}
void push_back(int* deque, int data){
    deque[dq_index] = data;
    dq_index++;
}
int pop_front(int* deque){
    if(dq_index == 0) return -1;
    int pop = deque[0];
    for(int i=0; i<dq_index; i++){
        deque[i] = deque[i+1];
    }
    dq_index--;
    return pop;
}
int pop_back(int* deque){
    if(dq_index == 0) return -1;
    int pop = deque[dq_index-1];
    deque[dq_index-1] = 0;
    dq_index--;
    return pop;
}
int get_size(int* deque){
    return dq_index;
}
int get_front(int* deque){
    if(dq_index == 0) return -1;
    return deque[0];
}
int get_back(int* deque){
    if(dq_index == 0) return -1;
    return deque[dq_index-1];
}

int main(){
    int deque[10001] = {0,};
    string input, command;
    int n, data, pos;
    cin>>n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, input);
        pos = input.find(" ");
        if(pos == -1) command = input;
        else{
            command = input.substr(0, pos);
            data = stoi(input.substr(pos, input.length()-1));
        }

        if(command == "push_front") push_front(deque, data);
        else if(command == "push_back") push_back(deque, data);
        else if(command == "pop_front") cout<<pop_front(deque)<<"\n";
        else if(command == "pop_back") cout<<pop_back(deque)<<"\n";
        else if(command == "size") cout<<get_size(deque)<<"\n";
        else if(command == "empty") cout<<dq_is_empty(deque)<<"\n";
        else if(command == "front") cout<<get_front(deque)<<"\n";
        else if(command == "back") cout<<get_back(deque)<<"\n";
        else cout<<"invalid command\n";
    }
    return 0;
}