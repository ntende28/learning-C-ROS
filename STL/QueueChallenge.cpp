#include <iostream>
#include <queue>
#include <string>
using namespace std;

// creating my tasklist
class MyTaskList {
private: 
    int TaskId;
    string TaskName;
    int TaskDuration;

public:
    MyTaskList(int tId, string tName, int tDuration) {
        TaskId = tId;
        TaskName = tName;
        TaskDuration = tDuration;
    }

    // display tasks
    void displayTask() {
        cout << "Task number : " << TaskId << "\n";
        cout << "Task name: "<< TaskName << "\n"; 
        cout << "Task duration: " << TaskDuration << " minutes." << "\n";
        cout << "  \n";
    }  
};

void displayTasksInQueue(queue<MyTaskList> myTasks) {
    // displaying the tasks (while loop)
    while (!myTasks.empty()) // check to see tasks in  my to-do list 
    {
        MyTaskList currentTask = myTasks.front(); // create an obj to store my first task to kick off
        currentTask.displayTask();

        // remove the front element
        myTasks.pop(); // Once displayed remove the first element
    }
}

int main() {

    // create the queue
    queue<MyTaskList> ToDoQueueList;

    // adding tasks to my to-do list
    ToDoQueueList.push(MyTaskList(1, "Wake up", 20));
    ToDoQueueList.push(MyTaskList(2, "Take a shower", 10));
    ToDoQueueList.push(MyTaskList(3, "Getting dressed", 10));
    ToDoQueueList.push(MyTaskList(4, "Book a bus", 5));
    ToDoQueueList.push(MyTaskList(5, "Go to work", 10));
    ToDoQueueList.push(MyTaskList(6, "Attend toolbox talk", 25));
    ToDoQueueList.push(MyTaskList(7, "Start daily task", 180));
    ToDoQueueList.push(MyTaskList(8, "Run errands (Lunch break)", 50));

    // Remove first task
    // ToDoQueueList.pop();

    // suppose first 4 tasks are cleared
    for (int i = 0; i <= 3; i++)
        ToDoQueueList.pop();
    

    // display current tasks in queue
    displayTasksInQueue(ToDoQueueList);

    return 0;
}