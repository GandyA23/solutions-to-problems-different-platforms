// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/

const NUMBER_STICKS: Map<string, number> = new Map([
    ['8', 7], 
    ['0', 6], ['6', 6], ['9', 6],
    ['2', 5], ['3', 5], ['5', 5],
    ['4', 4],
    ['7', 3],
    ['1', 2]
])

function main(dataStr: string) : number
{
    const data: Array<string> = dataStr.split("\n")
    let answ: string = ""
    let index: number = 0

    let t: number = parseInt(data[index++])

    while (t-- > 0)
    {
        let numberSticks: number = 0
        let n: Array<string> = data[index++].split("")

        n.forEach((x: string) => {
            numberSticks += NUMBER_STICKS.get(x)?
        })

        answ += numberSticks % 2 == 0 ? '1' : '7'
        numberSticks -= 2

        while(numberSticks > 1)
        {
            answ += '1'
            numberSticks -= 2
        }

        answ += '\n'
    }

    process.stdout.write(`${answ}`)
    return 0
}

let stdin_input: string = ""

process.stdin.on("data", function(input){
    stdin_input += input.toString()
})

process.stdin.on("end", function (){
    main(stdin_input)
})
