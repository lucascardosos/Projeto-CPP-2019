/*!
Classe que representa o album das Obras, classe herdada de Usuário.
@author Elildes Fortaleza Santos
*/

#ifndef IMDB_HPP
#define IMDB_HPP

/**
 * Importações
 */
#include <iostream>
#include <string>
#include <cstdio>           // p/ getchar()
#include <cstdlib>          // p/ system("clear")
#include <fstream>
#include <vector>
#include <sstream>
#include "../headers/Usuario.hpp"
#include "../headers/Diretor.hpp"
#include "../headers/Ator.hpp"
#include "../headers/Serie.hpp"
#include "../headers/Filme.hpp"
#include "../headers/Cinema.hpp"

/**
 * Definição da Classe
 */
class Imdb
{
	
	private:
// descomentar após implementar a classe Usuário.
//		Usuario usuario;	//!< objeto que representa o usuario.

	public:
		//! Construtor da Classe.
		Imdb() = default;

//---- FUNÇÃO TESTE------ este função substituirá a função iniciaBanco()
		/**
		 * Função que inicializa o banco de dados: ler as informações dos arquivos
		 * que contenham as informações de Atores, Diretores, Filmes e Cinemas:
		 * ler dados dos arquivos e salva em vectors.
		 */
		void iniciarBanco2();

//---- FUNÇÃO TESTE------
		void iniciarBanco();  // esta método será substituído...

		/**
		 * Biblioteca de funções que faz a interação com o usuário,
		 * que permite ao usuario escolher a opção de login:
		 * usuário ou administrador
		 */
		void menuUser();

		/**
		 * Biblioteca de funções que faz a interação com o usuário,
		 * que permite ao usuario escolher as opções de manipulação
		 * do sistema. É esta função que chama as demais funções do sistema
		 * em forma de loop, até que o usuário esolha as opções
		 * de processamento.
		 */
		void menu();

		/**
		 * Função que imprime uma lista de filmes/séries com todas as sessões em exibição.
		 */
		void mostrarSessao();

		/**
		 * Função que imprime todos os filmes/séries que serão lançados.
		 */
		void proximoLancamento();

		/**
		 * Função que imprime uma lista dos filmes/séries mais votados.
		 */
		void obraMaisVotada();

		/**
		 * Função que cadastra um novo usuário do sistema.
		 */
		void cadastrarUsuario();

		/**
		 * Função que verifica se um usuário e senha estão cadastrados no sistema.
		 */
		/// Return true or false.
	    /// @param user nome do usuário.
	    /// @param password senha do usuário.
		bool verificarUsuario(std::string user, std::string password);

		/**
		 * Função que faz o cadastro de uma série no sistema.
		 */
		void cadastrarSerie();

		/**
		 * Função que imprime todas as séries que estão cadastradas no sistema.
		 */
		void mostrarSerie();

		/**
		 * Função que faz o cadastro de um filme no sistema.
		 */
		void cadastrarFilme();

		/**
		 * Função que imprime o filme que foi requisitado a partir do id.
		 */
		void mostrarFilme(int& idFilme);

		/**
		 * Função que faz o cadastro de um cinema no sistema.
		 */
		void cadastrarCinema();

		/**
		 * Métodos de buscas avançadas.
		 */
		void buscarPorAtor();

		/**
		 * Método que mostra os filmes em cartaz no cinema selecionado.
		 */
		void mostrarCartaz();

		void mostraStaff(const std::vector<int>& diretoresFilme, const std::vector<int>& atoresFilme);

		/**
		 * Salva os dados do banco(os vetores de objetos) em arquivo.
		 */
		void encerrarBanco();

};

#endif