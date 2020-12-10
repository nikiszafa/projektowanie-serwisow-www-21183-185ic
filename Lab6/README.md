# LAB6 React - aplikacja nr 1
### Opisałem działanie ReactDom.render()
### Stworzyłem aplikację za pomocą modułu 'create-react-app'
### Stworzyłem komponenty funkcyjne: NumberList, foramtName, Welcome
### Stworzyłem komponent klasowy: Zegar
### Utworzyłem komponenty z komponentami potomnymi
### Wykorzystałem atrybuty, właściwości przy przekazywaniu danych do komponentów 
### Zapoznałem się ze state przy tworzeniu komponentów
### Użyłem css przy komponentach
### Użyłem map() i key() wiem już do czego służą
### Zainstalowałem i użyłem bootstrapa

### Jak działa ReactDom.render() i komponent Clock
 1. Przekazujemy komponent klasowy Clock do ReactDOM.render().
    React przywołuje konstruktor komponentu Clock

 2. Następnie React przywołuje metode render() klasy Clock,
    dzieki temu wie co ma wyswietlic i robi to

 3. Nastepnie kiedy Clock jest już w DOM, react przywołuje metodę
    componentDidMount(), i ustawia się timer do przywoływania metody tick()
    raz na sekunde.

 4. Co sekunde przywoływana jest metoda tick(), w niej przyłowuje sie setState()
    z obiektem zawierającym terazniejszy czas. Dzieki setState() react wie
    że nastąpiły zmiany i przywołuje render()

 5. Jesli komponent Clock jest usuniety z DOM, react przywołuje metode componentWillUnmount()

#### Zainstalowany react
![strona głóna](/Lab6/scr/1.PNG)

#### Moja strona
![strona głóna](/Lab6/scr/4.PNG)

#### Dlaczego potrzebujemy kluczy:
![strona głóna](/Lab6/scr/2.PNG)
