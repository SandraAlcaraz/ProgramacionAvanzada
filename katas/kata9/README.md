You've built an inflight entertainment system with on-demand movie streaming.

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

Assume your users will watch exactly two movies
Don't make your users watch the same movie twice
Optimize for runtime over memory

Solución:
Tenemos que encontrar dos películas que sumadas nos den el tiempo exacto de la duración del vuelo.
La manera más óptima de lograrlo es con una hashtable que tenga como llave el tiempo de duración de todas las películas y dentro de esta llave se almacenen las películas con la misma duración.
De esta manera primero recorremos un arreglo que almacene las películas, con la duración de la primer película buscaremos su complemento en la hashtable de tal manera que se irá iterando hasta que encontremos una película diferente a la actual que juntas nos den la duración de la película.
