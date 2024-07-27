class Node:
    def __init__(self , data):
        self.data = data
        self.next = None

def findLowest(head):
    minValue = head.data
    currentNode = head.next
    while currentNode:
        if currentNode.data < minValue:
            minValue = currentNode.data
        currentNode = currentNode.next
    return minValue

Node1 = Node(7)
Node2 = Node(11)                
Node3 = Node(3) 
Node4 = Node(2) 
Node5 = Node(9)

Node1.next = Node2
Node2.next = Node3
Node3.next = Node4
Node4.next = Node5

print("The Lowest Value is => " , findLowest(Node1))                
