## Nivel: Fácil

# Descripción

Dada una lista de números y un número `k`, devuelva si dos números cualesquiera de la lista suman `k`.

Por ejemplo, dado `[10, 15, 3, 7]` y `k = 17`, devuelve verdadero ya que `10 + 7 = 17`.

# Solución 
Este problema puede resolverse de diferentes maneras.

La solución con la fuerza bruta implicaría una iteración anidada para verificar cada par de números:

```cpp
bool twoSum (int arr[], int n, int k) {
	int i, j ;
	int m = n-1;

	for (int i=0; i<m; i++) {
		for (int j=i+1; j<n; j++) {
			if (arr[i] + arr[j] == k) {
				return true;
			}
		}
	}
	return false;
}
```

Esto tomaría `O(N*N)`. Otra forma es usar un set para recordar los números que hemos visto hasta ahora. Luego, para un número dado, podemos verificar si hay otro número que, si se suma, sumaría `k`. Esto sería `O(N)` ya que las búsquedas de conjuntos son `O(1)` cada una.

```cpp
set<int> numbers ;
set<int>::iterator it ;
bool twoSum (int arr[], int n, int k) {
	int aux;
	for (int i=0; i<n; i++) {
		aux = k - arr[i];
		it = numbers.find(aux);

		if (it != numbers.end()) {
			return true;
		}
		 
		numbers.insert(aux);
	}
	return false ;
}
```

Otra solución más consiste en ordenar la lista. Luego podemos iterar a través de la lista y ejecutar una búsqueda binaria en `k - arr[i]`. Dado que ejecutamos una búsqueda binaria en `N` elementos, esto tomaría `O(N log N)` con `O(1)` espacio. 

```cpp
bool binarySearch (int arr[], int n, int x) {
	int l = 0;
	int r = n-1;
	int mid;

	while (l+1 < r) {
		mid = (l+r)/2;

		if (arr[mid] == x) {
			return true;
		} else if (arr[mid] < x) {
			r = mid;
		} else {
			l = mid;
		}
	}
	
	return arr[l] == x || arr[r] == x ;
}

bool twoSum (int arr[], int n, int k) {
	int target;
	bool aux;

	sort(arr, arr+n);

	for (int i=0; i<n; i++) {
		target = k - arr[i];

		aux = binarySearch(arr, n, target);

		if (aux) {
			return true;
		} 
	}

	return false;
}
```
