#include<iostream>

using namespace std;

class Node
{
    private:
        int data;
        Node * next;
    public:
        Node * ekle(int);
        void listele(void);
        void sil(int);
};
Node * Node::ekle(int new_data)
{
    Node * new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = this;

    return new_node;
}

void Node::listele(void)
{
    Node * ptr;
    ptr = this;
    int say = 1;

    while(ptr != NULL)
    {
        cout << say << ". Eleman: " << ptr -> data << endl;
        say += 1;
        ptr = ptr -> next;
    }
}
void Node::sil(int sira)
{
    Node * ptr;
    ptr = this;
    int say = 1;
    
    while(ptr != NULL)
    {
        if(say == sira -1)
            break;
        say += 1;
        ptr = ptr -> next;
    }
    Node * tmp = ptr -> next;
    ptr -> next = tmp -> next;

    delete(tmp);
}

int main(void)
{
    Node * h = NULL;

    h = h -> ekle(1);
    h = h -> ekle(2);
    h = h -> ekle(3);
    h = h -> ekle(4);
    h = h -> ekle(5);

    cout << "ogeler listeleniyor:\n";
    h -> listele();

    cout << "3. oge silindi, kalani devam:\n";
    h -> sil(3);
    h -> listele();

    return 0;
}