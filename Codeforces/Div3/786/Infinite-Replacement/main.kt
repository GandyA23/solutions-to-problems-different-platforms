// https://codeforces.com/contest/1674/problem/C

fun readLn() = readLine()!!
fun readInt() = readLn().toInt()

fun checkCombinations (s : String, t : String) : Long {
    var answ : Long = 1

    if (t.length.equals(1) && t.equals("a"))
        return 1L

    for (a : Char in t)
        if (a.equals('a'))
            return -1L

    for (i in 1..s.length)
        // Shift left bits
        answ = answ shl 1

    return answ
}

fun main () {
    for (i in 1..readInt())
        println(checkCombinations(readLn(), readLn()))
}
