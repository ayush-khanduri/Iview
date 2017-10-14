/*input
5
1
2
3
4
5
*/
// Insertion at start 
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
			head->next=NULL;
			start=head;
		}
		else
		{
			head->next=(struct node*)malloc(sizeof(node));
			head->next->data=d;
			head=head->next;
		}
	}
	head=start;
	cout<<"Linked List\n";
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}