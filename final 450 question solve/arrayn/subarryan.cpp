  #include <iostream>
 using namespace std;
 
 int main (){


   int arr[] = {  113, 90, 44, 44, 63, 52, 47, 22, 39, 37, 45, 43, 36, 24, 37, 27, 30, 21, 37, 49, 
    89, 95, 141, 52, 40, 50, 27, 58, 22, 26, 55, 27, 43, 95, 28, 43, 37, 29, 95, 143, 
    55, 61, 71, 59, 36, 28, 31, 65, 48, 45, 23, 64, 68, 50, 37, 65, 63, 48, 80, 27, 
    51, 23, 33, 23, 14, 32, 18, 18, 20, 17, 8, 19, 34, 33, 33, 40, 25, 29, 21, 22, 
    37, 34, 30, 20, 11, 24, 26, 25, 51, 17, 20, 26, 17, 27, 26, 50, 27, 46, 16, 27, 
    33, 27, 42, 37, 11, 20, 25, 26, 9, 30, 20, 18, 8, 22, 8, 30, 13, 31, 89};

    int size = sizeof(arr)/ sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
                if (arr[j])
                {
                    /* code */
                }
                
        }
        
    }
    
 } 

