// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/

function main(dataStr: string) : number
{
    const data: Array<string> = dataStr.split("\n")
    let answ: string = "NO"
    let cont: boolean = true

    let grid: string = data[1]

    // Case when itsn't possible
    for (let i: number = 0; i < grid.length - 1; i++)
    {
        // Adjacent houses
        if (grid[i] == 'H' && grid[i] == grid[i+1])
        {
            cont = false
            break
        }
    }
    
    // Continue if you don't find adjacent houses
    if (cont)
    {
        answ = "YES"
        grid = grid.replace(/\./g, "B")
    }

    process.stdout.write(`${answ}\n${(cont ? grid : '')}`)

    return 0
}

let stdin_input: string = ""

process.stdin.on("data", function(input){
    stdin_input += input.toString()
})

process.stdin.on("end", function (){
    main(stdin_input)
})
