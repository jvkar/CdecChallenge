const a= [1,0,1,0,1,0]
var cpt = 0 
var value = 0
for (let i=a.length-1;i>=0;i--){
  if (a[i]==1){
   value+=Math.pow(2,cpt)
  }
  cpt++
}
console.log(value)