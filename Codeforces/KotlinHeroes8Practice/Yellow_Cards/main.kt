fun readLn() = readLine()!!
fun readInt() = readLn().toInt()


fun minPlayers (pTeam1 : Int, pTeam2 : Int, yTeam1 : Int, yTeam2 : Int, maxYellow : Int) : Int {
    var res = 0
    var limitMin = pTeam1*yTeam1-pTeam1 + pTeam2*yTeam2-pTeam2  

    if (limitMin < maxYellow) {
        var players = pTeam1 + pTeam2
        var rest = maxYellow - limitMin

        if (rest > players) {
            res = players
        } else {
            res = rest
        }
    }

    return res
}

fun maxPlayers (pTeam1 : Int, pTeam2 : Int, yTeam1 : Int, yTeam2 : Int, maxYellow : Int) : Int {
    var res = 0
    var limit = maxYellow

    val minY : Int
    val minP : Int
    val maxP : Int
    val maxY : Int
    
    if (yTeam1 < yTeam2) {
        minY = yTeam1
        minP = pTeam1
        maxY = yTeam2
        maxP = pTeam2
    } else {
        minY = yTeam2
        minP = pTeam2
        maxY = yTeam1
        maxP = pTeam1
    }    

    if (limit / minP >= minY.toDouble()) {
        limit -= minP*minY
        res += minP
    } else {
        val rest = (limit - limit%minY) / minY
        limit -= rest*minY
        res += rest
    }

    if (limit / maxP >= maxY.toDouble()) {
        limit -= maxP*maxY
        res += maxP
    } else {
        val rest = (limit - limit%maxY) / maxY
        limit -= rest*maxY
        res += rest
    }
    
    return res
}

fun main () {
    val a1 = readInt()
    val a2 = readInt()
    val k1 = readInt()
    val k2 = readInt()
    val n = readInt()

    val minP = minPlayers(a1, a2, k1, k2, n)
    val maxP = maxPlayers(a1, a2, k1, k2, n)

    println("$minP $maxP")
}