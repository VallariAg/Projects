var box = document.getElementsByClassName('box');
var table = document.querySelector('table');

var min = 0;
var max = 99;
var random;
for(var i=0; i<25 ; i++){
    var random = Math.floor(Math.random()* (+max - +min)) + +min;
    placeBomb(random);
}

function placeBomb(random){      //to set 25 random bombs all over the board
    box[random].innerText='b';
}

for(var i=0; i<100 ; i++){   
    var d=i;
    box[d].addEventListener('click', displayBox);
}
  

function displayBox(e){        //display box with number or blank or bomb
    console.log(e.target);

    if(e.altKey==true){
        e.target.innerHTML='<img src="pic/flag.png">';
        console.log('flagged');
    }
    // else if(e.shiftKey==true)&&(e.target.innerHTML=='<img src="pic/flag.png">';){
    //     e.target.remove('img');
    // }
    else if(e.target.innerText =='b'){
        e.target.innerHTML='<img src="pic/bomb.jpg">';
        console.log('bomb');
        alert('game over'); 
        end();
         
    }
    else{
        var num = parseInt(e.target.id, 10);
        var n = number(num);
        console.log(n);
        if(n==1) { e.target.innerHTML='<img src="pic/1.png">';}
        if(n==2) { e.target.innerHTML='<img src="pic/2.png">';}
        if(n==3) { e.target.innerHTML='<img src="pic/3.png">';}
        if(n==4) { e.target.innerHTML='<img src="pic/4.png">';}
        if(n==5) { e.target.innerHTML='<img src="pic/5.png">';}
        if(n==6) { e.target.innerHTML='<img src="pic/6.png">';}
        if(n==7) { e.target.innerHTML='<img src="pic/7.png">';}
        if(n==8) { e.target.innerHTML='<img src="pic/8.png">';}
        if(n==0) { e.target.innerHTML='<img src="pic/blank.png">';}
    }
        
        
}
function end() {table.style.display='none';}


function number(num){      //calculate the number to display if NOT BOMB
    num--;
    var bombNum=0;

if(num==0){   //corner
    if(box[num+1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num+10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10+1].innerText=='b') { bombNum++; console.log('bombNum');}
}
else if(num==9){   //corner
    if(box[num-1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10-1].innerText=='b') { bombNum++; console.log('bombNum');}
}
else if(num==99){  //corner
    if(box[num-10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10-1].innerText=='b') { bombNum++; console.log('bombNum');}
}
else if(num==90){ //corner
    if(box[num+1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num-10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10+1].innerText=='b') { bombNum++; console.log('bombNum');}
}
else if((num<9)&&(num>0)){ //top row
    if(box[num+1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num-1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num+10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10+1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10-1].innerText=='b') { bombNum++; console.log('bombNum');}

}
else if((num>90)&&(num<99)){ //bottom row
    if(box[num+1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num-1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num-10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10+1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10-1].innerText=='b') { bombNum++; console.log('bombNum');}

}
else if(num%10==0){   //border left column
    if(box[num+10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num-10+1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10+1].innerText=='b') { bombNum++; console.log('bombNum');}

}
else if(num%10==9){  //border right column
    if(box[num-1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10-1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10-1].innerText=='b') { bombNum++; console.log('bombNum');}

}
else{
    if(box[num+1].innerText=='b') { bombNum++; console.log('bombNum');}    
    if(box[num-1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10+1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num-10-1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10+1].innerText=='b') { bombNum++; console.log('bombNum');}
    if(box[num+10-1].innerText=='b') { bombNum++; console.log('bombNum');}
}
    
    return bombNum;
}


function blankOpens(){ //nearby blanks open when you press a blank space
    //use id of clicked box and open nearby blanks by checking through their id 
    //flagged boxes not to be opened


}







var playAgain = document.querySelector('button');
playAgain.addEventListener('click', function k(){ 
    document.location.reload();
});


