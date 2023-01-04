// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/

fun readLn(): String = readLine()!!
fun readInt(): Int = readLn().toInt()
fun readLongs(): List<Long> = readLn().split(" ").map{ it.toLong() }

class SpecialSum(var total: Long, var index: Int)

val sums: MutableList<SpecialSum> = mutableListOf()

var n: Int = 0
var numbers: List<Long> = mutableListOf()
var answ: Long = Long.MIN_VALUE
var totalGlobal: Long = 0L

fun nextSum()
{
    for(i in sums.size-1 downTo 0)
    {
        totalGlobal -= sums[i].total

        if (sums[i].index + 1 >= n)
        {
            sums.removeLast()
            continue
        }

        if (i == 0)
        {
            sums[i].total = numbers[++sums[i].index] 
        }
        else 
        {
            sums[i].total -= numbers[sums[i-1].index + 1]
            sums[i].total += numbers[++sums[i].index]
        }

        totalGlobal += sums[i].total
    }
}

fun main() 
{
    n = readInt()
    numbers = readLongs()

    // Fill the array with the first configuration
    var i: Int = 1
    var last: Int = 0

    while(last + i <= n)
    {
        var total: Long = 0L
        var j: Int = last

        while (j < last + i)
            total += numbers[j++]

        totalGlobal += total

        sums.add(SpecialSum(total, j-1))

        last = sums[i-1].index + 1
        i++
    }

    while(sums.size > 0)
    {
        if (answ < totalGlobal)
            answ = totalGlobal

        nextSum()
    }
    
    println(answ)
}
