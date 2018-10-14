# Kata 1
## Find Anagram Mappings

Given two lists Aand B, and B is an anagram of A. B is an anagram of A means B is made by randomizing the order of the elements in A.

We want to find an index mapping P, from A to B. A mapping P[i] = j means the ith element in A appears in B at index j.

These lists A and B may contain duplicates. If there are multiple answers, output any of them.

For example, given

A = [12, 28, 46, 32, 50]  B = [50, 12, 32, 46, 28]  
We should return
[1, 4, 3, 2, 0]  
as  P[0] = 1 because the  0th element of  A appears at  B[1], and  P[1] = 4 because the  1st element of  A appears at  B[4], and so on.
Note:
A, B have equal lengths in range [1, 100].
A[i], B[i] are integers in range [0, 10^5].

##Análisis:
 1. A y B están desordenados
 2. B es el conjunto desordenado de A
 3. A, B tienen la misma longitud, ambos van de [1,100]
 4. El resultado que debemos de regresar depende del orden de B
 5. Además se menciona que ambos tienen enteros entre del rango se [0,10^5]
 6. Se menciona que puede haber números duplicados en A y B


IDEA DE LA SOLUCIÓN:
**_Paso 1_** 
Tenemos que recorrer el arreglo de B y este lo ordenamos de manera que nuestra función hash nos dé como resultado una key igual a la posición del valor de A en el arreglo B.
```
for(int i=0; 0<B.length;i++){
inserta(i,B[i]);
 //i es la posición en B y nuestra llave
// B[i]= el valor que se guara en esa posición dentro el arreglo B
}
```
> Hacer este procedimiento nos demora O(n), porque sólo recorremos a B

**_Paso 2_**

Después de haber insertado los valores de B en nuestra hashtable, usamos la función buscar y le pasamos los elementos de A en orden. Dentro de la función buscar si existen valores duplicados esta de cualquier forma nos regresará alguna llave que corresponda a nuestro value, de manera que lo que las llaves que nos esté regresando las vamos colocando dentro de nuestro arreglo.
```
for(inr i=0; i<A.length; i++){
	b=busca(A[i]);
	C[i]=b;
}
 return C; 
```
