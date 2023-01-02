// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/

function main(dataStr: string) : number
{
    const s: string = dataStr
    let answ: string = ""

    for(let i=0; i<s.length; i++)
        if (/[A-Z]/.test(s[i]))
            answ += s[i].toLowerCase()
        else 
            answ += s[i].toUpperCase()

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
