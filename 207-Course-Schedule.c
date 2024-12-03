bool dfs(int ** graph, int n, int * visited , int src){
    visited[src]=1;
    for(int i = 0 ; i < n ; i ++ ){
        if(graph[src][i]){
            if(!visited[i]&&dfs(graph,n,visited,i)){
                return true;
            }else if(visited[i]==1){
                return true;
            }
        }
    }
    visited[src]=2;
    return false;
}
bool cycle(int ** graph , int n){
    int *visited = (int *)calloc(n,sizeof(int));
    for(int i =0 ; i < n ; i ++){
        if(!visited[i]){
            if(dfs(graph,n,visited,i))return false;
        }
    }
    return true;
}

bool canFinish(int numCourses, int** prerequisites, int prerequisitesSize, int* prerequisitesColSize) {
        int ** graph = ( int **)malloc(sizeof(int *)*numCourses);
        for(int i = 0 ; i < numCourses ; i ++){
            graph[i]=(int *)calloc(numCourses,sizeof(int));
        }
        for(int i = 0 ; i < prerequisitesSize ; i++){
            graph[prerequisites[i][1]][prerequisites[i][0]]=1;
        }
        return cycle(graph,numCourses);
}