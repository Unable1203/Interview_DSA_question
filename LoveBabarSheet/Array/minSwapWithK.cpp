// Problem - 32
class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        deque<int>dq;          
        int count=0;
        for(int i=0;i<n;i++){        // LOOP TO FIND HOW MANY ELEMENTS
            if(arr[i]<=k){           //  ARE <=K IN THE ARRAY
                count++;
            }
        }
        int count2=0,maximumer=INT_MIN;
        for(int i=0;i<count;i++){     //LOOP INITIATES THE SLIDING WINDOW
            dq.push_back(arr[i]);     //WITH 1ST SET OF NUMBERS. THE WINDOW 
            if(dq.back()<=k){         //SIZE='NO. OF ELEMENTS<=K'
                count2++;
            }
        }
        maximumer=max(maximumer,count2);
        for(int j=count;j<n;j++){ //TO SLIDE THE WINDOW BY ELIMINATING FROM 
            if(dq.front()<=k){    //FRONT AND PUSHING AT BACK SIMULTANEOUSLY
                count2--;         
            }
            dq.pop_front();
            if(arr[j]<=k){
                count2++;
            }
            dq.push_back(arr[j]);           //MAX THE GROUP OF SUCH NO. PRESENT 
            maximumer=max(maximumer,count2); //MIN THE REQUIRED OPERATIONS BE
        }
        return count-maximumer;              //RETURN MIN. REQUIRED OPERATIONS
    }
};