class Node:
    def __init__(self , data):
        self.data = data
        self.next = None

Node1 = Node(3)
Node2  = Node(8)
Node3 = Node(11)
Node4 = Node(18)

Node1.next = Node2
Node2.next = Node3
Node3.next = Node4

currentNode = Node1
while currentNode:
    print(currentNode.data , end="->")
    currentNode = currentNode.next
print(None)    


  