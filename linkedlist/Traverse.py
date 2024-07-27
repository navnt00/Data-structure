class Node:
    def __init__(self , data):
        self.data = data
        self.next = None

def TraversePrint(head):
    currentNode = head
    while currentNode:
        print(currentNode.data , end="->")
        currentNode = currentNode.next
    print("null") 

Node1 = Node(4)
Node2 = Node(5)                
Node3 = Node(6) 
Node4 = Node(7) 
Node5 = Node(8)

Node1.next = Node2
Node2.next = Node3
Node3.next = Node4
Node4.next = Node5

TraversePrint(Node1)