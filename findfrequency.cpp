#include <iostream>
using namespace std;

int findFrequency(int array[], int length, int target){
	int low=0;
	int mid=0;
	int high=length-1;
	int counter=0;
	
	
	while(low <= high){
		mid= (high+low)/2;
		if (array[mid]==target){
			counter ++;
			for(int templeft=mid+1; array[templeft] == target && templeft<length; templeft++){
				counter++;
			}
			for(int tempright=mid-1; array[tempright] == target && tempright> -1; tempright--){
				counter++;
			}
			break;

		}
		else if(array[mid]>target){
			high=mid-1;
		}
		
			
		else if(array[mid]<target){
			low=mid+1;
		}
		
	}


	return counter;
}

int main(){
	int input_array[]={1,1,1,2,3,3,3,4,5,5,6,6,7,7,7,7,7,7};
	cout<<findFrequency(input_array,18,4);
	
}
