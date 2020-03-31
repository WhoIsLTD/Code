#Push, Pop, append, peek, isempty, get stack

class Stack:
#Creates an empty stack.
    def __init__(self):
        self._theItems = list()
        print(self._theItems)


# Returns True if the stack is empty or False otherwise.
    def isEmpty(self):
        return len(self) == 0


# Returns the number of items in the stack.
    def __len__ ( self ):
        return len( self._theItems )

# Returns the top item on the stack without removing it.
    def peek( self ):
        return self._theItems[-1]

# Removes and returns the top item on the stack.
    def pop( self ):
        return self._theItems.pop()

# Push an item onto the top of the stack.
    def push( self, item ):
        self._theItems.append( item )

    def getstack(self):
        return self._theItems



s = Stack()
print("Is empty", s.isEmpty())
s.push(1)
s.push(2)
s.push(3)
s.push(4)
print("Is empty", s.isEmpty())
print("Get stack details",s.getstack())
print("Length", s.__len__())
s.pop()
print("Is empty", s.isEmpty())
print("Peek",s.peek())
print("Length", s.__len__())
print(s._theItems)
print("Get stack details",s.getstack())


