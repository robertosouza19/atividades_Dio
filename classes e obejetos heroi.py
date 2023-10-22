# Definindo a classe Heroi
class Heroi:
    def __init__(self, nome, idade, tipo):
        self.nome = nome
        self.idade = idade
        self.tipo = tipo

    def atacar(self):
        # Verificando o tipo do herói e definindo o ataque correspondente
        if self.tipo == 'mago':
            ataque = 'usou magia'
        elif self.tipo == 'guerreiro':
            ataque = 'usou espada'
        elif self.tipo == 'monge':
            ataque = 'usou artes marciais'
        elif self.tipo == 'ninja':
            ataque = 'usou shuriken'
        else:
            ataque = 'usou um ataque desconhecido'

        # Exibindo a mensagem de ataque
        mensagem = f"O {self.tipo} atacou usando {ataque}"
        print(mensagem)

# Criando um herói e testando o método de ataque
heroi1 = Heroi("Gandalf", 200, "mago")
heroi1.atacar()

heroi2 = Heroi("Aragorn", 35, "guerreiro")
heroi2.atacar()

heroi3 = Heroi("Bruce Lee", 40, "monge")
heroi3.atacar()

heroi4 = Heroi("Ryu", 30, "ninja")
heroi4.atacar()
