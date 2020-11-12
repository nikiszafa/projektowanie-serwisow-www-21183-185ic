//Zadanie 1

// txt="aa";
// newTxt="";
// function zwracanie(txt){
//     newTxt+="Liczba liter:"
//     for(let i=0;i<txt.length;i++){
//         newTxt+=".";
//     }
//     return newTxt;
// };

// console.info(zwracanie(txt));

//Zadanie 2

// let tab = [1, 2];
// function suma(tab) {
//     let suma = 0;
//     for (let i = 0; i < tab.length; i++) {
//         suma += tab[i]
//     }
//     return suma;
// }
// console.log("tablica: "+tab)
// console.log("Suma wynosi: " + suma(tab));

//Zadanie 3

// let txt="Litwo ojczyzno moja";
// let newTxt="";
// function randomNum(min, max) {
//     return (Math.floor(Math.random() * (max - min + 1) + min))
// }

// function miks(txt){
//     for(let i=0; i<txt.length;i++){
//         if(randomNum(0,1)==1){
//             newTxt+=txt.charAt(i).toUpperCase();
//         }else{
//             newTxt+=txt.charAt(i).toLowerCase();
//         }
//     }
//     return newTxt;
// }

// console.log(`Stary tekst: ${txt} \n Nowy tekst: ${miks(txt)}`);

//Zadanie 4
// let num1, num2;

// function isNumber(num1, num2) {
//     if(typeof(num1)=="number"&&typeof(num2)=="number"){
//         return num1*num2
//     }
//     else{
//         return false;
//     }
// }

// console.log(isNumber(4,5));

//Zadanie 5

// let txt=prompt("Podaj imie");
// let miesiac=prompt("Podaj miesiac");
// console.log(coRobi(txt,miesiac));

// function coRobi(txt, miesiac) {
//     miesiac = miesiac.toLowerCase();
//     switch (miesiac) {
//         case 'grudzien':
//         case 'styczen':
//         case 'luty': return `${txt} jezdzi na sankach`
//             break;
//         case 'marzec':
//         case 'kwiecien':
//         case 'maj': return `${txt} chodzi po kaluzach`
//             break;
//         case 'czerwiec':
//         case 'lipiec':
//         case 'sierpien': return `${txt} sie opala`
//             break;
//         case 'wrzesien':
//         case 'pazdziernik':
//         case 'listopad': return `${txt} zbiera liscie`
//             break;
//         default: `${txt} uczy sie JS`
//             break;
//     }
// }

//Zadanie 6

// const str = "Ania|Marcin|Bartek|Piotr|Kuba|Beata|Agnieszka";
// let znak = "|";
// console.log("input: "+str);
// console.log("output: " + posort(str, znak));

// function posort(str, znak) {
//     let strArr = str.split(znak);
//     //console.log("strArr:" + strArr);
//     strArr = strArr.sort()
//     //console.log("Posortowany strArr:" + strArr);
//     return strArr.join("|");
// }

//Zadanie 7

// const input = ["Ania", "Marcin", "Bartek", "Piotr"]
// console.log("Duze Litery: "+duzeLitery(input));
// console.log("Zmienna wielkosc liter: "+ zmiennaWielkosc(input));

// function duzeLitery(input){

//     return input.map(el=>el.toUpperCase());
// }

// function zmiennaWielkosc(input){
//     return input.map(el=>miks(el));
// }

// function randomNum(min, max) {
//     return (Math.floor(Math.random() * (max - min + 1) + min))
// }

// function miks(txt){
//     let newTxt="";
//     for(let i=0; i<txt.length;i++){
//         if(randomNum(0,1)==1){
//             newTxt+=txt.charAt(i).toUpperCase();
//         }else{
//             newTxt+=txt.charAt(i).toLowerCase();
//         }
//     }
//     return newTxt;
// }

//Zadanie 8

// let input=prompt("podaj imie:");
// console.log("checkFemale: "+checkFemale(input))
// function checkFemale(input){
//     if(input.substring(input.length-1)=="a"){
//         return true;
//     }else {
//         return false; 
//     }
// }

//Zadanie 9

const users = [
    "Ania Nowak",
    "Piotr Kowalski",
    "Bartek Kosecki",
    "Natalia Nowak",
    "Weronika Piotrowska",
    "Agata Beatczak",
    "Tomasz Nowak",
    "Mateusz Kowalski",
    "Marcin Kotecki",
    "Betata Lecka",
    "Katarzyna Melecka"
]
console.log("Ilosc kobiet: " + countWomanInTable(users));

function countWomanInTable(arr) {
    let newarr;
    let licznik = 0;
    for (let i = 0; i < arr.length; i++) {
        if (checkFemale(arr[i].split(" ")[0]) == true) {
            console.log(`kobieta nr: ${licznik} imie: ` + arr[i].split(" ")[0]);
            licznik++;
        }
    }
    return licznik;
}

function checkFemale(input) {
    if (input.substring(input.length - 1) == "a") {
        return true;
    } else {
        return false;
    }
}