# TCrateus_EDA

Uma transportadora, TCrateus, da região dos Sertões dos Crateús necessita de um módulo novo
para o gerenciamento de informações dos seus clientes, visto seu grande crescimento a partir
do ano de 2020. Sabe-se que seus clientes são oriundos de diversos setores: alimentício, escolar,
varejo, atacadista, agroindustrial, entre outros. Tais setores são numerados com identificação
única (não sequencial) e rótulo, conforme descrição apresentada acima, o que proporcionaria
melhor organização de seus clientes no novo módulo requerido para o sistema.

Dos clientes, a empresa possui algumas informações importantes: identificação única (código),
razão social, endereço, nome do responsável, ano de criação e número de serviços de transporte
já realizados pela TCrateús. Contudo, devido a diversidade de serviços realizamos pelas
empresas atendidas na TCrateús, algumas podem ser categorizadas em mais de um setor. Por
exemplo: supermercados que trabalham no varejo e no atacado, podem então realizar uma
solicitação de transporte para a área de atacado, e também para a área de varejo.
Com essas informações, obtemos o seguinte cenário:
#
- Os setores são indexados por numeração única (códigos), objetivando o acesso a
informação, estes podem ser indexados em uma estrutura de tabela hash.
- Cada setor, possui um conjunto de clientes, com identificação única, e que, também,
objetivando o acesso rápido as informações, podem ser organizados em hierarquia
arbórea balanceada.

Desta forma, o sistema permitirá: adicionar novos clientes à setores; novos setores; e
atualizar informações, tais como: nome do responsável de uma empresa; descrição de
um setor; e número de serviços de transportes já atendidos na TCrateús.

Uma representação simples do sistema pode ser esboçada como:
Em que, ilustrativamente, os setores de: Imobiliário (código 60), Alimentício (código 125) e
Brechó (código 494), possuíram sua indexação, respectivamente, representadas nos índices 0,
2 e 4 da imagem a cima. Em que cada setor possui seu arranjo de clientes: setor 60, clientes B
e A; setor 125, clientes, H, B e K; setor 494, clientes C, A, E e P. Sendo cada cliente anexado ao
arranjo por sua identificação única.
#
Sendo assim, a atividade I da disciplina de EDA requer que você, individualmente ou em dupla,
interprete essas informações e desenvolva uma solução utilizando, conforme a descrição a
cima:
- Uma estrutura em tabela hash, de endereçamento aberto, com tratamento de colisão
e redimensionamento realizado com taxa de ocupação de 75%;
- Estruturas arbóreas autoajustáveis do tipo AVL;
A fim de atender a todos os requisitos e características apresentados.

#
### Informações Importantes

**Objetivo**: Esta atividade possui como objetivo estimular a análise de problemas e a criatividade
da aplicação dos recursos abordados na disciplina de Estrutura de Dados Avançada.

**Estruturas de uso**: Deverão ser aplicados, para a resolução dessa atividade as estruturas:
Tabelas Hash e AVL. Todas as estruturas utilizadas na implementação deverão ser construídas,
ou seja, não devem ser utilizados APIs, bibliotecas ou módulos construídos por terceiros.

**Desenvolvimento**: Fica optativo a realização da atividade de forma individual ou em dupla.
Sendo também optativa a escolha da linguagem de programação utilizada para plataforma
desktop.

**Entrega**: A atividade inicia-se dia 20/04/2022 com entrega final (Via SIGAA até às 17h30min) e
apresentação no dia 02/05/2022 em aula.

**Formato de entrega**: .zip ou .rar. Para o envio da tarefa no SIGAA, as equipes deverão incluir o
código fonte produzido. A apresentação ocorrerá em sala de aula/laboratório com tempo de
5min a 15min, explicando todo o trabalho desenvolvido e executando todos as funcionalidades
da implementação construída. O não envio ou apresentação acarretará a atribuição de nota zero
à atividade.
