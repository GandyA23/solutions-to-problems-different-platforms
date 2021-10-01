fun readLn() = readLine()!!
fun readInt() = readLn().toInt()
fun readStrings() = readLn().split(" ") // list of strings
fun readInts() = readStrings().map { it.toInt() }   

fun main() {

    val t = readInt()

    for (i in 1..t) {
        val (a,  b) = readInts()
        println(a+b)
    }
}