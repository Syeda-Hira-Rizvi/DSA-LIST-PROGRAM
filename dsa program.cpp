#include<iostream>
#include <stdlib.h>

using namespace std;

int n;
int N;

bool isFull(void){
	if (n==N)
	return true;
	else
	return false;
}

bool isEmpty(void){
	if (N==0)
	return true;
	else
	return false;
}

void insertAtZero(int array[], int value){
	if (isFull()){
		cout<<"list is full"<<endl;
	}
	else{
		cout<<"enter the value you want to insert: ";
		cin>>value;
		for(int i=N-1;i>=0;i--)
		{
			array[i+1]=array[i];
		}
		array[0]=value;
		N=N+1;
	}
}

void insertAtk(int array[], int value,int k){
		if (isFull()){
		cout<<"list is full"<<endl;
	}
	else{
		cout<<"enter the value you want to insert: ";
		cin>>value;
		for (int i=N-1; i>=k-1; i--){
			array[i+1]=array[i];
		}
		array[k-1]=value;
		N=N+1;
	}
}

void insertAtEnd(int array[], int value){
		if (isFull()){
		cout<<"list is full"<<endl;
	}
	else{
		cout<<"enter the value you want to insert: ";
		cin>>value;
		array[N]=value;
		N=N+1;
		}
}

void DeleteAtZero(int array[]){
	if (isEmpty()){
		cout<<"list is empty "<<endl;
	}
	else{
		for(int i=0;i<N;i++)
		{
			array[i]=array[i+1];
		}
		N=N-1;
	}
}

void DeleteAtk(int array[],int k){
	if (isEmpty()){
		cout<<"list is empty "<<endl;
	}
	else{
		for(int i=k-1;i<N;i++)
		{
			array[i]=array[i+1];
		}
		N=N-1;
	}
}

void DeleteAtEnd(int array[]){
	if (isEmpty()){
		cout<<"list is empty "<<endl;
	}
	else{	
		N=N-1;
	}
}

void search(int array[], int value){
	bool found=false;
	cout<<"enter the value you want to search: ";
	cin>>value;
	for (int i = 0; i<N; i++){
		if(array[i]==value)
		{
			found=true;
			break;
		}		
	}
	if(found==true)
	{
		cout<<"Searched value is present in the list "<<endl;
	}			
	else 
	cout<<"Searched value is not present in the list "<<endl;
}

void display(int array[]){
	cout<<"displaying:" <<endl;
	for (int i = 0; i<N; i++){
		cout<<array[i]<<endl;
	}
}

int main(){
	int array[]={};
	cout<<"enter size of array: ";
	cin>>n;
	cout<<"enter size of list: ";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		cout<<"Enter elements of list: ";
		cin>>array[N];	
	}
	int value, choice,k;
	while (true){
		cout<<"enter 1 to insert at zero\n";
		cout<<"enter 2 to insert at k\n";
		cout<<"enter 3 to insert at end\n";
		cout<<"enter 4 to Delete at zero\n";
		cout<<"enter 5 to Delete at k\n";
		cout<<"enter 6 to Delete at end\n";
		cout<<"enter 7 to search\n";
		cout<<"enter 8 to display\n";
		cout<<"enter 9 to exit\n";
		cout<<"enter your choice\n";
		cin>>choice;
		
		if (choice==0) 
		break;
		else{
			switch (choice){
				case 1: {
					insertAtZero(array, value);
					break;
				}
				case 2:{
					cout<<"Enter the position at which you want to insert value";
					cin>>k;
					if(k>=0&&k<=N)
					{
						insertAtk(array, value,k);
					}
					else
					{
						cout<<"Invalid position entered.";
					}
					
					break;
				}
				case 3:{
					insertAtEnd(array, value);
					break;
				}
				case 4: {
					DeleteAtZero(array);
					break;
				}
				case 5:{
					cout<<"Enter the position at which you want to delete value";
					cin>>k;
					if(k>=0&&k<=N)
					{
					DeleteAtk(array,k);
					}
					else{
						cout<<"Invalid position entered.";
					}
					break;
				}
				case 6:{
					DeleteAtEnd(array);
					break;
				}
				case 7: {
					search(array,value);
					break;
				}
				case 8: {
					display(array);
					break;
				}
				case 9: {
					exit(0);
				}
				default :{
					cout<<"invalid choice";
					break;
				}
				
			}
		}
		}
		return 0;
	}
