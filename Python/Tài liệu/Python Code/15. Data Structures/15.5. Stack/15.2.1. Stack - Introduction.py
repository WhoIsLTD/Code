class Stack:
#Creates an empty stack.
    def __init__(self):
        self.items = list()
# Returns True if the stack is empty or False otherwise.
    def isEmpty(self):
        return len(self) == 0
# Returns the number of items in the stack.
    def __len__ ( self ):
        return len(self.items)
# Returns the top item on the stack without removing it.
    def peek( self ):
        assert not self.isEmpty(), "Cannot peek at an empty stack"
        return self.items[-1]
# Removes and returns the top item on the stack.
    def pop( self ):
        assert not self.isEmpty(), "Cannot pop from an empty stack"
        return self.items.pop()
# Push an item onto the top of the stack.
    def push( self, item ):
        self.items.append( item )

s = Stack()
s.push(1)
s.push(2)
s.push(3)
print(s.items)
s.pop()
print(s.items)



# Without class or anything else:
stack3 = ["A","B","C"]
print("Stack3", stack3)
stack3.append("D")
print("Stack3 after append", stack3)
stack3.pop()
print("After pop", stack3)

