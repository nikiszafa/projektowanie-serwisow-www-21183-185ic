// Zadanie 1 funkcja zwrotna (callback)
// Zadanie 5

//task1
function loadData(path, cb) {
    fetch(path)
        .then(response => {
            return response.json();
        })
        .then(data => {
            cb(data);
        });
}

function printSallarySum() {
    let sum = 0;
    loadData("./employees.json", res => {
        const emps = res.employees;
        for (const x in emps) {
            sum += emps[x].earnings + emps[x].address.geo.premiaZaDojazd;
        }
        console.log(`Suma wypłat pracowników razem z premią za dojazd do pracy to: ${sum}zł`)
    })
}

printSallarySum();

//task2

function printLocalization() {
    loadData("./employees.json", res => {
        const emps = res.employees;
        for (const x in emps) {
            console.log(`Pracownik ${emps[x].firstName} ${emps[x].lastName}
             mieszka w miejscowosci ${emps[x].address.city}
             szerokosc geo. ${emps[x].address.geo.lat}
             dlugosc geo. ${emps[x].address.geo.lng}`)
        }
    })
}

printLocalization();

//Zadanie 2 obiekt Promise (resolve, reject) z metodami then(), catch() i finally() + axios (lub fetch)

//task1

function getData(path) {
    return new Promise(((resolve, reject) => {
        fetch(path)
            .then(response => {
                if (response.status === 200 && response.ok) {
                    resolve(response.json());
                    console.log("Promise resolved");

                } else {
                    console.log("Promise rejected");
                    reject("Błąd" + response.statusText);
                    throw new Error('Złapany został error CATCH()');

                }
            })
            .finally(() => {
                console.log("Promise Finally")
            })
            .catch(error => {
                console.log(error)
            })
    }))
}

function sumaPopulacji() {
    Promise.all([
        getData('https://restcountries.eu/rest/v2/region/europe').then(data => {
            return data.find(e => e.name === "Albania")
        }),
        getData('https://restcountries.eu/rest/v2/region/africa').then(data => {
            return data.find(e => e.name === "Algeria")
        })
    ]).then(res => {
        console.log(`Populacja Albani to: ${res[0].population}
         Populacja Algeri to: ${res[1].population}
         Suma tych populacji: ${res[0].population + res[1].population}`);
    })
}

sumaPopulacji();

function createNewObject() {
    Promise.all([
        getData('https://restcountries.eu/rest/v2/region/europe').then(data => {
            return data.find(e => e.name === "Poland")
        }),
        getData('https://restcountries.eu/rest/v2/region/africa').then(data => {
            return data.find(e => e.name === "Libya")
        })
    ]).then(res => {
        console.log(res);

    })

}

createNewObject();

//Zadanie 3 async/await + fetch (lub axios)

async function getDataAsync(continent) {
    const response = await fetch(`https://restcountries.eu/rest/v2/region/${continent}`)
    if (response.ok && response.status === 200) {
        const data = await response.json();
        return data;
    } else {
        return Promise.reject(`Error ${response.status}`);
    }
}


//task1
async function areaSum(area1, area2) {
    let europeData;
    let africaData;
    let areaE = 0;
    let areaF = 0;
    try {
        europeData = await getDataAsync(area1);
        africaData = await getDataAsync(area2);
        for (x in europeData) {
            areaE += europeData[x].area;
        }
        console.log(`Powierzchnia krajów Europy: ${areaE} km^2`)
        for (x in africaData) {
            areaF += africaData[x].area;
        }
        console.log(`Powierzchnia krajów Afryki: ${areaF} km^2`)
        console.log(`Powierzchnia krajów Afryki i Europy: ${areaE + areaF} km^2`)

    } catch (error) {
        console.log("Mamy error" + error);
    }

}

areaSum("africa", "europe");

//task2

async function asyncObj(area1, area2) {
    let europeData;
    let africaData;
    try {
        europeData = await getDataAsync(area1);
        africaData = await getDataAsync(area2);
        var text = `{ "mixKraj" : [
            { "Kraj":"${africaData[0].name}" , "Stolica":"${europeData[0].capital}" },
            { "Kraj":"${africaData[4].name}" , "Stolica":"${europeData[4].capital}" } ]}`;
        var obj = (JSON).parse(text);
        console.log(obj);
    } catch (error) {
        console.log("Mamy error" + error);
    }
}

asyncObj("africa", "europe");

//Zadanie 4 Zapytania AJAX

function getXHRdata(region, cba) {
    const xhr = new XMLHttpRequest();
    xhr.open("GET", `https://restcountries.eu/rest/v2/region/${region}`, true);
    xhr.send();

    xhr.onload = function () {
        if (xhr.status === 200) {
            console.log("Wynik połączenia");
            cba(JSON.parse(xhr.response));
        }
    }
    xhr.onerror = (() => {
        alert("ERROR nie udało się połączyć")
    })
}


function populationDiff(area1) {
    getXHRdata(area1, res => {
        console.log(`Roznica populacji Albani i Austri to ${res[1].population - res[2].population}`);
    });
}

populationDiff("europe");


function newObj() {
    getXHRdata("europe", res => {
        var text = `{ "mixKraj" : [
            { "Kraj":"${res[10].name}" , "Stolica":"${res[10].capital}" },
            { "Kraj":"${res[14].name}" , "Stolica":"${res[24].capital}" } ]}`;
        var obj = (JSON).parse(text);
        console.log("Zmiksowane kraje");
        console.log(obj);
    })
}

newObj();

//Zadanie 6 Biblioteka axios

function handleRequest() {
    axios.post("url", {name: "data"}).then(function (response) {
        console.log(response)
        // do whatever you want if console is [object object] then stringify the response
    })
}