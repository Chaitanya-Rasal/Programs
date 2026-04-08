const randomcolor=function(){
    const hex='0123456789ABCEDF'
    let color='#'
    for(let i=0;i<6;i++)
    {
        color +=hex[Math.floor(Math.random()*16)];
    }
    return color;

}
// console.log(randomcolor());
let a;
let startchangingcolor=function(){
    if(!a){
     a=setInterval(changebgcolor,1000)}
    function changebgcolor(){
        document.body.style.backgroundColor=randomcolor();
    }
    
};
let stopchangingcolor=function(){
    clearInterval(a);
    a=null;
};
let start=document.querySelector('#start').addEventListener('click',startchangingcolor)
let stop=document.querySelector('#stop').addEventListener('click',stopchangingcolor)