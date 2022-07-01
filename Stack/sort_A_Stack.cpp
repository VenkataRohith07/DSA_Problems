/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
void insert(int x,stack<int>&s){
    if(s.size()==0){
        s.push(x);
        return;
    }
    if(x>=s.top()){
        s.push(x);
        return;
    }
    int x1=s.top();
    s.pop();
    insert(x,s);
    s.push(x1);
    return;
    
}
void SortedStack :: sort()
{
   if(s.size()==0){
       return;
   }
   int x=s.top();
   s.pop();
   sort();
   insert(x,s);
   return;
}

// problem statement : https://practice.geeksforgeeks.org/problems/sort-a-stack/1#
