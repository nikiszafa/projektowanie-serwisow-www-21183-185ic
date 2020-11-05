// 1 Dodanie kolejnego wyboru w liście nawigacyjnej

let list = document.querySelector(".navbar-nav.ml-auto");
let newL = document.createElement("li");
newL.className = "nav-item";
let nA = document.createElement("a");
nA.className = "nav-link";
newL.appendChild(nA);
list.appendChild(newL);
nA.innerText = "Kolejna pozycja";

// 2 innerHTML - Zmiana tekstu

let x = document.getElementsByClassName("btn btn-primary");
x[0].innerHTML = "<b> Tekst zmieniony za pomocą innerHTML </b>";

// 3 InnerText - działa podobnie jak innerHtml tylko że zwraca i ustawia sam tekst

let title = document.getElementsByClassName("mt-5");
title[0].innerText = "Lab 2 Praca z elementami DOM + ćwiczenia"

// 4 Wstawienie tekstu za pomocą querySelector i innerHTML

const newEl = document.createElement("div");
newEl.innerHTML = `<b>Tekst wstawiony za pomocą querySelectorAll!<b>`;
const container = document.querySelectorAll(".col-sm");
container[0].appendChild(newEl);

// 5 Wstawienie grafiki

const newImg = document.createElement("img");
newImg.src = "media/cat.jpg";
newImg.width = "300";
newImg.alt = "Zdjecie kota";

container[1].appendChild(newImg);
// 6 Wstawianie listy

let items = [
    'Pierwszy',
    'Drugi',
    'Trzeci',
    'Czwarty',
    'Piąty',
    'Szósty'
],
    ul = document.createElement('ul');

container[1].appendChild(ul);

items.forEach(function (item) {
    let li = document.createElement('li');
    ul.appendChild(li);

    li.innerHTML += item;
});

// 7 Zmiana tła 

container[0].style.backgroundColor = "#72d656";
container[1].style.backgroundColor = "#66ebed";
container[2].style.backgroundColor = "#edce77";

// 8 Wstawianie paragrafu i edycja
let p = document.createElement("p");
p.appendChild(document.createTextNode("Sklonowany element obrazu Kota"))
container[2].appendChild(p);

// 9 Zmiana koloru pozycji i rozmiaru tesktu w paragrafie
p.style.color = "red";
p.style.textAlign = "center"
p.style.fontSize = "22px";

// 10 Pobieranie elementu za pomocą tag-name,
let homeButton = document.getElementById("HomeButton");
homeButton.style.color = "red"

// 11 Klonowanie elementu grafiki
const cloneEl1 = newImg.cloneNode();
container[2].appendChild(cloneEl1);

// 12 Zmiana tekstu na navbarze
let navbar = document.getElementsByClassName("navbar-brand");
navbar[0].innerHTML = "<b> Nikodem Wrosz </b>"; // x[0] to pierwszy znaleziony element

// 13 Dodanie formularza

let emailForm = document.createElement("form");
let div = document.createElement("div");
let labelForm = document.createElement("label");
let inputForm = document.createElement("input");

div.className = "form-group";
labelForm.htmlFor = "formGroupExampleInput";
labelForm.innerText = "Wpisz dlaczego sklonowales kota?";
inputForm.type = "text";
inputForm.className = "form-control";
inputForm.id = "formGroupExampleInput";
inputForm.placeholder = "Powod klonowania";

emailForm.appendChild(div);
div.appendChild(labelForm);
div.appendChild(inputForm);
container[2].appendChild(emailForm);

// 14 Pobieranie elementu przez Tag-name
document.getElementsByTagName("a")[0].style.color = "yellow";

// 15 Użycie strict mode
//  zmienna musi być zadeklarowana z użyciem let/const/var
(function () {
    "use strict";
    let test = 20; //error - test is not defined
    console.log(test);
})();

//16 Dodanie nowego elementu 
newDiv = document.createElement("div");
container[3].appendChild(newDiv);
newDiv.appendChild(document.createTextNode("Tekst utworzony dzięki strict mode"))
pC = document.createElement("p");
newDiv.appendChild(pC);
pC.innerHTML = "<b>Strict Mode umożliwia korzystanie ze starszych rozwiązań javaScript. </b> \n Przykładowo brak możliwość odwoływania się do zmiennej bez jej wcześniejszego utworzenia za pomocą jednego ze słów kluczowych (var/let/const)";

//17 Modyfikacja tłą
  document.body.style.backgroundColor = "#ccffff";

// 18 Dodanie alertu bootstrap
let divAlert = document.createElement("div");
divAlert.className = "alert alert-primary";
divAlert.role = "alert";
divAlert.innerHTML = "SPRAWDZ TEN ALERT !!!";
container[3].appendChild(divAlert);


// 19 Dodanie nowego elementu bootstrap row
let page = document.querySelector("#container");
let containerRow = document.createElement("div")
containerRow.className = "row";
page.appendChild(containerRow);

// 20 Strict mode 
// Poprzedzając liczbę nie możemy poprzedzać ją zerem
(function () {
    "use strict";
    let nr = 20; //Jeśli wstawimy zero będzie error
})();


