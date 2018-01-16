Kata 0

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].

Análisis:


Supondremos que está ordenado el arreglo
y que siempre habrá en él dos números los cuales:
serán positivos y su suma será igual al target.

Caso 1:
     Si tenemos un arreglo de 2 elementos la solución será: [0,1]

Caso 2:
     Nuestro arreglo tiene más de dos elementos, por lo que en este 
caso nuestra solución trivial no funciona.

Caso 3:
     Si tenemos un arreglo de más de 2 elementos y este se encuentra
desordenado podemos aplicar un algoritmo de ordenamiento, 
así que esto nos tomaría O(n) si utilizamos un radixSort.


Solución 
Creamos una hashTable,
- añadimos cada elemento del array a esta  = O(n)
- después recorremos el array, a con cada elemento del arreglo hacemos lo siguiente:
		resta= target-array[i];
		busca(resta);
    Esta operación nos toma O(n).

=> Caso 2 = 2 * O(n) ---> O(n)

=> Caso 3 = 3* O(n) ---> O(n)


Por lo que nuestra solución toma O(N) :) 



