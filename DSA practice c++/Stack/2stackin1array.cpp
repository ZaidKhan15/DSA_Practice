#include<iostream>
#include<stack>
using namespace std;




//SPACE EFFICIENT AS WE ARE PUSHING IN STACK1 FROM THE START AND IN STACK2 FROM THE END
//UNTIL THERE IS NO SPACE LEFT FOR STORING THE ELEMENT IN EITHER OF THE STACK

void twoStacks :: push1(int x)
{
   
if((top2 - top1) > 1){
    arr[++top1] = x;
}

}
   
//Function to push an integer into the stack2.
void twoStacks ::push2(int x)
{
    if((top2 - top1) > 1){
    
    arr[--top2] = x;
}


}
   
//Function to remove an element from top of the stack1.
int twoStacks ::pop1()
{
    if(top1>=0){
        int ans = arr[top1--];
        
        return ans;
    }
  
    else{
        return -1;
    }

}

//Function to remove an element from top of the stack2.
int twoStacks :: pop2()
{
 if(top2<size){
     int ans = arr[top2++];
       
        return ans;
    }

    else{
       return -1;
    }
}


int main(){
    return 0;
}