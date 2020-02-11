#Función sin DP ni optimización
def combinatoria(n,k):
  if ( k == 0 or n == k ):
    return 1
  else:
    return combinatoria(int(n)-1,int(k)-1) + combinatoria(int(n)-1,int(k))

#Entrada de datos
n = input()
k = input()

#Salida de datos
print(combinatoria(n,k))