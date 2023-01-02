// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/

fun readLn(): String = readLine()!!
fun readInt(): Int = readLn().toInt()

val NUMBER_STICKS: Map<Char, Int> = mapOf(
    '8' to 7,
    '0' to 6, '6' to 6, '9' to 6, 
    '2' to 5, '3' to 5, '5' to 5,
    '4' to 4, 
    '7' to 3, 
    '1' to 2, 
)
    
fun main() 
{
    val t: Int = readInt()
    var answ: String = ""

    for (i in 0 until t)
    {
        var answCase: String = ""
        var numberSticks: Int = 0
        val n: String = readLn()

        n.forEach{
            numberSticks += NUMBER_STICKS[it]!!
        }

        answCase += if (numberSticks % 2 == 0) "1" else "7"
        numberSticks -= 2

        while(numberSticks > 1)
        {
            answCase += "1"
            numberSticks -= 2
        }

        answ += "$answCase\n"
    }
    
    println(answ)
}
