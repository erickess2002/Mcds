function Produto (nome, preco, estoque) {

    let precoPadrao = preco;

    Object.defineProperties(this, {

        nome:{
            // get: function(){
            //     return nome;
            // },
            enumerable: true,
            value: nome,
            writable: true,
            configurable: false
        },
        
        preco:{
            enumerable: true,
            // value: preco,
            get: function(){
                return precoPadrao;
            },
            set: function(valor) {

                if(typeof valor !== 'number')
                    throw new TypeError('Invalid type of argument.')
                precoPadrao = valor;
        
            },
            // writable: true,
            configurable: true
        }

    });

    Object.defineProperty(this, 'estoque', {
    
        enumerable: true,
        value: estoque,
        writable: true,
        configurable: false

    });

}

// const prod1 = new Produto('Camisa', 20, 3);
// console.log(prod1);
// console.log(Object.keys(prod1));

// delete prod1.preco;

// console.log(prod1);
// console.log(Object.keys(prod1));

const prod2 = new Produto('Sapato', 0, 0);

prod2.preco = 3123;

console.log(prod2.preco);