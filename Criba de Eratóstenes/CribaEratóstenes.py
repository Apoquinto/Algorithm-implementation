maxi = input()
multiplos = set()
for i in range(2, int(maxi)+1):
   if i not in multiplos:
     print(i, end = ' ' )
     multiplos.update(range(i*i, int(maxi)+1, i))
