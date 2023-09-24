const contenedor = document.getElementById('botones');
const compararOrden = document.getElementById('comparar');
const mostrarIgualdades = document.getElementById('igualdades');
var swap = function (x){return x};

function updateButton(button) {
    button.style.backgroundImage = 'url(img/' + button.innerHTML + '.png)';
}

//Crear botones
const objetos = ["manzana", "banana", "naranja", "uva", "sandía"];

function shuffleArray(array) {
    const newArray = [...array]; // Crear una copia del array original
    for (let i = newArray.length - 1; i > 0; i--) {
      const j = Math.floor(Math.random() * (i + 1)); // Generar un índice aleatorio
      // Intercambiar elementos usando destructuring
      [newArray[i], newArray[j]] = [newArray[j], newArray[i]];
    }
    return newArray; // Devolver el array mezclado aleatoriamente
}

let lista = shuffleArray(objetos);
let listaOrdenada = shuffleArray(lista);

lista.forEach((objeto, i) => {
    let node = document.createElement("button")
    node.innerHTML = objeto;
    node.setAttribute('data-index', i);
    updateButton(node);
    contenedor.appendChild(node)
})
const botones = contenedor.querySelectorAll('button');

//Cambiar botones
let primerBotonSeleccionado;

botones.forEach((boton) => {
  boton.addEventListener('click', (e) => {
    if (!primerBotonSeleccionado) {
        e.target.classList.add('active');
        primerBotonSeleccionado = e.target;
    } else {
        primerBotonSeleccionado.classList.remove('active');
        let iPrimero = primerBotonSeleccionado.dataset.index;

        let placeHolder = primerBotonSeleccionado.innerHTML;
        primerBotonSeleccionado.innerHTML = e.target.innerHTML;
        primerBotonSeleccionado.dataset.index = e.target.dataset.index;

        e.target.innerHTML = placeHolder;
        e.target.dataset.index = iPrimero;
        
        updateButton(primerBotonSeleccionado);
        updateButton(e.target);
        primerBotonSeleccionado = null;
        console.log(listaOrdenada);
    }
  });
});

//Comparar
let comparaciones = 0;
compararOrden.addEventListener('click', () => {
    let coincidencias = 0;
    for (let i = 0; i < lista.length; i++) {
        if (listaOrdenada[i] === botones[i].innerHTML) {
            coincidencias++;
        }
    }
    mostrarIgualdades.innerHTML = "Numero de coincidencias:" + coincidencias;
    if(coincidencias !== lista.length){
        mostrarIgualdades.innerHTML = "Numero de coincidencias: " + coincidencias;
        comparaciones++;
    } else {
        mostrarIgualdades.innerHTML = "Completado en " + comparaciones + " comparaciones!";
    }

});