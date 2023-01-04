class SpecialSum
{
    constructor(public total: number, public index: number) {}
}

const sums: Array<SpecialSum> = []

let n: number = 0
let numbers: Array<number> = []
let answ: number = Number.MIN_VALUE
let totalGlobal: number = 0

function nextSum(): void
{
    for(let i=sums.length - 1; i>=0; i--)
    {
        totalGlobal -= sums[i].total

        if (sums[i].index + 1 >= n)
        {
            sums.pop()
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

function main(dataStr: string) : number
{
    let answ: number = Number.MIN_SAFE_INTEGER
    const data: Array<string> = dataStr.split("\n")

    n = parseInt(data[0])
    numbers = data[1].split(" ").map((x: string) => parseInt(x))
    
    // Fill the array with the first configuration
    let i: number = 1
    let last: number = 0

    while (last + i <= n)
    {
        let total: number = 0
        let j = last;

        for (; j<last + i; j++)
            total += numbers[j]

        totalGlobal += total

        sums.push(new SpecialSum(total, j-1))
        
        last = sums[i-1].index + 1
        i++;
    }

    while (sums.length > 0)
    {
        if (answ < totalGlobal)
            answ = totalGlobal

        nextSum()
    }

    process.stdout.write(`${answ}\n`)
    return 0
}

let stdin_input: string = ""

process.stdin.on("data", function(input){
    stdin_input += input.toString()
})

process.stdin.on("end", function (){
    main(stdin_input)
})
