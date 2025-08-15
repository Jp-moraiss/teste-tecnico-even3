const form = document.getElementById('formulario');
const lista = document.getElementById('lista'); 

form.addEventListener('submit', function(event){
    event.preventDefault();

    const nome = document.getElementById('nome').value.trim();
    const email = document.getElementById('email').value.trim();

    if (nome && email){
        const item = document.createElement('li');
        item.textContent = `${nome} - ${email}`;
        lista.appendChild(item);

        form.reset();
    }
})