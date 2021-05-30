## Nivel: Difícil

# Descripción

Dado un arreglo de enteros, retorna un nuevo arreglo de modo que cada elemento en el índice `i` del nuevo arreglo es el producto de todos los números del arreglo original excepto el de `i`.

Por ejemplo, si la entrada es `[1, 2, 3, 4, 5]`, la salida esperada debe ser `[120, 60, 40, 30, 24]`. Si la entrada fue`[3, 2, 1]`, la salida esperada debe ser `[2, 3, 6]`.

Bonus: ¿qué pasa si no puede usar la división? 

# Solución
Este problema sería fácil con la división: una solución óptima sería simplemente encontrar el producto de todos los números en el arreglo y luego dividir por cada uno de los números.

Sin división, otro enfoque sería ver primero que el elemento `i`<sup>`th`</sup> simplemente necesita el producto de los números antes de `i` y el producto de los números después de `i`. Luego, podríamos multiplicar esos dos números para obtener nuestro producto deseado. 

Para encontrar el producto de los números antes de `i`, podemos generar una lista de productos de prefijo. Específicamente, el `i`<sup>`th`</sup> elemento de la lista sería un producto de todos los números, incluido `i`. Del mismo modo, generaríamos la lista de productos de sufijo. 

```cpp
typedef vector<int> vi;

vi products (vi nums) {
	int i = 0, n = nums.size();
	vi prefix, suffix, results, numsRev;

	numsRev = nums;
	reverse(numsRev.begin(), numsRev.end());

	// Generate prefix and suffix products
	for (i=0; i<n; i++) {
		if (i) {
			prefix.push_back(prefix[i-1] * nums[i]);
			suffix.push_back(suffix[i-1] * numsRev[i]);
		} else {
			prefix.push_back(nums[i]);
			suffix.push_back(numsRev[i]);
		}
	}

	reverse(suffix.begin(), suffix.end());

	// Generate result
	for (i=0; i<n; i++) {
		if (!i) {
			results.push_back(suffix[i+1]);
		} else if (i == n-1) {
			results.push_back(prefix[i-1]);
		} else {
			results.push_back(prefix[i-1] * suffix[i+1]);
		}
	}
	return results;
}
```

Esto se ejecuta en el tiempo y el espacio `O(N)`, ya que iterar sobre las matrices de entrada toma tiempo `O(N)` y crear las matrices de prefijos y sufijos ocupa el espacio `O(N)`. 