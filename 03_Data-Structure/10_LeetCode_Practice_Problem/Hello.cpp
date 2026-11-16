#include<bits/stdc++.h>
using namespace std;
int main(){

    


The problem asks us to remove all nodes with a given value from a linked list.
My first thought is that we need to carefully handle the head node, because it might also need to be removed.
For the rest of the list, we can traverse it and remove nodes by skipping over nodes whose value matches val.
Using a while loop for the head and then iterating the rest of the list ensures we don’t miss consecutive nodes with the target value.



















    return 0;
}