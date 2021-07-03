#include<iostream>

using namespace std;

class Node
{
    private:
        int data;
        class Node * next;
    public:
        Node * ekle(int);
        void listele();
        void sil(int);
};
Node * Node::ekle(int new_data)
{
    class Node * new_node = new Node();
    new_node -> data = new_data;
    new_node -> next = this;
    return new_node;
}

void Node::listele()
{
    class Node * ptr;
    ptr = this;
    int say = 1;
    while(ptr != NULL)
    {
        cout << say << ". Eleman: " << ptr -> data << '\n';
        ptr = ptr -> next;
    }
}
void Node::sil(int sira)
{
    class Node * ptr;
    ptr = this;
    int say = 1;
    while(ptr != NULL)
    {
        if(say == sira - 1)
            break;
        say = say + 1;
        ptr = ptr -> next;
    }
    Node * tmp = ptr -> next;
    ptr -> next = tmp -> next;
    delete(tmp);
}

int main(void)
{
    Node *h = NULL;
    h = h -> ekle(3);
    h = h -> ekle(1);
    h = h -> ekle(5);
    h = h -> ekle(7);
    h = h -> ekle(9);

    cout << "bagli liste elemanlari:\n";
    h -> listele();

    cout << "3. eleman siliniyor ve listeleniyor:\n";
    h -> sil(3);
    h -> listele();

    return 0;
}