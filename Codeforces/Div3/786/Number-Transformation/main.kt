// https://codeforces.com/contest/1674/problem/A

fun readLn() = readLine()!!
fun readInt() = readLn().toInt()
fun readInts() = readLn().split(" ").map {it.toInt()}

fun main () {
    for (i in 1..readInt()) {
        val (x, y) = readInts()

        if (x > y || y % x > 0) {
            println("0 0")
            continue
        }

        println(1.toString().plus(" ").plus(((y/x).toInt().toString())))
    }
}
