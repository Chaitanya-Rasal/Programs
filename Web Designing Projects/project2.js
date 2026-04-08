const button=document.querySelector('button')
button.addEventListener('click',function(e){
    // e.preventDefault()
    const height=parseFloat(document.querySelector('#height').value)
    const weight=parseFloat(document.querySelector('#weight').value)
    const output=document.querySelector('#output')


    if(height== '' || height<0 || isNaN(height))
    {
        output.innerHTML=`invalid height ${height}`
    }
    else if(weight== '' || weight<0 || isNaN(weight))
        {
            output.innerHTML=`invalid weight ${weight}`
        }
    else{
        const bmi=(weight /((height*height)/10000)).toFixed(2)
        output.innerHTML=bmi
    }
})