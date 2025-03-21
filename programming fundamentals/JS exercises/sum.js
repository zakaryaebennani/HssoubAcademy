let n=prompt("space separated numbers").trim().split(" ");
n.forEach((a, i, arr)=> arr[i] = parseInt(a));
s=0
for (let i of n)
{
    s+=i;
}
console.log(s);