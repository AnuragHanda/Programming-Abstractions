function validateForm(){
    var first = document.forms["myform"]["first"].value;
    
    var day = document.getElementById("date");
    var month = document.getElementById("month");
    var year = document.getElementById("year");
    var email = document.myform.email.value;
    var mob = document.myform.mb.value;
    var gender = document.myform.gender.value;
    var address = document.myform.address.value;
    var city = document.myform.city.value;
    var pin = document.myform.pincode.value;
    var state = document.myform.state.value;
    var hobby = document.getElementsByClassName("hobby");
    var boards = document.getElementsByClassName('brd');
    var marks = document.getElementsByClassName('mrk');
    var yearOfPassing = document.getElementsByClassName('yrp'); 
    var course = document.myform.Course.value;

    
    
    

    function checkBoard(boards){
        for(let i=0;i<4;i++){
            if(boards[i].value.length === 0 || boards[i].value.length>10){
                return false;
            }
        }
        return true;
    }
    
    function checkPercentage(marks){
        for(let i=0;i<4;i++){
            let mark = marks[i].value.split('.');
            console.log(mark)
            if(marks[i].value.length===0 || Number(marks[i].value)>100){
                return false;
            }
    
        }
        return true;
    }
    function checkYearOfPassing(yearOfPassing){
        for(let i=0;i<4;i++){
            if(yearOfPassing[i].value.length!==4){
                return false;
            }
        }
        return true;
    }
    
   
    
    if(first=="" || first.length>30){
        alert("Please enter your first name.");
        return false;
    }else if(day.value=="" || day.value=="0"){
        alert("Please select day for your date of birth.");
        return false;
    }else if(month.value=="" || month.value=="0"){
        alert("Please select month for your date of birth.");
        return false;
    }else if(year.value=="" || year.value=="0"){
        alert("Please select year for your date of birth.");
        return false;
    }else if (email==null || email.indexOf('@')<=0){  
        alert("Please Enter correct format of email.");  
        return false;  
    }else if (mob==null || mob.length<10 || mob.length>10){ 
        alert("Please enter your Mobile Number correctly.");
        return false;
    }else if (gender==null || gender==""){
        alert("Please select gender.");
        return false;
    }else if (address==null || address==""){
        alert("Please enter your adderss.");
        return false;
    }else if(city==null || city==""){
        alert("Please enter your city.");
        return false;
    }else if(pin==null || pin==""){
        alert("Please enter your Pin Code.");
        return false;
    }else if(state==null || state==""){
        alert("Please enter your state.");
        return false;
    }
    // else if(!checkHobby(hobby)){
    //     alert("Please select atleast one of the following hobbies.");
    //     return false;
    // }
    else if(!checkBoard(boards)){
        alert('Please enter board name');
        return false;
    }else if(!checkPercentage(marks)){
        alert('Please Enter your Percentage');
        return false;
    }else if(!checkYearOfPassing(yearOfPassing)){
        alert('Please Enter Valid Year of passing');
        return false;
    }else if(course==null || course==""){
        alert("Please select your course.");
        return false;
    }else{
        
        var cnfm = confirm("Are you sure you want to continue ?");
        if(cnfm==true){
           window.location.href = "main.html";
            alert('You have successfully subbmitted your form.')
                
        }else{
            window.location.reload();
            return false;
        }        
    }
    
}


