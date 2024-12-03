typedef struct node {
    int course;
    struct node *next;
} node;

bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize) {
    node *graph[numCourses];
    int indegree[numCourses];
    for (int i = 0; i < numCourses; i++) {
        graph[i] = NULL;
        indegree[i] = 0;
    }
    
    for (int i = 0; i < prerequisitesSize; i++) {
        int course = prerequisites[i][0], prereq = prerequisites[i][1];
        node *new_node = (node *)malloc(sizeof(node));
        new_node->course = course;
        new_node->next = graph[prereq];
        graph[prereq] = new_node;
        indegree[course]++;
    }
    int taken_courses = 0, queue[numCourses], index = 0, curr = 0;
    for (int i = 0; i < numCourses; i++) {
        if (indegree[i] == 0) {
            queue[index++] = i;
        }
    }
    while (curr < index) {
        node *tmp = graph[queue[curr]];
        while (tmp) {
            indegree[tmp->course]--;
            if (indegree[tmp->course] == 0) {
                queue[index++] = tmp->course;
            }
            tmp = tmp->next;
        }
        curr++;
        taken_courses++;
    }
    return taken_courses == numCourses;
}