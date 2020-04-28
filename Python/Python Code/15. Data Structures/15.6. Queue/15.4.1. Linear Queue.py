
# Creation of Queue
class Queue:
    def __init__(self):
        self.items = []

    def isEmpty(self):
        print(bool(len(self.items)==0))

    def enqueue(self, item):
        self.items.append(item)

    def dequeue(self):
        return self.items.pop(0)

    def size(self):
        return len(self.items)

    def printall(self):
        print(self.items)
    def peek(self):
        print(self.items[-1])


q = Queue()
q.isEmpty()
q.enqueue(1)
q.enqueue(2)
q.enqueue(3)
q.printall()
q.dequeue()
q.printall()
q.peek()
q.isEmpty()