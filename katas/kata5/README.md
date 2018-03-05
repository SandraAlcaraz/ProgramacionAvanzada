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

###An�lisis###
```
Primeramente, necesitamos separar a las palabras. As� que primero recibimos un String cada vez que encontremos un espacio:
Esto lo haremos en una funci�n "CleanString(String)"{


-- ignoraremos los signos de puntuaci�n (" , . ' :) etc.
-- separaremos por espacios
-- Cada palabra que obtengamos la pasamos a min�sculas


En cunto filtremos cada palabra con una funci�n hash, veremos si la palabra que queda est� guardada como key.
Si no es as�, la a�adimos a las hash table e inicializamos la variable en 1. 
Si s� la encontramos entonces le sumamos 1 al valor que guarde esa key. 


}


```


Soluci�n:
Esta soluci�n es de O(N), porque recorremos el array s�lo una vez y en esa vez guardamos lo correspondiente en la hashtable.


Comentario:
Por el taller vertical, entre semana subo el c�digo. 



