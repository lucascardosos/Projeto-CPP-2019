<h1>sismovie</h1>

Projeto de linguagem de Programação 1: Sistema de Gerenciamento de Filme - IMDB.

## Documentação

Na documentação será utilizado o padrão do *dOxygen*, e por isso é necessário ficar
atento a como comentar o código, abaixo vão as instruções do padrão a ser usado no 
projeto em cada situação.

**Observação importante**
Todos os comentários devem ficar acima do bloco desejado, ex: classe, função, loop; Para
que o doxygen gere corretamente as descrições.
**Exceto** em descrições de variáveis que ficarão ao lado(mesma linha) do código.
Os comentários de descrições de classes, métodos e variáveis principais apenas
precisam ser feitos nos arquivos .hpp, nos .cpp apenas ficarão descrições rápidas
de algum bloco de código que achar necessário.

#### Classe
/*! <br/>
Aqui fica a descrição da classe.<br/>
@author nome do autor da classe(quem a escreveu inicialmente)<br/>
*/<br/>
`class Classe{}`

#### Função/Método
//! Breve descrição do método de apenas uma linha.<br/>
/**<br/>
*Aqui fica a descricao completa do método.<br/>
*@param nome e descrição breve do parametro<br/>
*/<br/>
`void metodo(String s){}`

#### Variáveis
`int var;` //!< Descrição simples, ex.: 'guarda a quantidade de filmes'

#### Outras descrições 
/**<br/>
*Qualquer informação extra pode ser feita utilizando esse modelo.<br/>
*/<br/>

Para um exemplo prático checar a classe: ***Pessoa.hpp*** e ***Pessoa.cpp***

## Tarefas
No menu a sua esquerda existe uma aba chamada *Issues*, é nesse menu que estarão
as tarefas com suas descrições. Você deve escolher uma para fazer e atribuir ela
a você para que outra pessoa não a pega e façam a mesma coisa duas vezes.

Ao selecionar uma tarefa, você deve checar duas coisas ants de iniciar a programação:
* Verificar se está com o código atualizado, para isso utilize o comando `git pull`(atualiza o código local)
* Criar uma nova branch, cheque o próximo tópico.

##### Criando uma nova branch para sua tarefa
Neste proejto existem duas *branchs* princiapais, a *master*, que é o código oficial a ser
mostrado ao professor e a *hotfix* que é onde faremos as atualizações.

Quando a *hotfix* estiver estável, sem problemas de execução, então faremos o merge
dela no *master*, ou seja, iremos adicionar os códigos novos ao código principal.

Sempre que for começar o código, após executar `git pull`, você deve criar uma **branch**
para que, caso o seu código apresente erros ou duas pessoas alterem a mesma coisa ao mesmo tempo,
isso não interfira no projeto principal.

Execute o comando `git branch -a` e serão exibidas as **branchs** que existem, a que tiver
o nome em cor destaca é a sua **branch** atual(que provavelmente será a master).

Então execute o comando `git checkout -b nome_da_branch`, isso criará e alternará
o seu ambiente para a nova branch, cheque se isso realemte aconteceu executando 
`git branch -a` novamente.
>  O nome da tarefa pode ser qualquer um mas de preferencia deve seguir o padrão "issue_0",
onde 0 indica o número da sua tarefa no gitLab.

Agora você pode codar, mas fique atento ao que fazer após terminar sua tarefa.

Já que terminou sua tarefa, você deve *upar* esse código para o repositório. Como
também foi criada uma **branch** local, ela também deve ser *upada*, por isso você deve
executar os comandos a seguir:

* `git add .` Adiciona os arquvios alterados para serem commitados
* `git commit -m "descricao breve do que se trata o código"` Prepara os arquivos e atribui a mensagem de descrição
* `git push --set-upstream origin branch_name` Cria sua nova branch em nuvem e envia seu código

#### Crianda o Merge Request

Feito isso, você poderá ver que no **gitLab** no menu a sua esquerda, na aba *Repository >> Branchs* 
que sua branch foi criada.
Para concluir, no menu a sua esquerda, acesse *Merge Requests* e crie uma requisição
para fazer um *merge* da sua **branch** *into* **hotfix**.

Seu código vai ser analisado, e qualquer coisa entro em contato com você ou realizo
alguma ação necessária.

Caso não entenda como realizar o *Merge Request*, entre em contato comigo.


<h3>Outros Detalhes</h3>

1. DEFINIÇÃO DO PROBLEMA

A idéia central seria um Sistema de Gerenciamento de Filmes, tendo como base as informações o site do IMDB - https://www.imdb.com/movies-in-theaters/?ref_=nv_tp_inth_1.

O sistema irá permitir que o usuário busca informações dos filmes que constam cadastradas no sistema, conforme item 2.1 abaixo.

2. DEFINIÇÃO DE IMPLEMENTAÇÃO

2.1 Funcionalidades implementadas:

--- SISTEMA IMDB ---
	1. Nos Cinemas
		Titulo
		Classificacao, Duracao, Genero
		Diretor
		Elenco
		...
	2. Mostrar Sessões
		Cinema xx
		Titulo (ano)
		Classificacao, Duracao, Nota
		Sessões: 7:30, 15:30, 18:20
		...
	3. Em Breve
		Titulo (ano)
		Duracao, Genero
		Diretor
		Elenco
		...
	4. Próximos Lançamentos
		Data
		. Título (lançamento/início)
		...
	5. Filmes/Séries Mais Votados
		10 melhores mais votados por usuários IMDb
		Posição & Título
		Titulo (ano)			Nota IMDB
		1. Filme xx					9.5
		2. Filme yyy				8.9
		..
	6. Sua Nota
		Digite usuário: user.name
		Digite senha: ****


2.2. Modelagem de classes:
	...
2.3. Utilização de herança e agregação:
	...
2.4. Níveis acesso:
	...
2.5. Polimorfismo:
	...
2.6. Uso de containers:
	...
2.7. Persistência dados;
	...
2.8. Interface com o usuário:
	...
2.9. Tratamento de exceções:
	...
2.10. Documentação (arquivo README e documentação Doxygen):
	...
