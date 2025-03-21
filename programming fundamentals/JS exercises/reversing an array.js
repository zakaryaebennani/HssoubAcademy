let arr= prompt("space seperated integers").trim().split(" ");
arr.forEach((a, i, arr) => (arr[i] = parseInt(a)))
i=0
j=arr.length -1
while(i<j)
{
    let temp = arr[i];
    arr[i++] = arr[j];
    arr[j--]=temp;
}
console.log(arr)