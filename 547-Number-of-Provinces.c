void bfs(int ** graph , int n , int * visited, int source){
    int queue[n];
    int front = 0 , rear=0;
    queue[rear++]=source;
    visited[source]=1;
    while(front<rear){
        int s = queue[front++];
        for(int i = 0 ; i < n ; i ++){
            if(!visited[i] && graph[s][i]){
                visited[i]=1;
                queue[rear++]=i;
            }
        }
    }
}
int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize) {
    int * visited = (int *)calloc(isConnectedSize, sizeof(int));
    int count=0;
    for(int i = 0 ; i < isConnectedSize ; i ++){
        if(!visited[i]){
            bfs(isConnected,isConnectedSize,visited,i);
            count++;
        }
    }
    return count;
}