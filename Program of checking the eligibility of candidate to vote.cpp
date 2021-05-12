// Q. Write a program of checking the eligibility of candidate to vote //

#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter the age of the candidate:"<<endl;
	cin>>age;
	
	if(age<18)
	{
		cout<<"The candidate is less than 18 he is not eligible to vote"<<endl;
		cout<<"The candidate will be eligible to vote after"<<18-age<<"years"<<endl;
	}
	else{
		cout<<"The candidate is eligible to vote.";
		
	}
	return 0;
}

/*Output1:- 
 Enter the age of the candidate:17
The candidate is less than 18 he is not eligible to vote
The candidate will be eligible to vote after1years

Output2:-
Enter the age of the candidate:20
The candidate is eligible to vote*/
