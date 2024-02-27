#Descargar python de la microsoft store
#Luego entrais a emsdk i ejecutais ./emsdk_env.bat
#Luego haceis ./emsdk activate latest

#En C tendreis que hacer que se muestre 1000 veces una iteracion por consola, pista, es igual que con java, si no te acuerdas busca informacion :3
#Esta iteraciín tendreis que ponerla donde indica el fichero .c, si lo poneis en otro lugar puede que no funcione

#Luego ejecutais emcc -o hello3.html hello3.c --shell-file html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"
#Por ultimo copiais todo el contenido de copia.html a hello3.html

#Una vez hecho entrais al hello3.html y bajais hasta el document.getElementById("mybuttonJS"), ahi dentro creais otro bucle de 1000 iteraciones donde se os indica, que haga un console.log

Luego con el Live Server lo mostrais y habrán 2 botones, al pulsarlos vereis que uno de ellos es mas rapido que el otro, ya que tambien muestra el tiempo que tarda
