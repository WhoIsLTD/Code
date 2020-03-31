class JustCounter:

    secretCount = 0

    def count(self):
        self.secretCount += 1
        print (self.secretCount)


counter = JustCounter()
counter.count()
counter.count()
print (counter.secretCount)