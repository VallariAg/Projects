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
    else if(e.shiftKey==true){
        e.target.remove('img');
    }
    else if(e.target.innerText =='b'){
        e.target.innerHTML='<img src="pic/bomb.jpg">';
        console.log('bomb');
        alert('game over'); 
        end();
         
    }
    else{
        var num = parseInt(e.target.id, 10);
        num--;
        var n = number(num);
        console.log(n);
        if(n==1) { e.target.innerHTML='<img src="pic/1.png">'; }
        if(n==2) { e.target.innerHTML='<img src="pic/2.png">'; }
        if(n==3) { e.target.innerHTML='<img src="pic/3.png">';}
        if(n==4) { e.target.innerHTML='<img src="pic/4.png">';}
        if(n==5) { e.target.innerHTML='<img src="pic/5.png">';}
        if(n==6) { e.target.innerHTML='<img src="pic/6.png">';}
        if(n==7) { e.target.innerHTML='<img src="pic/7.png">';}
        if(n==8) { e.target.innerHTML='<img src="pic/8.png">';}
        if(n==0) { e.target.innerHTML='<img src="pic/blank.png">'; blankOpens(num); }
    }
        
        
}
function end() {table.style.display='none';}

function number(num){      //calculate the number to display if NOT BOMB
    
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

function displayNearBox(_no, _id){
    

   if(_no==1) { box[id=_id].innerHTML='<img src="pic/1.png">';}
   if(_no==2) { box[id=_id].innerHTML='<img src="pic/2.png">';}
   if(_no==3) { box[id=_id].innerHTML='<img src="pic/3.png">';}
   if(_no==4) { box[id=_id].innerHTML='<img src="pic/4.png">';}
   if(_no==5) { box[id=_id].innerHTML='<img src="pic/5.png">';}
   if(_no==6) { box[id=_id].innerHTML='<img src="pic/6.png">';}
   if(_no==7) { box[id=_id].innerHTML='<img src="pic/7.png">';}
   if(_no==8) { box[id=_id].innerHTML='<img src="pic/8.png">';}
   if(_no==0) { box[id=_id].innerHTML='<img src="pic/blank.png">';}

}

function blankOpens(num){ //nearby blanks open when you press a blank space
    //use id of clicked box and open nearby blanks by checking through their id 
    //flagged boxes not to be opened


    if(num==0){   //corner 
        console.log('in');
        if(box[num+1].innerText!='b') { var _no = number(num+1); displayNearBox(_no, num+1);}    
        if(box[num+10].innerText!='b') { var _no = number(num+10); displayNearBox(_no, num+10);}
        if(box[num+10+1].innerText!='b') { var _no = number(num+10+1); displayNearBox(_no, num+10+1);}
    }
    else if(num==9){   //corner
        if(box[num-1].innerText!='b') { var _no = number(num-1); displayNearBox(_no, num-1);}
        if(box[num+10].innerText!='b') {var _no = number(num+10); displayNearBox(_no, num+10);}
        if(box[num+10-1].innerText!='b') {var _no = number(num+10-1); displayNearBox(_no, num+10-1);}
    }
    else if(num==99){  //corner
        if(box[num-10].innerText!='b') { var _no = number(num-10); displayNearBox(_no, num-10);}
        if(box[num-1].innerText!='b') {var _no = number(num-1); displayNearBox(_no, num-1);}
        if(box[num-10-1].innerText!='b') {var _no = number(num-10-1); displayNearBox(_no, num-10-1);}
    }
    else if(num==90){ //corner
        if(box[num+1].innerText!='b') { var _no = number(num+1); displayNearBox(_no, num+1);}    
        if(box[num-10].innerText!='b') { var _no = number(num-10); displayNearBox(_no, num-10);}
        if(box[num-10+1].innerText!='b') { var _no = number(num-10+1); displayNearBox(_no, num-10+1);}
    }
    else if((num<9)&&(num>0)){ //top row
        if(box[num+1].innerText!='b') { var _no = number(num+1); displayNearBox(_no, num+1);}    
        if(box[num-1].innerText!='b') { var _no = number(num-1); displayNearBox(_no, num-1);}    
        if(box[num+10].innerText!='b') {var _no = number(num+10); displayNearBox(_no, num+10);}
        if(box[num+10+1].innerText!='b') { var _no = number(num+10+1); displayNearBox(_no, num+10+1);}
        if(box[num+10-1].innerText!='b') { var _no = number(num+10-1); displayNearBox(_no, num+10-1);}
    
    }
    else if((num>90)&&(num<99)){ //bottom row
        if(box[num+1].innerText!='b') { var _no = number(num+1); displayNearBox(_no, num+1);}    
        if(box[num-1].innerText!='b') { var _no = number(num-1); displayNearBox(_no, num-1);}    
        if(box[num-10].innerText!='b') { var _no = number(num-10); displayNearBox(_no, num-10);}
        if(box[num-10+1].innerText!='b') { var _no = number(num-10+1); displayNearBox(_no, num-10+1);}
        if(box[num-10-1].innerText!='b') { var _no = number(num-10-1); displayNearBox(_no, num-10-1);}
    
    }
    else if(num%10==0){   //border left column

        if(box[num+10].innerText!='b') { var _no = number(num+10); displayNearBox(_no, num+10);}        
        if(box[num-10].innerText!='b') {var _no = number(num-10); displayNearBox(_no, num-10);}
        if(box[num+1].innerText!='b') {var _no = number(num+1); displayNearBox(_no, num+1);} 

        if(box[num-10+1].innerText!='b') {var _no = number(num-10+1); displayNearBox(_no, num-10+1);}
        if(box[num+10+1].innerText!='b') {var _no = number(num+10+1); displayNearBox(_no, num+10+1);}
    
    }
    else if(num%10==9){  //border right column
        if(box[num-1].innerText!='b') { var _no = number(num-1); displayNearBox(_no, num-1);}
        if(box[num+10].innerText!='b') { var _no = number(num+10); displayNearBox(_no, num+10);}
        if(box[num-10].innerText!='b') { var _no = number(num-10); displayNearBox(_no, num-10);}
        if(box[num+10-1].innerText!='b') {var _no = number(num+10-1); displayNearBox(_no, num+10-1);}
        if(box[num-10-1].innerText!='b') { var _no = number(num-10-1); displayNearBox(_no, num-10-1);}
    
    }
    else{ 

        if(box[num+1].innerText!='b') { var _no = number(num+1); displayNearBox(_no, num+1);}    
        if(box[num-1].innerText!='b') { var _no = number(num-1); displayNearBox(_no, num-1);}
        if(box[num+10].innerText!='b') { var _no = number(num+10); displayNearBox(_no, num+10);}
        if(box[num-10].innerText!='b') {var _no = number(num-10); displayNearBox(_no, num-10);}
        if(box[num-10+1].innerText!='b') { var _no = number(num-10+1); displayNearBox(_no, num-10+1);}
        if(box[num-10-1].innerText!='b') { var _no = number(num-10-1); displayNearBox(_no, num-10-1);}
        if(box[num+10+1].innerText!='b') { var _no = number(num+10+1); displayNearBox(_no, num+10+1);}
        if(box[num+10-1].innerText!='b') { var _no = number(num+10-1); displayNearBox(_no, num+10-1);}
    }
num++;
}







var playAgain = document.querySelector('button');
playAgain.addEventListener('click', function k(){ 
    document.location.reload();
});


