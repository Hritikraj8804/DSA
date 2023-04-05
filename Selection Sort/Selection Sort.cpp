#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node * next;
};
typedef struct Node NODE;
NODE *Head=NULL,*Tail=NULL;

void insert(NODE *NN)
{
    if(Head==NULL && Tail==NULL)
    {
        Head=NN;
        Tail=NN;
    }
    else 
    {
        Tail->next=NN;
        Tail=NN;
    }
}

NODE * delete()
{
    NODE *temp,*dn;
    if(Head==NULL && Tail==NULL)
    {
        return NULL;
    }
    if(Head==Tail)
    {
        dn=Head;
        Head=NULL;
        Tail=NULL;
        return dn;
    }
    else
    {
        temp=Head;
        while(temp->next->next)
        {
            temp=temp->next;
        }

        temp->next=NULL;
        dn=Tail;
        Tail=temp;
    }
    return dn;
}

int count()
{
    NODE *temp;
    temp=Head;
    int ct=0;
   
    while(temp!=NULL)
     {
       
        temp=temp->next;
        ct++;
       
    }
    return ct;
}

void insert_head(NODE *NN)
{
	if(Head==NULL && Tail==NULL)
	{
		Head=NN;
		Tail=NN;
	}
	else
	{
		NN->next=Head;
		Head=NN;
	}
}

NODE * delete_head()
{
	NODE *temp;
	if(Head==NULL && Tail==NULL)
	{
		return NULL;
	}
	else if(Head==Tail)
	{
		temp=Head;
		Head=NULL;
		Tail=NULL;
		return temp;
	}
	else
	{
		temp=Head;
		Head=Head->next;
		temp->next=Head;
		return temp;
	}
}

int search(int n)
{
	NODE *temp = Head;
	int ct=0;
	while(temp)
	{
		if(temp->data==n)
		{
			ct++;
		}
		temp=temp->next;
	}
	return ct;
}

void rev_ele(int cnt)
{
	int arr[cnt],i;
	NODE *temp;
	temp=Head;
	for(i=0;i<cnt;i++)
	{
		arr[i]=temp->data;
		temp=temp->next;
	}
	for(i=cnt-1;i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int main()
{
    NODE *NN,*temp,*res;
    int ch,val,ct;
    while(1)
    {
        printf("1.insert 2.delete 3.display 4.count 5.insert_head 6.delete_head 7.search 8.reverse_ele 9.exit:");
        scanf("%d",&ch);
        if(ch==1)
        {
            //insert
            scanf("%d",&val);
            NN=(NODE*)malloc(sizeof(NODE));
            NN->data=val;
            NN->next=NULL;
            insert(NN);

        }
        else if(ch==2)
        {
             //delete
            res = delete();
            if(res==NULL)
            {
                printf("No node\n");
            }
            else
            {
                printf("%d\n",res->data);
                free(res);
            }
            

        }
        else if (ch==3)
        {
            //display
            if(Head==NULL&&Tail==NULL)
            {
                printf("No Node present\n");
            }
            else
			{
                temp=Head;
            	while (temp)
            	{
                /* code */
                printf("%d %d %d\n",temp,temp->data,temp->next);
                temp=temp->next;
            	}
            
            }
        }
        else if (ch==4)
        {
            printf("%d\n",count());
        }
        else if (ch==5)
        {
            scanf("%d",&val);
            NN=(NODE*)malloc(sizeof(NODE));
            NN->data=val;
            NN->next=NULL;
            insert_head(NN);//add
        }
        else if (ch==6)
        {
        	res=delete_head(NN);
        	if(res==NULL)
        	{
        		printf("No Node Present\n");
			}
			else
			{
				printf("%d\n",res->data);
			}
		}
		else if(ch==7)
		{
			scanf("%d",&val);
			printf("%d\n",search(val));
		}
		else if(ch==8)
		{
			rev_ele(count());
		}
        else
        {
            break;
        }
        
    }
}