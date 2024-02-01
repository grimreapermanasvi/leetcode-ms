typedef struct {
    int* array;
    int top;
    int capacity;
} Stack;

Stack* createStack(int capacity) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->array = (int*)malloc(capacity * sizeof(int));
    stack->top = -1;
    stack->capacity = capacity;
    return stack;
}

void push(Stack* stack, int item) {
    stack->array[++stack->top] = item;
}

int pop(Stack* stack) {
    return stack->array[stack->top--];
}

int peek(Stack* stack) {
    return stack->array[stack->top];
}

bool isEmpty(Stack* stack) {
    return (stack->top == -1);
}
typedef struct {
    Stack* inputStack;
    Stack* outputStack;
} MyQueue;

MyQueue* myQueueCreate() {
    MyQueue* myQueue = (MyQueue*)malloc(sizeof(MyQueue));
    myQueue->inputStack = createStack(100); // Adjust the capacity as needed
    myQueue->outputStack = createStack(100);
    return myQueue;
}

void myQueuePush(MyQueue* obj, int x) {
    push(obj->inputStack, x);
}

int myQueuePop(MyQueue* obj) {
    if (isEmpty(obj->outputStack)) {
        while (!isEmpty(obj->inputStack)) {
            push(obj->outputStack, pop(obj->inputStack));
        }
    }

    return isEmpty(obj->outputStack) ? -1 : pop(obj->outputStack);
}

int myQueuePeek(MyQueue* obj) {
    if (isEmpty(obj->outputStack)) {
        while (!isEmpty(obj->inputStack)) {
            push(obj->outputStack, pop(obj->inputStack));
        }
    }

    return isEmpty(obj->outputStack) ? -1 : peek(obj->outputStack);
}

bool myQueueEmpty(MyQueue* obj) {
    return isEmpty(obj->inputStack) && isEmpty(obj->outputStack);
}

void myQueueFree(MyQueue* obj) {
    free(obj->inputStack->array);
    free(obj->outputStack->array);
    free(obj->inputStack);
    free(obj->outputStack);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/