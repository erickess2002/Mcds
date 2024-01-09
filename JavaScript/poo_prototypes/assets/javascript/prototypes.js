// Consturora -> Classe Base

function Person(name, surname){

    this.name = name;
    this.surname = surname;
    this.fullName = () => this.nome + ' ' + this.sobrenome;

}

// Instanciando objetos
const p1 = new Person('Bento', 'Antônio');
const p2 = new Person('Erick', 'Eduardo');

console.dir(p1);
console.dir(p2);