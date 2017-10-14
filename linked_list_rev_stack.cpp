/*input
5
1
2
3
4
5
*/
// Reversing LL using stack (O(n) space)
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
	// Inserting into stack
	cout<<"Initial LL\n";
	while(head!=NULL)
	{
		s.push(head->data);
		cout<<head->data<<" ";
		head=head->next;
	}
	head=start;
	while(head!=NULL)
	{
		head->data=s.top();
		s.pop();
		head=head->next;
	}
	cout<<"\nReversed LL\n";
	head=start;
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}