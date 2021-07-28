const firstBtn = document.getElementById('btn1');
const secondBtn = document.getElementById('btn2');
const firstDiv = document.getElementById('div1');
const secondDiv = document.getElementById('div2');

firstBtn.addEventListener('click', (e) => {
    e.preventDefault();
    firstDiv.style.display = "";
    secondDiv.style.display = "none";
});

secondBtn.addEventListener('click', (e) => {
    e.preventDefault();
    firstDiv.style.display = "none";
    secondDiv.style.display = "";
});

