int maxArea(int* height, int heightSize) {
    int maxarea = 0; 
    int area = 0;
    int front=0;
    int back = heightSize-1; 
    while( front != back && front < heightSize && back >= 0  ){
        if(height[front]>=height[back]){
            area = (back - front)*height[back];
            if(maxarea < area)
                maxarea = area;
            back--;
        }else{
            area = (back - front)*height[front];
            if(maxarea < area)
                maxarea = area;
            front++;
        }
    }
    return maxarea;
}