1005. Stone Pile

Memory limit: 64 MB
´´´
You have a number of stones with known weights w1, …, wn. 
Write a program that will rearrange the stones into two piles such that weight difference between the piles is minimal.
Input
Input contains the number of stones n (1 = n = 20) and weights of the stones w1, …, wn (integers, 1 = wi = 100000) delimited by white spaces.
Output
Your program should output a number representing the minimal possible weight difference between stone piles.

´´´
Contexto
´´´
Se tiene que escribir un código el cual nos ordene todos los pesos de las piedras en 2 filas, estas filas contienen a las piedras y la diferencia de pesos entre estas dos es la mínima.
Necesitamos:
 --declarar 2 arreglos de números enteros positivos f1[] y f2[].
 -- 2 variables enteras que cuenten el peso que se lleva en cada arreglo w1 y w2
 -- ar[] para guardar al input ordenado. 
´´´
Análisis
´´´
No podemos apilar las piedras sin antes ordenar, porque puede pasar lo siguiente:

input: {5, 49, 1, 33, 4, 2}

f1[]={5, 1, 4}
f2[]={49,33, 2}
w1=10
w2=84

output: 74

Por lo que necesitamos usar un algoritmo de ordenamiento. 
´´´

´´´
Después de ordenar tenemos:
input: {5, 49, 1, 33, 4, 2}
ar[]={1, 2, 4, 5, 33, 49}

f1[]={49, 5, 2}
f2[]={33, 4, 1}
w1=56
w2=38

output: 18
Podríamos disminuir esto comparando el peso actual antes de seguir sumando más piedras. 
´´´ 


´´´
Ahora comparando antes de seguir sumando:
input: {5, 49, 1, 33, 4, 2}
ar[]={49, 33, 5, 4, 2, 1}

f1[]={49}
f2[]={33}
w1=49
w2=33

como el que tiene menor peso es el f2[] al siguiente que le vamos a agregar es a ese.

f1[]={49}
f2[]={33, 5}
w1=49
w2=38

como el que tiene menor peso es el f2[] al siguiente que le vamos a agregar es a ese.

f1[]={49}
f2[]={33, 5, 4}
w1=49
w2=42


f1[]={49}
f2[]={33, 5, 4, 2}
w1=49
w2=44


f1[]={49}
f2[]={33, 5, 4, 2, 1}
w1=49
w2=45


output 4

´´´
Breakdowm

´´´
Utilizaremos el algoritmo de mergesort para ordenar las piedras, como sólo son 20, la complejidad de esto se vuelve despresiable. 
De tal manera que nos queden primero las más pesadas en los primeros lugares. 
Después vamos acomodando de manera que se intenten equilibrar los pesos de las dos filas, es decir a la fila actual que tenga menor peso es a la que le seguiremos sumando piedras.
la diferencia entre w1 y w2, será nuestro output. 


´´´