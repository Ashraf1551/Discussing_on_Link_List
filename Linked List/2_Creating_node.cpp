#include <bits/stdc++.h>
using namespace std;

class Node// Node class বা গ্রুপ
{
    public:
    int val;        //Node এর value
    Node *next;     //next node এর address/pointer
};

int main() {
    Node a, b; //দুইটা node a এবং b নেয়া হচ্ছে

    a.val = 10;//a তে value রাখা হচ্ছে
    b.val = 20;//b তে value রাখা হচ্ছে

    a.next = &b;//a এর next/pointer এ b node এর address রাখা হচ্ছে
    b.next = NULL;//b যেহেতু last node তাই b এর next NULL রাখা হচ্ছে

    cout<<a.val<<endl;
    cout<<b.val<<endl;
    cout<<(*a.next).val;        //এখানে b এর value a কে dereference করে print করে দেখলাম
    cout<<a.next->val<<endl;    //অন্যভাবে deference করে b এর ভ্যালু প্রিন্ট করে দেখলাম
    return 0;
}