/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int * TopologicalOrdering(int ** graph, int n){
    int * degree = (int *)calloc(n,sizeof(int));
    for (int i = 0; i < n; i++){
        for(int j = 0 ; j < n ; j ++){
            if(graph[i][j]){
                degree[j]=degree[j]+1;
            }
        }
    }
    int * q = (int *)malloc(n*sizeof(int));
    int front = 0;
    int rear = 0;
    for(int i= 0 ; i < n ; i ++){
        if(!degree[i])q[rear++]=i;
    }
    int index = 0;
    int * order = (int *)malloc(sizeof(int)*n);
    while(front < rear){
        int a = q[front++];
        order[index++] = a;
        for(int i = 0 ;i < n ; i ++ ){
            if(graph[a][i]){
                degree[i]=degree[i]-1;
                if(!degree[i])q[rear++]=i;
            }
        }

    }
    if (index != n)return NULL;
    return order;
}

int* findOrder(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize, int* returnSize) {
    int ** graph = ( int **)malloc(sizeof(int *)*numCourses);
        for(int i = 0 ; i < numCourses ; i ++){
            graph[i]=(int *)calloc(numCourses,sizeof(int));
        }
        for(int i = 0 ; i < prerequisitesSize ; i++){
            graph[prerequisites[i][1]][prerequisites[i][0]]=1;
        }
    *returnSize=numCourses;
    if(TopologicalOrdering(graph, numCourses)!=NULL)return TopologicalOrdering(graph, numCourses);
    *returnSize=0;
    return NULL;
}