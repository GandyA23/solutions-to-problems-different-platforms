// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/

fun readLn(): String = readLine()!!
fun readInt(): Int = readLn().toInt()
fun readStrs(): List<String> = readLn().split(" ")

val MOD: Long = 1000000007

fun main() 
{
    val n: Int = readInt()
    var answ: Long = 1

    readStrs().forEach{
        answ %= MOD
        answ *= it.toInt()
    }

    println(answ)
}
