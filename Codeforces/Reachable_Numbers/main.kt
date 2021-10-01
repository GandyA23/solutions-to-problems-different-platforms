// Read functions
fun readLn() = readLine()!!
fun readInt() = readLn().toInt()

fun f(x: Int): Int {
    var cur = x + 1
    while (cur % 10 == 0) cur /= 10
    return cur
}

fun main() {
    var n = readInt()               // read integer from the input
    val reached = HashSet<Int>()    // a mutable hash set
    while (reached.add(n)) n = f(n) // iterate function f
    println(reached.size)           // print answer to the output
}