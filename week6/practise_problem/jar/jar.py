class Jar:
    def __init__(self, capacity=12):
        if capacity < 0:
            raise ValueError('wrong capacity')
        self._capacity = capacity
        self._size = 0

    def __str__(self):
        return self.size * '🍪'


    def deposit(self, n):
        if n > self.capacity:
            raise ValueErro('Exceed capacity')
        if self.size + n > self.capacity:
            raise ValueErro('Exceed capacity')
        self._size += n

    def withdraw(self, n):
        if self.size < n:
            raise ValueError('Less cookies then asked removed')
        self._size -= n

    @property
    def capacity(self):
        return self._capacity

    @property
    def size(self):
        return self._size


jar = Jar()
print(str(jar.capacity))
print(str(jar))
jar.deposit(2)
print(str(jar))
jar.withdraw(1)
print(str(jar))
