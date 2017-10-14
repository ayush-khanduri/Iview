/*input
5
1
2
3
4
5
*/
// Reversing LL using pointers (O(1) space)
#include<bits/stdc++.h>

using namespace std;

struct node
{
	node *next;
	int data;
}*start;

stack<int> s;
int main()
{
	int t,d,val;
	cin>>t;
	node *head;
	start=NULL;
	while(t--)
	{
		cin>>d;
		if(start==NULL)
		{
			head=(struct node*)malloc(sizeof(node));
			head->data=d;
			start=head;
		}
		else
		{
			head->next=(struct node*)malloc(sizeof(node));
			head=head->next;
			head->data=d;   
		}
	}
	head->next=NULL;
	head=start;
	cout<<"Initial LL\n";
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}

	node *ptr1,*ptr2,*ptr3;

	// Reversing
	ptr1=start;
	ptr2=start->next;
	ptr3=NULL;
	ptr1->next=NULL;
	while(ptr2!=NULL)
	{
		ptr3=ptr2->next;
		ptr2->next=ptr1;
		ptr1=ptr2;
		ptr2=ptr3;
	}
	start=ptr1;

	head=start;
	cout<<"\nReversed LL\n";
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}