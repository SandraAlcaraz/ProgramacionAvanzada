Kata 0

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

An�lisis:


Supondremos que est� ordenado el arreglo
y que siempre habr� en �l dos n�meros los cuales:
ser�n positivos y su suma ser� igual al target.

Caso 1:
     Si tenemos un arreglo de 2 elementos la soluci�n ser�: [0,1]

Caso 2:
     Nuestro arreglo tiene m�s de dos elementos, por lo que en este 
caso nuestra soluci�n trivial no funciona.

Caso 3:
     Si tenemos un arreglo de m�s de 2 elementos y este se encuentra
desordenado podemos aplicar un algoritmo de ordenamiento, 
as� que esto nos tomar�a O(n) si utilizamos un radixSort.


Soluci�n 
Creamos una hashTable,
- a�adimos cada elemento del array a esta  = O(n)
- despu�s recorremos el array, a con cada elemento del arreglo hacemos lo siguiente:
		resta= target-array[i];
		busca(resta);
    Esta operaci�n nos toma O(n).

=> Caso 2 = 2 * O(n) ---> O(n)

=> Caso 3 = 3* O(n) ---> O(n)


Por lo que nuestra soluci�n toma O(N) :) 



