class Node:
    def __init__(self , data):
        self.data = data
        self.next = None

def traversePrint(head):
    currentNode = head
    while currentNode:
        print(currentNode.data , end="->")
        currentNode = currentNode.next
    print("null")

def DeleteNode(head , nodeToDelete):
    if head == nodeToDelete:
        return head.next

    currentNode = head
    while currentNode.next and currentNode.next != nodeToDelete:
        currentNode = currentNode.next

    if currentNode.next is None:
        return head

    currentNode.next = currentNode.next.next
    return head

Node1 = Node(4)
Node2 = Node(5)                
Node3 = Node(6) 
Node4 = Node(7) 
Node5 = Node(8)

Node1.next = Node2
Node2.next = Node3
Node3.next = Node4
Node4.next = Node5
print("Befor Deletion:")
traversePrint(Node1)

Node1 = DeleteNode(Node1 , Node1)

print("After Deletion")
traversePrint(Node1)
