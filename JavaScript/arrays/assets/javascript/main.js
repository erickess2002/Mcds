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


// console.log(nomesGrandes);
// console.log(nomesTerminamComA);
// console.log(comIds);
