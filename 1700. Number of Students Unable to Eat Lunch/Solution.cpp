class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
            
            int circleSandwich = 0;
            int squareSandwich = 0;

            for(int choice : students){
                if(choice == 0) circleSandwich++;
                else squareSandwich++;
            }

            for(int sandwich : sandwiches ){
                
                // base case
                if(sandwich == 0 && circleSandwich == 0) return squareSandwich;
                if(sandwich == 1 && squareSandwich == 0) return circleSandwich;
                
                if(sandwich == 0) circleSandwich--;
                else squareSandwich--;

            }

            return 0;
    }
};