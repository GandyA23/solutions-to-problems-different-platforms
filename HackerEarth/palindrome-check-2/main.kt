// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/

readLn(): String = readLine()!!

fun main() 
{
    var answ: String = "YES"
    val str: String = readLn()

    var start: Int = 0
    var end: Int = str.length - 1

    for (i in 0 until end)
        if (!str[start++].equals(str[end--]))
        {
            answ = "NO"
            break
        }
    
    println(answ)
}
