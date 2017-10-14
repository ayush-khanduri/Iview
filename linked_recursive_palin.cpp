/*input
4
1
2
3
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
int cnt=0,ans=0;

node* check_palin(node* start,node* ptr,int t)
{
	cnt++;
	if(ptr==NULL)
		return NULL;
	if(cnt==(t/2)+1)
	{
		cout<<ptr->data<<endl;
		if(t%2)
		return ptr->next;
		else
		return ptr;
	}
	node *ptr1;
	ptr1=check_palin(start,ptr->next,t);
	if(ptr1==NULL)
		return NULL;
	if(ptr->data==ptr1->data)
	{
		ans++;
	}
	return ptr1->next;
}

int main()
{
	int t,d,val,i;
	cin>>t;
	node *head;
	start=NULL;
	i=1;
	while(i<=t)
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
		i++;
	}
	head->next=NULL;
	head=start;
	cout<<"Linked List\n";
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
	
	check_palin(start,start,t);
	if(ans==t/2)
		cout<<"\nPalindrome";
	else
		cout<<"\nNot Palindrome";
}