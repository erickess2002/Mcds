function Produto (nome, preco, estoque) {

    this.nome = nome;
    this.preco = preco;

    Object.defineProperty(this, 'estoque', {
    
        enumerable: true,
        value: estoque,
        writable: true,
        configurable: false

    });
}

const prod1 = new Produto('Camisa', 20, 3);
console.log(prod1);
console.log(Object.keys(prod1));