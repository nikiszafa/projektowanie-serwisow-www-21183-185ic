import React from 'react';
import ReactDOM from 'react-dom';
//import App from './App';
import reportWebVitals from './reportWebVitals';
import 'bootstrap/dist/css/bootstrap.css'
import './index.css';

function NumberList(props) {
    const numbers = props.numbers;
    const listItems = numbers.map((number) =>
        <li key={number.toString()}>
            {number}
        </li>
    );
    return (
        <ul>{listItems}</ul>
    );
}

const numbers = [1, 2, 3, 4, 5];

const user = {
    firstName: "Nikodem",
    lastName: "Perez"
};

function formatName(user) {
    return user.firstName + ' ' + user.lastName;
}

function Welcome(props) {
    const isLoggedIn = props.isLoggedIn;
    if (isLoggedIn) {
        return <UserGreeting/>;
    } else {
        return <GuestGreeting/>;
    }
}

function UserGreeting(props) {
    return <h1>Witaj, {formatName(user)}</h1>;
}

function GuestGreeting(props) {
    return <h1>Zaloguj sie</h1>;
}

class Clock extends React.Component {
    constructor(props) {
        super(props);
        this.state = {date: new Date()};
    }

    //uruchomi się kiedy komponent zostanie zrenderowany w DOM
    componentDidMount() {
        this.timerID = setInterval(
            () => this.tick(),
            1000
        )
    }

    //Jesli komponent Clock zostanie usuniety z DOM i timer zatrzyma sie
    componentWillUnmount() {
        clearInterval(this.timerID);
    }

    tick() {
        this.setState({
            date: new Date()
        });
    }

    render() {
        return (
            <div>
                <h2>Mamy godzine {this.state.date.toLocaleTimeString()}.</h2>
            </div>
        )
    };
}

// 1. Przekazujemy komponent klasowy Clock do ReactDOM.render().
//    React przywołuje konstruktor komponentu Clock
// 2. Następnie React przywołuje metode render() klasy Clock,
//    dzieki temu wie co ma wyswietlic i robi to
// 3. Nastepnie kiedy Clock jest już w DOM, react przywołuje metodę
//    componentDidMount(), i ustawia się timer do przywoływania metody tick()
//    raz na sekunde.
// 4. Co sekunde przywoływana jest metoda tick(), w niej przyłowuje sie setState()
//    z obiektem zawierającym terazniejszy czas. Dzieki setState() react wie
//    że nastąpiły zmiany i przywołuje render()
// 5. Jesli komponent Clock jest usuniety z DOM, react przywołuje metode componentWillUnmount()

function App() {
    return (

        <div>
            <Clock/>
            <Welcome isLoggedIn={true}/>
            <h4>Oto moja lista:</h4>
            <NumberList numbers={numbers}/>
        </div>
    );
}

ReactDOM.render(
    <App/>,
    document.getElementById('root')
);

// If you want to start measuring performance in your app, pass a function
// to log results (for example: reportWebVitals(console.log))
// or send to an analytics endpoint. Learn more: https://bit.ly/CRA-vitals
reportWebVitals();
