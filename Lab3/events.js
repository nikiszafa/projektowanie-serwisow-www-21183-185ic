//1 zdarzenie wheel

const divWheel = document.querySelector("#wheelDiv");
divWheel.addEventListener("wheel", () => {
    divWheel.style.fontSize = "30px";
})

//2 keyup

const randomText = document.querySelector('#randomText');
document.addEventListener("keyup", e => {
    if (e.key === 'p' || e.keyCode === 80) {
        randomText.style.background = "red";
    } else if (e.key === 'q' || e.keyCode === 81) {
        randomText.style.background = "yellow";
    } else if (e.key === 'a' || e.keyCode === 65) {
        randomText.style.background = "brown";
    }
});

//3 dblclick

const catImg = document.querySelector('#catImg')
catImg.addEventListener("dblclick", () => {
    catImg.src = "dog.jpg"
})

//4  removeEventListener()
const number = document.querySelector("#number");
const btn2 = document.querySelector("#btn2");
btn2.addEventListener("click", btn2Click);

let counter = 0;
function btn2Click() {
    counter++;
    number.innerHTML = `Nacisnąłeś przycisk ${counter} razy`;
    if (counter >= 5) {
        btn2.removeEventListener("click", btn2Click);
    }
}

//5 zdarzenie click button

const btn = document.querySelector('#btn1');
btn.addEventListener("click", () => {
    btn.innerHTML = "Przycisk wcisniety";

});

//6 mouseover 

const amwLogo = document.querySelector('#amwLogo');
amwLogo.addEventListener("mouseover", () => {
    amwLogo.style.width = "300px"
    amwLogo.style.height = "300px"
});

//7 mouseout
amwLogo.addEventListener("mouseout", () => {
    amwLogo.style.width = "147px";
    amwLogo.style.height = "172px";
});


//8 resize 
window.addEventListener("resize", resFunction);
document.querySelector("#resTxt2").innerHTML = `Szerokość okna: ${window.outerWidth} \n Wysokość okna: ${window.outerHeight}`;

let xi = 0;

function resFunction() {
    let txt = xi += 1;
    document.getElementById("#resTxt")
    document.querySelector("#resTxt").innerHTML = `Zmieniłeś rozmiar okna: ${txt}`;
    document.querySelector("#resTxt2").innerHTML = `Szerokość okna: ${window.outerWidth} \n Wysokość okna: ${window.outerHeight}`;

}

//9 copy	

const input1 = document.querySelector("#input1");
input1.addEventListener("copy", () => {
    document.querySelector("#underInput").innerHTML="<b>WYKRYTO KOPIOWANIE !!!</b>"
})

//10 select
const selectTxt=document.querySelector("#selectText")
selectTxt.addEventListener("select",()=>alert("PRÓBOWAŁEŚ ZAZNACZYĆ TEKST !!!!!"))

