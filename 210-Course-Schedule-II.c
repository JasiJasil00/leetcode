#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node* next;
};

int lap = 0;

// Helper function for DFS
bool help(struct node* adj[], int* visited, int* dis, int start, int* stack, int* top) {
    visited[start] = 1;
    lap++;
    dis[start] = lap;

    struct node* ptr = adj[start];
    while (ptr != NULL) {
        if (visited[ptr->data] == 1) {
            if (dis[ptr->data] < dis[start]) {
                return false;  // Cycle detected
            }
        } else if (visited[ptr->data] == 0) {
            if (!help(adj, visited, dis, ptr->data, stack, top)) {
                return false;  // Cycle detected in the recursive call
            }
        }
        ptr = ptr->next;
    }

    lap++;
    visited[start] = 2;
    stack[(*top)++] = start;  // Push the node to the stack
    return true;
}

// Main function to find the order of courses
int* findOrder(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize, int* returnSize) {
    *returnSize = 0;
    int* result = NULL;

    // If there are no prerequisites, return all courses in order
    if (prerequisitesSize == 0) {
        *returnSize = numCourses;
        result = (int*)malloc(sizeof(int) * (*returnSize));
        for (int i = 0; i < *returnSize; i++) {
            result[i] = i;
        }
        return result;
    }

    // Graph representation using adjacency list
    struct node* adj[numCourses];
    int visited[numCourses];
    struct node* last[numCourses];
    int dis[numCourses];
    int stack[numCourses];
    int top = 0;

    // Initialize graph and auxiliary arrays
    for (int i = 0; i < numCourses; i++) {
        adj[i] = NULL;
        visited[i] = 0;
        last[i] = NULL;
        dis[i] = 0;
    }

    // Build the graph from prerequisites
    for (int i = 0; i < prerequisitesSize; i++) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = prerequisites[i][0];
        newnode->next = NULL;
        if (adj[prerequisites[i][1]] == NULL) {
            adj[prerequisites[i][1]] = newnode;
        } else {
            last[prerequisites[i][1]]->next = newnode;
        }
        last[prerequisites[i][1]] = newnode;
    }

    // Call the DFS helper for each course that hasn't been visited
    for (int i = 0; i < prerequisitesSize; i++) {
        if (prerequisites[i][1] == prerequisites[i][0]) {
            return result;  // Cycle detected, self-loop
        } else if (visited[prerequisites[i][1]] == 0) {
            if (!help(adj, visited, dis, prerequisites[i][1], stack, &top)) {
                return result;  // Cycle detected
            }
        }
    }

    // If some nodes are not visited, add them to the stack
    for (int i = 0; i < numCourses; i++) {
        if (visited[i] == 0) {
            stack[top++] = i;
        }
    }

    // Set the result size and fill the result array with the topological order
    *returnSize = numCourses;
    result = (int*)malloc(sizeof(int) * numCourses);
    for (int i = 0; i < *returnSize; i++) {
        result[i] = stack[--top];  // Pop from stack to get the topological order
    }

    return result;
}