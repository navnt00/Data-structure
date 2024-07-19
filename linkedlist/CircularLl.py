
class Node:
    def __init__(self , data):
        self.data = data
        self.next = None

node1 = Node(3)
node2 = Node(11)
node3 = Node(20)
node4 = Node(15)
node5 = Node(8)

node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5
node5.next = node1

currentNode = node1
startNode = node1
print(currentNode.data  , end="->")
currentNode = currentNode.next

while currentNode != startNode:
    print(currentNode.data , end="->")
    currentNode = currentNode.next

print(".....")

