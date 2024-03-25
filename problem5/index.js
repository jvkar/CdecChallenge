function climbStairs(n){
    if(n===1) return 1
    const array = new Array(n+1);
    array[1]=1
    array[2]=2
    for(let i=3 ;i<=n; i++)
        array[i] = array[i-1]+array[i-2]
    return array[n];
  }
  console.log(climbStairs(3))