/*input
5
1
2
3
4
5
1
*/
// Insertion in end + Deletion by value
#include<bits/stdc++.h>

using namespace std;

struct node
{
	node *next;
	int data;
}*start;

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
	cout<<"Linked List\n";
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	cin>>val;
	head=start;
	node *ptr=start->next;

	//start me
	if(head->data==val)
		start=head->next;

	//anywhere else
	else
	while(head!=NULL)
	{
		if(ptr->data==val)
		{
			head->next=ptr->next;
		}
		ptr=ptr->next;
		head=head->next;
	}
	cout<<"\nAfter Deletion\n";
	head=start;
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}