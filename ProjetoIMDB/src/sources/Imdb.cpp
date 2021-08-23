/*! @Joao Paulo Nunes de Lima. */

/**
 * Importações
 */
#include "../headers/Imdb.hpp"

//-------------- TESTE ----------------------------
// p/ Imdb::iniciarBanco2
//! Ler arquivo de stream e salva dados no vectors
std::vector<std::string> vAtor;
static std::vector<Ator> atores10;
//-------------- TESTE (fim) ----------------------

// p/ Imdb::iniciarBanco
static std::vector<Ator> atores;
static std::vector<Diretor> diretores;
static std::vector<Filme> filmes;
static std::vector<Cinema> cinemas;

//------------- TESTE -----------------------
// Observação: fazer esta função p/ demais arquivos: pode ser a mesma função
//! Função que inicializa o bando de dados.
void Imdb::iniciarBanco2(){

	/** Variável utilizada para a sepação das strings vindas do arquivo. */
	std::string delimiter = ";";

	/**
	 * Inicializando Atores.
	 */

	// Ler arquivo de stream ator.txt e salva em um vector.
    std::ifstream arq;
    arq.open ("./src/sources/ator.txt", std::ios::in);   //!< Abre arquivo de stream em modo leitura.

    char dado[100];    //!< salva os dados lidos do arquivo.

    // Executa a leitura do arquivo stream se foi aberto corretamente.
	if(arq.is_open()) {
	    //!< Laço que ler dados do arquivo de stream.
	    while (!arq.eof()){          //!< Laço que ler caracteres simples.
	    	arq.getline(dado, 100);
	      
			std::string s(dado);
			std::vector<std::string> dados;

			std::size_t pos = 0;
			std::string token;
			while ((pos = s.find(delimiter)) != std::string::npos) {
				token = s.substr(0, pos);
				//std::cout << token << std::endl;
			 	dados.push_back(token);
			 	s.erase(0, pos + delimiter.length());
			}

			/** 
			 * Cria o ator e o insere no vetor de atores global.
			 */
			std::vector<int> obras;
			std::stringstream geek(s);
			int x =0;
			geek >> x;
			obras.push_back(x);

			Ator ator(stoi(dados[0]), dados[1], stoi(dados[2]), dados[3], stoi(dados[4]), obras);

			atores.push_back(ator);


	    } 
	}
	else {
		std::cout<<"Erro ao abrir arquivo de Atores!"<< std::endl;
		getchar();
	}
    arq.close();      //!< Fecha o arquivo de stream.

	
	/* ------------------------------------------------------------------------------------------------------------------------- */
	// Ler arquivo de stream diretor.txt e salva em um vector.
    arq.open ("./src/sources/diretor.txt", std::ios::in);   //!< Abre arquivo de stream em modo leitura.

    // Executa a leitura do arquivo stream se foi aberto corretamente.
	if(arq.is_open()) {
	    //!< Laço que ler dados do arquivo de stream.
	    while (!arq.eof()){          //!< Laço que ler caracteres simples.
	    	arq.getline(dado, 100);
	      
			std::string s(dado);
			std::vector<std::string> dados;

			std::size_t pos = 0;
			std::string token;
			while ((pos = s.find(delimiter)) != std::string::npos) {
				token = s.substr(0, pos);
				std::cout << token << std::endl;
			 	dados.push_back(token);
			 	s.erase(0, pos + delimiter.length());
			}

			/** 
			 * Cria o ator e o insere no vetor de atores global.
			 */
			std::vector<int> obras;
			std::stringstream geek(s);
			int x =0;
			geek >> x;
			obras.push_back(x);
			Diretor diretor(stoi(dados[0]), dados[1], stoi(dados[2]), dados[3], stoi(dados[4]), obras);
			diretores.push_back(diretor);

	    } 
	}
	else {
		std::cout<<"Erro ao abrir arquivo de Atores!"<< std::endl;
		getchar();
	}
    arq.close();      //!< Fecha o arquivo de stream.


	/* ------------------------------------------------------------------------------------------------------------------------- */
	// Ler arquivo de stream filme.txt e salva em um vector.
    arq.open ("./src/sources/filme.txt", std::ios::in);   //!< Abre arquivo de stream em modo leitura.

    // Executa a leitura do arquivo stream se foi aberto corretamente.
	if(arq.is_open()) {
	    //!< Laço que ler dados do arquivo de stream.
	    while (!arq.eof()){          //!< Laço que ler caracteres simples.
	    	arq.getline(dado, 100);
	      
			std::string s(dado);
			std::vector<std::string> dados;

			std::size_t pos = 0;
			std::string token;
			while ((pos = s.find(delimiter)) != std::string::npos) {
				token = s.substr(0, pos);
				//std::cout << token << std::endl;
			 	dados.push_back(token);
			 	s.erase(0, pos + delimiter.length());
			}

			/** 
			 * Cria o ator e o insere no vetor de atores global.
			 */
			std::vector<int> diretores;
			std::stringstream geek(dados[6]);
			int x =0;
			geek >> x;
			diretores.push_back(x);

			std::vector<int> elenco;
			std::stringstream geek2(dados[7]);
			geek2 >> x;
			elenco.push_back(x);

			Filme filme(stoi(dados[0]), dados[1], dados[2], dados[3], stoi(dados[4]), stoi(dados[5]), diretores, elenco, stoi(dados[7]), dados[8]);
			filmes.push_back(filme);

	    } 
	}
	else {
		std::cout<<"Erro ao abrir arquivo de Atores!"<< std::endl;
		getchar();
	}
    arq.close();      //!< Fecha o arquivo de stream.


	/* ------------------------------------------------------------------------------------------------------------------------- */
	// Ler arquivo de stream cinema.txt e salva em um vector.
    arq.open ("./src/sources/cinema.txt", std::ios::in);   //!< Abre arquivo de stream em modo leitura.

    // Executa a leitura do arquivo stream se foi aberto corretamente.
	if(arq.is_open()) {
	    //!< Laço que ler dados do arquivo de stream.
	    while (!arq.eof()){          //!< Laço que ler caracteres simples.
	    	arq.getline(dado, 100);
	      
			std::string s(dado);
			std::vector<std::string> dados;

			std::size_t pos = 0;
			std::string token;
			while ((pos = s.find(delimiter)) != std::string::npos) {
				token = s.substr(0, pos);
				//std::cout << token << std::endl;
			 	dados.push_back(token);
			 	s.erase(0, pos + delimiter.length());
			}

			/** 
			 * Cria o ator e o insere no vetor de atores global.
			 */
			std::vector<int> cartaz;
			std::stringstream geek(s);
			int x =0;
			geek >> x;
			cartaz.push_back(x);

			Cinema cinema(dados[0], dados[1], cartaz);
			cinemas.push_back(cinema);

	    } 
	}
	else {
		std::cout<<"Erro ao abrir arquivo de Atores!"<< std::endl;
		getchar();
	}
    arq.close();      //!< Fecha o arquivo de stream.
    


}


