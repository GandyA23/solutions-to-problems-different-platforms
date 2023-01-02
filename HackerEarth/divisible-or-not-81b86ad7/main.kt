// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/

fun readLn(): String = readLine()!!
fun readInt(): Int = readLn().toInt()
fun readStrs(): List<String> = readLn().split(" ")

fun main() 
{
    var existsLeftZeros: Boolean = true
    var leftZeros: Int = 0
    
    val n: Int = readInt()
    val numbers: List<String> = readStrs()
    
    for (str in numbers)
    {
        if (str.toInt().equals(0) && existsLeftZeros)
        {
            leftZeros++
        }
        else
        {
            existsLeftZeros = false
        }
    }
    
    val answ: String = if (numbers.last().last().equals('0') && n - leftZeros > 1) "Yes" else "No"
    
    println(answ)
}
