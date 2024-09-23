 //For Array 
 
 #include <stdio.h>
 
 
 int main(){
     int arr[] = {45,98,3}; //size of array 4 bytes  therefore , 4*3 = 12/ 4 = 3
     int n ,i; // int n is 4 byte for 1 array element .
    
     
     // no of elemenets = size of whole array / size of 1 array .
     
     n = sizeof(arr)/sizeof(int);
     for (i=0; i<n; i ++){  //printing the data .
         
         printf("%d\n" ,arr[i]);
        
     }

   return 0 ;

 }
 
 
 
 