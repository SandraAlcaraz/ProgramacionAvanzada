#Kata 5#

##Problem ##


You want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

To do this, you'll need data. Write code that takes a long string and builds its word cloud data in a hash table ? , where the keys are words and the values are the number of times the words occurred.

Think about capitalized words. For example, look at these sentences:

  "After beating the eggs, Dana read the next step:"

"Add milk and eggs, then add flour and sugar."

What do we want to do with "After", "Dana", and "add"? In this example, your final hash table should include one "Add" or "add" with a value of 

2

2. Make reasonable (not necessarily perfect) decisions about cases like "After" and "Dana".

Assume t

###Análisis###
```
Primeramente, necesitamos separar a las palabras. Así que primero recibimos un String cada vez que encontremos un espacio:
Esto lo haremos en una función "CleanString(String)"{


-- ignoraremos los signos de puntuación (" , . ' :) etc.
-- separaremos por espacios
-- Cada palabra que obtengamos la pasamos a minúsculas


En cunto filtremos cada palabra con una función hash, veremos si la palabra que queda está guardada como key.
Si no es así, la añadimos a las hash table e inicializamos la variable en 1. 
Si sí la encontramos entonces le sumamos 1 al valor que guarde esa key. 


}


```


Solución:
Esta solución es de O(N), porque recorremos el array sólo una vez y en esa vez guardamos lo correspondiente en la hashtable.


Comentario:
Por el taller vertical, entre semana subo el código. 



