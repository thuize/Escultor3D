# Escultor3D

<p>O objetivo desse projeto é construir uma ferramenta em C++ para realizar esculturas em blocos representados por matrizes digitais, algo como a ideia usada pelo jogo minecraft. </p>
<p>A ideia é permitir que o utilizador da ferramenta seja capaz de criar um arquivo em texto simples que contém uma sequência de passos a serem seguidos para definir propriedades de uma matriz tridimensional. As propriedades contêm especificações de cor para os elementos, de sorte que com o auxílio de softwares de visualização o usuário possa apreciar a escultura criada.</p>
<br>
<p>O programa dispõe das funcionalidades de definir as dimensões de uma matriz tridimensional na qual será exibida as figuras geométricas criadas pelo usuário como sendo a primeira tela do programa. Após definidas suas dimensões, o programa abre uma nova tela que será a principal, contendo as ferramentas de desenho e formatação.</p>
<br><p align = "center">
<img src="https://raw.githubusercontent.com/thuize/Escultor3D/feature-readme/imagens/dialog1.jpeg?token=AC7QGUW7ARMB7KE2IULHRE25DQNU4" align = "center"></p><br>
<p>A tela inicial do programa exibe a tela de desenho, no caso, a matriz 3D. Nosso grupo não conseguiu implementar a função exigida no roteiro do projeto, no qual seria exibido o desenho no plano bidimensional, dessa forma, a imagem do desenho com a forma geomátrica não aparecerá na matriz. </p>
<p>A entrada e saída de informações se dá por meio de botões e sliders(barra de rolamento), que servem para a entrada de valores e execução de ações(no caso dos botões). No canto superior da tela estão localizados os botões de <b>NOVO:</b> para criar um novo desenho; <b>SALVAR:</b> para salvar o desenho atual e gerar o arquivo de extensão .off; <b>PUTVOXEL:</b> para desenhar um pixel(voxel); <b>CUTVOXEL:</b> para apagar um pixel(voxel); <b>SELECIONAR COR:</b> para selecionar a cor do voxel ou figura geométrica a serdesenhada;</p>
<p>No lado direito da tela estão localizadas as ferramentas de desenho de figuras geométricas, sendo cada uma definida por um conjunto de coordenadas a serem fornecidas levando em consideração as especificidades de cada forma. A entrada das coordenadas se dá por meio da ferramenta de slider(barra de rolagem) agrupadas e com o botão de cada a ação a ser realizada ao comando do usuário. Na parte que diz respeito a <b>percorrer a matriz</b>, as barras de rolangens indicam os valores para onde a origem do desenho vai se localizar; Na parte que corresponde ao desenho de um retângulo, o usuário deve informar as coordenadas x,y e z, no qual sua origem será definido no bloco de posição e o tamanho de seu lado será dado pela diferença entre a coordenada da sua origem até a coordenada fornecida na sua criação, logo após, indicando por meio do botão se a ação será de desenhar o ratângulo(<b>PUTRECT</b>) ou se será de apagar um retângulo(<b>CUTRECT</b>); No bloco que diz respeito à esfera, o usuário deve informar o valor do raio da esfera por meio da barra de rolagem,localizando-a nas coordenadas informadas no bloco de perceorrer a matriz, assim como indicar através dos botões se a ação será de desenhar uma esfera(<b>PUTSPHERE</b>) ou de apagar uma esfera(<b>CUTSPHERE</b>); No bloco que diz respeito à elipsóide, o usuário deverá informar as coordenadas dos raios x, y e z, que serão colocados na posição informada através do bloco que percorre a matriz, assim como, indicar a ação será de desenhar uma elipsóide (<b>PUTELLIPSOID</b>) ou se será de apagar uma elisóide(<b>CUTELLIPSOID</b>);</p>
<br>
<p align = "center"><img src="https://raw.githubusercontent.com/thuize/Escultor3D/feature-readme/imagens/principal.jpeg?token=AC7QGUXJBC3QL6N5WYXJFBS5DQOXY"></p>
<br>
<p>Após o processo de desenho executado, o usuário deve salvar suas alterações no botão salvar para que assim seja criado o arquivo .off que permite a visualização do desenho em formato 3D.</p>
<br>
<p align="center"><img src="https://raw.githubusercontent.com/thuize/Escultor3D/feature-readme/imagens/visualizacao.jpeg?token=AC7QGUSKK2EIZSEKZFFFN4C5DQTXW"></p>

<a2><b>Colaboradores:</b></a2><br>
<p>Felipe Lima de Medeiros</p>
<p>Thuize Thainá Melo Nascimento</p>
