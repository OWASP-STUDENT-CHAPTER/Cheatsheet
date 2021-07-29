
// var audio=new Audio('sounds/'+bgname+'.mp3');
// audio.play();

function playAudio(key)
{
    var audio;
        switch(key)
        {
            case 'w': audio=new Audio('sounds/tom-1.mp3');
                        audio.play();
                        break;
            case 'a': audio=new Audio('sounds/snare.mp3');
                        audio.play();
                        break;
            case 's': audio=new Audio('sounds/kick-bass.mp3');
                        audio.play();
                        break;
            case 'd': audio=new Audio('sounds/tom-2.mp3');
                        audio.play();
                        break;
            case 'j': audio=new Audio('sounds/tom-3.mp3');
                        audio.play();
                        break;
            case 'k': audio=new Audio('sounds/tom-4.mp3');
                        audio.play();
                        break;
            case 'l': audio=new Audio('sounds/crash.mp3');
                        audio.play();
                        break;
            default : break;
        }
}

for(var i=0;i<7;i++)
{
    document.querySelectorAll(".drum")[i].addEventListener("click", function()
    {
        var key=this.innerHTML;
        playAudio(key);
    });
}

document.addEventListener("keydown", function(event)
{
    // playAudio(event.key);
    document.getElementsByClassName(event.key)[0].click();
    document.getElementsByClassName(event.key)[0].classList.add("pressed");
    
});

document.addEventListener("keyup", function(event)
{
    document.getElementsByClassName(event.key)[0].classList.remove("pressed"); 
});