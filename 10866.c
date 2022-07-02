#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void command_handler(char* input);
void push_front(int data);
void push_back(int data);
int pop_front();
int pop_back();
int size();
int is_empty();
int front();
int back();

int ques[10001];
int idx;

int main(){
    int n;
    char input[19];
    scanf("%d", &n);
    memset(ques, 0, 10001*sizeof(int));
    idx = 0;
    for(int i=0; i<n; i++){
        fflush(stdin);
        scanf("%[^\n]s", input);
        command_handler(input);
    }
    return 0;
}

void command_handler(char* input) {
    int data;
    char *command;
    char *tok;

    tok = strtok(input, " ");
    command = tok;
    tok = strtok(NULL, " ");
    if (tok != NULL) data = atoi(tok);

    if (strcmp(command, "push_front") == 0) push_front(data);
    else if (strcmp(command, "push_back") == 0) push_back(data);
    else if (strcmp(command, "pop_front") == 0) printf("%d\n", pop_front());
    else if (strcmp(command, "pop_back") == 0) printf("%d\n", pop_back());
    else if (strcmp(command, "size") == 0) printf("%d\n", size());
    else if (strcmp(command, "empty") == 0) printf("%d\n", is_empty());
    else if (strcmp(command, "front") == 0) printf("%d\n", front());
    else if (strcmp(command, "back") == 0) printf("%d\n", back());
}

void push_front(int data){
    for(int i=idx-1; i>-1; i--) ques[i+1] = ques[i];
    ques[0] = data;
    idx++;
}
void push_back(int data){
    ques[idx] = data;
    idx++;
}
int pop_front(){
    if(is_empty()) return -1;
    int pop = ques[0];
    for(int i=0; i<idx; i++) ques[i] = ques[i+1];
    idx--;
    return pop;
}
int pop_back(){
    if(is_empty()) return -1;
    idx--;
    int pop = ques[idx];
    ques[idx] = 0;
    return pop;
}
int size(){
    int count = 0;
    while(ques[count] > 0) count++;
    return count;
}
int is_empty(){
    if(size() == 0) return 1;
    else return 0;
}
int front(){
    if(is_empty()) return -1;
    return ques[0];
}
int back(){
    if(is_empty()) return -1;
    return ques[idx-1];
}