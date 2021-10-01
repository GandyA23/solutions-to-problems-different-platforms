private fun readLn() = readLine()!!         
private fun readInt() = readLn().toInt()

fun main () {
    val t = readInt()
    
    for (i in 1..t) {
        val letters = mutableMapOf('A' to 0, 'B' to 0, 'C' to 0)
        val word = readLn()

        for (c in word) {
            letters.put(c, letters[c]!!.plus(1))
        }

        if (letters['A']!!.plus(letters['C']!!.toInt()) == letters['B']) 
            println("YES")
        else 
            println("NO")
    }
}