//---- FUNÇÃO TESTE------
//Iniciar o banco: será substituída por iniciarBanco2()

//Iniciar o banco de dados sem arquivo
	void Imdb::iniciarBanco(){
		std::vector<int> obras1;
		std::vector<int> obras2;

		obras1.push_back(1);
		obras1.push_back(2);

		obras2.push_back(3);
		obras2.push_back(4);
		obras2.push_back(5);


		// Atores
		Ator ator1(1, "Mel Gibson", 50, "Arizona - USA", 2, obras1);
		Ator ator2(2, "Arnold Schuazneger", 68, "CA - USA", 3, obras2);

		atores.push_back(ator1);
		atores.push_back(ator2);
//		std::cout << atores.size();

		//Diretores
		Diretor diretor1(3, "Quentin Tarantino", 70,  "New York - USA", 10, obras1);
		Diretor diretor2(4, "Diretor Famoso", 32,  "Sao Paulo - Brasil", 3, obras2);


		std::vector<int> diretores1;
		std::vector<int> diretores2;

		diretores1.push_back(diretor1.getId());
		diretores2.push_back(diretor1.getId());
		diretores2.push_back(diretor2.getId());

		//Filmes

		std::vector<int> elenco1;
		std::vector<int> elenco2;

		elenco1.push_back(ator1.getId()); 
		elenco1.push_back(ator2.getId());



		Filme filme1(1, "Mad Max", "USA", "Acao", 5, 120, diretores1, elenco1, 1986, "Universal");
		Filme filme2(2, "Mad Max Fury Road", "USA", "Acao", 5, 120, diretores2, elenco1, 1986, "Universal");

		filmes.push_back(filme1);
		filmes.push_back(filme2);


		//Cinemas

		std::vector<int> cartaz1;

		std::cout << std::endl << filmes[1].getId();

		cartaz1.push_back(filmes[0].getId());
		cartaz1.push_back(filmes[1].getId());

		Cinema cinema1("Cinemark", "Midway, ZS, natal/RN", cartaz1);

		cinemas.push_back(cinema1);


		
	}

	//! Função que apresenta as opções de login: usuário ou administrador.
	void Imdb::menuUser(){

//------- TESTE ---------------------------
//		iniciarBanco2();		//!< Inicializa o banco de dados.
//------- TESTE ---------------------------
		//iniciarBanco();		//!< Inicializa o banco de dados.
		iniciarBanco2();

 		Imdb user, adm;	//! Cria um objeto do tipo Imdb.

		int val;	//! Guardará a opção do menu escolhida pelo usuário.
	    do{			//! Loop que mostra as opções de menu de Usuário do Sistema IMDB.
					
		    system("clear");    // limpa a tela do terminal.

	        std::cout << "-----SISTEMA IMDB-----\n";	//! Imprime na tela.
	        std::cout << "Por favor digite sua opção de login!!! \n";	//! Imprime na tela.
	        std::cout << "1 - Administrador. \n";		//! Opção de menu.
	        std::cout << "2 - Usuário \n";		 		//! Opção de menu.
	        std::cout << "0 - Sair \n";		 		    //! Opção de menu.

	        std::cin >> val;		//! Salva a opção do menu escolhida pelo usuário.
	        switch(val){

	        	case 1:				//! Acessa o menu principal como administrador.
	        		adm.menu();		//! Mostra o menu principal.
	        		break;

	        	case 2:				//! Acessa o menu principal como usuário.
	        		user.menu();	//! Mostra o menu principal.
	        		break;

	        	case 0:		//! Encerra o sistema.
	        		std::cout << "\nO sistema será encerrado!!!" << std::endl;
					encerrarBanco();
			        getchar();     // mantém a tela aberta até apertar ENTER
	        		break;

	            default:
	                system("clear");    // limpa a tela do terminal
	                std::cout << "-----SISTEMA IMDB-----\n";	//! Imprime na tela.
	                std::cout << "\n Opção inválida!!! \n";
			        getchar();     // mantém a tela aberta até apertar ENTER
			        getchar();     // mantém a tela aberta até apertar ENTER
	                break;
	        }

		}while(val!=0);		//! Sai do loop quando a opção escolhida for zero.
 
	}

	//! Função que que apresenta as apções de menu para o usuário do sistema.
	void Imdb::menu(){

 		Imdb imdb;	//! Cria um objeto do tipo Imdb.

	    int op;		//! Guardará a opção do menu escolhida pelo usuário.
	    do{			//! Loop que mostra as opções de menu do Sistema IMDB.
					
	        system("clear");    // limpa a tela do terminal.

	        std::cout << "-----SISTEMA IMDB-----\n";	//! Imprime na tela.
	        std::cout << "1 - Nos Cinemas \n";   		//! Opção de menu.
	        std::cout << "2 - Pesquisar por Ator \n";		//! Opção de menu.
	        std::cout << "3 - Cadastrar Filme \n";		 		//! Opção de menu.
	        std::cout << "4 - Próximos Lançamentos \n";		//! Opção de menu.
	        std::cout << "5 - Obras Mais Votadas \n";		//! Opção de menu.
	        std::cout << "0 - Retornar a tela de login!!! \n";		//! Opção de menu.

	        std::cin >> op;		//! Salva a opção do menu escolhida pelo usuário.
	        switch (op){		//! Será executado o conjunto de bloco de comandos conforme a opção de menu escolhida.
					            // executar de acordo com a opção desejada.

	            case 1:		//! Lista as Obras em exibição nos cinemas.
	                system("clear");    // limpa a tela do terminal.
	                std::cout << "-----Filmes em cartaz-----\n";	//! Imprime na tela.
	                mostrarCartaz();
	                break;

	            case 2:		//! Lista ???????????????
	                system("clear");    // limpa a tela do terminal.
	                std::cout << "-----Pesquisa por Ator-----\n";	//! Imprime na tela.
	                buscarPorAtor();
	                break;

	            case 3:		//! Lista ???????????????
	                system("clear");    // limpa a tela do terminal.
	                std::cout << "-----SISTEMA IMDB-----\n";	//! Imprime na tela.
	                cadastrarFilme();
	                break;

	            case 4:		//! Lista ???????????????
	                system("clear");    // limpa a tela do terminal.
	                std::cout << "-----SISTEMA IMDB-----\n";	//! Imprime na tela.
	                std::cout << "\n---TESTE case 4 ok---\n";
	                break;

	            case 5:		//! Lista ???????????????
	                system("clear");    // limpa a tela do terminal.
	                std::cout << "-----SISTEMA IMDB-----\n";	//! Imprime na tela.
	                std::cout << "\n---TESTE case 2 ok---\n";
	                break;

	        	case 0:		//! Retorna para o menu usuário/administrador.
	        		std::cout << "\n Retornando a tela de login!!!" << std::endl;
			        getchar();     // mantém a tela aberta até apertar ENTER
	        		break;

	            default:
	                system("clear");    // limpa a tela do terminal
	                std::cout << "-----SISTEMA IMDB-----\n";	//! Imprime na tela.
	                std::cout << "\n Opção inválida!!! \n";
			        getchar();     // mantém a tela aberta até apertar ENTER

	                break;
	        }

	        getchar();     // mantém a tela aberta até apertar ENTER
	        getchar();     // mantém a tela aberta até apertar ENTER

	    }while(op!=0);	   //! Sai do loop quando a opção escolhida for zero.
	}

	//! Lista todas as sessões que estão nos cinemas.
	void Imdb::mostrarSessao(){
		std::cout << "\n---TESTE ate aqui ok---\n" << std::endl;
	}

	//! Lista os filmes/séries que serão lançamentos em breve.
	void Imdb::proximoLancamento(){
		// <code here>
	}

	//! Lista os filmes/séries mais votados. 
	void Imdb::obraMaisVotada(){
		// <code here>
	}

	//! Cadastra novos usuários do sistema.
	void Imdb::cadastrarUsuario(){
		char dados_usuario[100];

    // Abrir o arquivo para escrever no modo app (append)
        std::ofstream arqOut;
        arqOut.open("./arq/usuario.txt", std::ios::app);

        // escrever no arquivo
        if(arqOut.is_open()){

            std::cin.ignore();
            std::cout << "\n Digite o nome de usuario desejado: ";
            std::cin.getline(dados_usuario, 100);
            arqOut << dados_usuario << std::endl;

            std::cout << "\n Digite a senha desejada: ";
            std::cin.getline(dados_usuario, 100);
            arqOut << dados_usuario << std::endl;


            // fechar arquivo
            arqOut.close();
        }

        else{
            std::cout << "\nErro ao abrir o arquivo\n!!!" << std::endl;
        }
	}

	/**
	 * Função que verifica se um usuário e senha estão cadastrados no sistema.
     */
	//! Verifica usuário cadastrado no sistema.
	bool Imdb::verificarUsuario(std::string user, std::string password){
		// <code here>
	}

	//! Cadastra nova série.
	void Imdb::cadastrarSerie(){
		// <code here>
	}

	//! Lista todas as séries.
	void Imdb::mostrarSerie(){
		// <code here>
	}

	//! Cadastra filmes.
	void Imdb::cadastrarFilme(){
		
		std::cout << std::endl << "Cadastramento de filme" << std::endl;

		int id_;
		std::string titulo_;
		std::string pais_;
		std::string genero_;
        float nota_;
		int duracao_;
		int diretorId;
		std::vector<int> diretor_;
		int atorId;
		std::vector<int> elenco_;
        int ano_;
		std::string estudio_;

		getline(std::cin, titulo_);
		std::cout << std::endl << "Insira o titulo do filme: ";
		getline(std::cin, titulo_);
		std::cin.clear();

		std::cout << std::endl << "Insira o pais do filme: ";
		getline(std::cin, pais_);
		std::cin.clear();

		std::cout << std::endl << "Insira o genero do filme: ";
		std::cin >> genero_;

		std::cout << std::endl << "Insira a nota do filme(float): ";
		std::cin >> nota_;

		std::cout << std::endl << "Insira a duracao do filme(int): ";
		std::cin >> duracao_;

		std::cout << std::endl << "Insira o id de um diretor do filme(int): ";
		std::cin >> diretorId;
		diretor_.push_back(diretorId);

		std::cout << std::endl << "Insira o id de um ator do filme(int): ";
		std::cin >> atorId;
		elenco_.push_back(atorId);

		std::cout << std::endl << "Insira o estudio do filme: ";
		getline(std::cin, estudio_);
		std::cin.clear();

		std::cout << std::endl << "...Processando" << std::endl;

		Filme filme(filmes.size()+1, titulo_, pais_, genero_, nota_, duracao_, diretor_, elenco_, ano_, estudio_);

		filmes.push_back(filme);

		std::cout << std::endl << "Filme inserido com sucesso!" << std::endl;



	}

	/**
	 * Função depreciada.
	 */
	void Imdb::cadastrarCinema(){
		char dados[100];

    // Abrir o arquivo para escrever no modo app (append)
        std::ofstream arqOut;
        arqOut.open("./arq/cinema.txt", std::ios::app);

        // escrever no arquivo
        if(arqOut.is_open()){

            std::cin.ignore();
            std::cout << "\n Digite nome: ";
            std::cin.getline(dados,100);
            arqOut << dados << std::endl;

            std::cout << "\n Digite endereco: ";
            std::cin.getline(dados,100);
            arqOut << dados << std::endl;

            // fechar arquivo
            arqOut.close();
        }

        else{
            std::cout << "\nErro ao abrir o arquivo\n!!!" << std::endl;
        }
	}

	/**
	 * Função depreciada
	 */
	const std::vector<std::string> pegaColunas(const std::string& s){

		const char c =';';
		std::string buff{""};
		std::vector<std::string> v;
		
		for(auto n:s)
		{
			if(n != c) buff+=n; else
			if(n == c && buff != "") { v.push_back(buff); buff = ""; }
		}
		if(buff != "") v.push_back(buff);
		
		return v;
	}

	/**
	 * Método depreciado.
	 */
	std::vector<std::string> lerLinha(std::string dado){

		// std::string myReader;
		// std::fstream output;
		// std::fstream arquivo("log1.txt");
		// output.open("log1.txt");

		// std::cout << arquivo.is_open() << " " << output.is_open() << " ";

		// if(output.is_open()) {
		// 	std::cout << "teste";
		// 	while(!output.eof()) {

		// 		getline(output, myReader);
		// 		if(checaNomeAtor(dado, myReader)){
		// 			return pegaColunas(myReader);
		// 		}

		// 	}
		// }

		// else 
		// 	std::cout<<"Erro ao abrir arquivo!"<< std::endl;

		// output.close();

	}


	/**
	 * Métodos de pesquisas avançadas.
	 */

	//Método auxiliar para mostrar elenco e diretores de filme
	void Imdb::mostraStaff(const std::vector<int>& diretoresFilme, const std::vector<int>& atoresFilme){

		std::cout << std::endl << "Diretor(es):" << std::endl;

		for(int i=0; i< diretores.size(); i++){
			if(diretores[i].getId() == diretoresFilme[i]){
				diretores[i].mostrarInfo();
			}
		}

		std::cout << std::endl << "Ator(es):" << std::endl;

		for(int i=0; i< atores.size(); i++){
			if(atores[i].getId() == atoresFilme[i]){
				atores[i].mostrarInfo();
			}
		}

	}

	/**
	 * Mostra o filme selecionado.
	 */
	void Imdb::mostrarFilme(int& idFilme){

		for(int i=0; i< filmes.size(); i++){

			if(filmes[i].getId() == idFilme){

				filmes[i].mostrarObra();
				std::cout << std::endl << "-------------------" << std::endl;

			}

		}

	}


	void Imdb::buscarPorAtor(){
		std::string nome;

		std::cout << "Digite o nome do ator: ";
		std::cin.ignore();
		getline(std::cin, nome);
		// std::vector<std::string> dadosAtor = lerLinha(nome);

		// std::cout << "Dados do ator bruto:" << std::endl
		// 	<< dadosAtor[1] << std::endl << dadosAtor[2] << std::endl;
		bool busca;		//!< Variável booleana.
		for(int i=0; i<atores.size(); i++){

			if(atores[i].getNome().compare(nome) == 0){

				busca = true;		//!< Ator foi encontrado.

				system("clear");
				std::cout << "Dados do Ator:" << std::endl;
				atores[i].mostrarInfo();

				std::cout << std::endl << "Dados das obras do ator:" << std::endl;
				for(int j=0; j<atores[i].getObras().size(); j++){

					//Pega o vetor com os ids de obras
					std::vector<int> obras = atores[i].getObras();
					
					if(filmes[j].getId() == obras[j]){
						filmes[j].mostrarObra();
						mostraStaff(filmes[j].getDiretor(), filmes[j].getElenco());
						break;		// Sao do loop quando encontrar o autor.
						getchar;	// mantém a tela aberta até apertar ENTER
					}
				}
			}
		}
		//! Condicional que mostra uma mensagem quando o nome do ator não foi encontrado.
		if(busca != true){
			std::cout << "\n Ator não encontrado!!! \n";
			getchar;	// mantém a tela aberta até apertar ENTER
		}		
	}

	void Imdb::mostrarCartaz(){
		std::cout << "Selecione o cinema:" << std::endl;

		for(int i=0; i<cinemas.size(); i++){

			std::cout<< i << " - " << cinemas[i].getNome() << std::endl;

		}

		int escolha;
		std::cin >> escolha;

		for(int i=0; i<cinemas.size(); i++){

			if(i == escolha){

				for(int j=0; j<cinemas[i].getCartaz().size(); j++){

					mostrarFilme(cinemas[i].getCartaz()[j]);

				}

			}

		}

	}

	//Encerra o banco salvando os dados em arquivo.
	void Imdb::encerrarBanco(){


		/* ------------------------------------------------------------------------------------------------------ */
		//Salva os dados do arquivo ator.txt.
		std::ofstream arqOut;
        arqOut.open("ator.txt", std::ios::out);

        // escrever no arquivo
        if(arqOut.is_open()){

			for(int i=0; i < atores.size(); i++){

				arqOut << atores[i].getId() << ";" << atores[i].getNome() << ";" << atores[i].getIdade() 
						<< ";" << atores[i].getEndereco() << ";" << atores[i].getObras()[0] << ";" << atores[i].getQuantObras() << std::endl;

			}

        }

        else{
            std::cout << "\nErro ao abrir o arquivo\n!!!" << std::endl;
        }
		arqOut.close();


		/* ------------------------------------------------------------------------------------------------------ */
		//Salva os dados do arquivo diretor.txt.
        arqOut.open("diretor.txt", std::ios::out);

        // escrever no arquivo
        if(arqOut.is_open()){

			for(int i=0; i < diretores.size(); i++){

				arqOut << diretores[i].getId() << ";" << diretores[i].getNome() << ";" << diretores[i].getIdade() 
						<< ";" << diretores[i].getEndereco() << ";" << diretores[i].getObrasDiretor() << ";" << diretores[i].getQuantObras() << std::endl;

			}

        }

        else{
            std::cout << "\nErro ao abrir o arquivo\n!!!" << std::endl;
        }
		arqOut.close();



		std::cout << std::endl << "Banco encerrado com sucesso!" << std::endl;

		/* ------------------------------------------------------------------------------------------------------ */
		//Salva os dados do arquivo filme.txt.
        arqOut.open("filme.txt", std::ios::out);

        // escrever no arquivo
        if(arqOut.is_open()){

			for(int i=0; i < filmes.size(); i++){

				arqOut << filmes[i].getId() << ";" << filmes[i].getTitulo() << ";" << filmes[i].getPais() << ";" << filmes[i].getGenero() 
						<< ";" << filmes[i].getNota() << ";" << filmes[i].getDuracao() << ";" << filmes[i].getDiretor()[0] << ";" << filmes[i].getElenco()[0] 
						<< ";" << filmes[i].getAno() << ";" << filmes[i].getEstudio() << std::endl;

			}

        }

        else{
            std::cout << "\nErro ao abrir o arquivo\n!!!" << std::endl;
        }
		arqOut.close();


		/* ------------------------------------------------------------------------------------------------------ */
		//Salva os dados do arquivo cinema.txt.
        arqOut.open("cinema.txt", std::ios::out);

        // escrever no arquivo
        if(arqOut.is_open()){

			for(int i=0; i < cinemas.size(); i++){

				arqOut << cinemas[i].getNome() << ";" << cinemas[i].getEndereco() << ";"
						<< cinemas[i].getCartaz()[0] << ";" << std::endl;

			}

        }

        else{
            std::cout << "\nErro ao abrir o arquivo\n!!!" << std::endl;
        }
		arqOut.close();

		std::cout << std::endl << "Banco encerrado com sucesso!" << std::endl;

	}