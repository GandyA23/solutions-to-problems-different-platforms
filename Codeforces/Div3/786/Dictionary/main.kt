// https://codeforces.com/contest/1674/problem/B

fun readLn() = readLine()!!
fun readInt() = readLn().toInt()

val dic = mutableMapOf<String, Int>()

fun createDictionary () {
    var count : Int = 0
    for (i in 'a'..'z')
        for (j in 'a'..'z') {
            if (i !== j)
                dic[i+""+j] = ++count
        }
}

fun main () {
    createDictionary()
    for (i in 1..readInt()) {
        println(dic[readLn()])
    } 
}
