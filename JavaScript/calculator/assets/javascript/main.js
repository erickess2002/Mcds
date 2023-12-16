function Calculator(){

     this.display = document.querySelector('.display');

    this.start = () => {

        alert('Calculadora iniciada!');
        this.clickBotao();
        this.enter();

    };

    this.enter = () => {

        document.addEventListener('keydown', (e) => {
            if(e.key === "Enter") {
                e.preventDefault();
                this.display.focus();
                this.igual();
            }
        });

    };

    this.clickBotao = () => {

        document.addEventListener('click', (e) => {

            const el = e.target;

            if(el.classList.contains('botao_num')){
                this.botaoParaDisplay(el);
                this.display.focus();
            }

            if(el.classList.contains('botao_clear')){
                this.clearDisplay();
                this.display.focus();
            }

            if(el.classList.contains('botao_apagar')){
                this.apagaUm();
                this.display.focus();
            }
            
            if(el.classList.contains('botao_igual')){
                this.igual();
                this.display.focus();
            }

        });

    };

    this.botaoParaDisplay = val => {
        this.display.value += val.innerText;
    };

    this.clearDisplay = () => {
        this.display.value = '';
    };

    this.apagaUm = () => {
        this.display.value = this.display.value.slice(0, -1);
    };

    this.igual = () => {
        let valores = this.display.value;

        try{

            valores = eval(valores);

            if(!valores){
                alert('Não é possível realizar a operção, revise o input!');
                return;
            }

            this.display.value = valores;

        }catch(e){
            alert('Não é possível realizar a operção, revise o input!');
            return;
        }
    };


}

// function calculator(){
//     return{
//         ////////////// Atributos ////////////////////

//         display: document.querySelector('.display'),

//         /////////////// Metodos ///////////////////

//         start(){

//             alert('Calculadora iniciada!');
//             this.clickBotao();
//             this.enter();

//         },

//         enter(){

//             document.addEventListener('keydown', (e) => {
//                 if(e.key === "Enter") {
//                     e.preventDefault();
//                     this.display.focus();
//                     this.igual();
//                 }
//             });

//         },

//         clickBotao(){

//             document.addEventListener('click', (e) => {

//                 const el = e.target;

//                 if(el.classList.contains('botao_num')){
//                     this.botaoParaDisplay(el.innerText);
//                     this.display.focus();
//                 }

//                 if(el.classList.contains('botao_clear')){
//                     this.clearDisplay();
//                     this.display.focus();
//                 }

//                 if(el.classList.contains('botao_apagar')){
//                     this.apagaUm();
//                     this.display.focus();
//                 }
                
//                 if(el.classList.contains('botao_igual')){
//                     this.igual();
//                     this.display.focus();
//                 }

//             });

//         },

//         botaoParaDisplay(val){
//             this.display.value += val;
//         },

//         clearDisplay(){
//             this.display.value = '';
//         },

//         apagaUm(){
//             this.display.value = this.display.value.slice(0, -1);
//         },

//         igual(){
//             let valores = this.display.value;

//             try{

//                 valores = eval(valores);

//                 if(!valores){
//                     alert('Não é possível realizar a operção, revise o input!');
//                     return;
//                 }

//                 this.display.value = valores;

//             }catch(e){
//                 alert('Não é possível realizar a operção, revise o input!');
//                 return;
//             }
//         }

//     };
// }

const calc = new Calculator();
calc.start();