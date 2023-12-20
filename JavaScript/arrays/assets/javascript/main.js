const pessoas = [

    {nome: 'Ana', idade: 15},
    {nome: 'Caua', idade: 17},
    {nome: 'Erick', idade: 21},
    {nome: 'Miguel', idade: 17},
    {nome: 'Rafaele', idade: 38},
    {nome: 'Roberta', idade: 40}

];

const nomesGrandes = pessoas.filter(obj => obj.nome.length > 5);
const nomesTerminamComA = pessoas.filter(obj => obj.nome.toLowerCase().endsWith('a'))
const comIds = pessoas.map(function(obj, indice){

    newObj = {...obj};
    newObj.id = indice;

    return newObj;

});

const numeros = [1, 2 ,3 ,4 ,5 ,15, 25 ,34, 43, 56, 76, 87, 99];

const total = numeros.reduce(function(acum, valor){

    if(valor % 2 ===0 ) 
        acum += valor;
    
    return acum;

}, 0);


const maisVelha = pessoas.reduce(function(acum, valor){

    if(acum.idade > valor.idade) 
        return acum;
    return valor;

})


// console.log(nomesGrandes);
// console.log(nomesTerminamComA);
// console.log(comIds);
// console.log(total);
// console.log(maisVelha);
