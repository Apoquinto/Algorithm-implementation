#Función sin DP ni optimización
def Hanoi (plato):
  if ( plato == 1 ):
    return 1
  
  return 2*Hanoi(int(plato)-1)+1

#Entrada de datos
platos = input()

#Salida de datos
print(Hanoi(platos))