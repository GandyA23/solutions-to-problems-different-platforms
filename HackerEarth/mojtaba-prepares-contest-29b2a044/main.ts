// URL Problem
// https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/

function main(dataStr: string) : number
{
    const data: Array<string> = dataStr.split("\n")
    let answ: string = ""
    let index: number = 0
 
    const t: number = parseInt(data[index++])
 
    for(let i=0; i<t; i++)
    {
        let answTest: number = 0
        
        // flags to check if he buy the two colors
        let buysHeColor: Array<boolean> = [false, false]
            
        // 0: the lowest cost ballon
        // 1: the gratest cost ballon
        let costBallons: Array<number> = data[index++].split(" ").map((x: string) => parseInt(x)).sort()
        let statusUsers: number = parseInt(data[index++])
 
        while(statusUsers-- > 0)
        {
            const statusRow: Array<boolean> = data[index++].split(" ").map((x: string) => x == "1")
        
            if (statusRow[0] && statusRow[1])
            {
                buysHeColor = [true, true]
                answTest += costBallons[0] + costBallons[1]
            }
            else if (statusRow[0] || statusRow[1])
            {
                buysHeColor[0] = true
                answTest += costBallons[0]
            }
        }
 
        if (!buysHeColor[1])
        {
            answTest -= costBallons[0];
            answTest += costBallons[1];
        }
 
        answ += `${answTest}\n`;
    }
 
    process.stdout.write(answ)
    return 0
}
 
let stdin_input: string = ""
 
process.stdin.on("data", function(input){
    stdin_input += input.toString()
})
 
process.stdin.on("end", function (){
    main(stdin_input)
})
