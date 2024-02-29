# Quan cloneu aquest repositori haureu de clonar aquest també al root del vostre projecte
(git clone https://github.com/emscripten-core/emsdk.git)

## Descargar python de la microsoft store
## Luego entrais a la carpeta emsdk y ejecutáis ./emsdk install latest y luego ./emsdk_env.bat
## Luego haceis ./emsdk activate latest

## En C tendreis que hacer que se muestre 1000 veces una iteracion por consola, pista, es igual que con java, si no te acuerdas busca informacion :3
## Esta iteración tendreis que ponerla donde la indica el fichero .c, si lo poneis en otro lugar puede que no funcione

## Luego ejecutais emcc -o hello3.html hello3.c --shell-file html_template/shell_minimal.html -s NO_EXIT_RUNTIME=1 -s "EXPORTED_RUNTIME_METHODS=['ccall']"
## Después copiais todo el contenido de copia.html a hello3.html

## Una vez hecho entrais al hello3.html y bajais hasta el document.getElementById("mybuttonJS"), ahi dentro creáis otro bucle de 1000 iteraciones donde se os indica y que haga un console.log

Por último con el Live Server lo mostráis y habrán 2 botones, al pulsarlos veréis que uno de ellos es mas rápido que el otro, ya que también muestra el tiempo que tarda
