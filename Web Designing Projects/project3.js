const output=document.getElementById('output')
setInterval(function(){
    let date =new Date()
    output.innerHTML=date.toLocaleTimeString()
},1000)