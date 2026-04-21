# 🌱 FarmTech Solutions - Fase 2

## 📌 Integrantes
- (Lucas Marques Pires)


---

## 🎯 Objetivo do Projeto

Desenvolver um sistema de irrigação automatizado e inteligente utilizando o ESP32 na plataforma Wokwi, simulando condições reais de uma plantação agrícola.

O sistema tem como objetivo analisar variáveis do solo e decidir automaticamente quando a irrigação deve ser ativada, otimizando o uso de água e melhorando a produtividade agrícola.

---

## ⚙️ Componentes Utilizados

- ESP32
- 3 botões (simulando N, P e K)
- Sensor LDR (simulando pH do solo)
- Sensor DHT22 (simulando umidade do solo)
- Módulo relé (simulando bomba d’água)
- LED (indicador visual da irrigação)
- Resistores

---

## 🔄 Substituições Didáticas

Como o Wokwi não possui sensores agrícolas reais, foram feitas substituições:

- Nitrogênio (N), Fósforo (P) e Potássio (K) → botões
- pH do solo → sensor LDR
- Umidade do solo → sensor DHT22

Essas substituições permitem simular o comportamento de uma plantação real.

---

## 🌽 Cultura Escolhida

A cultura escolhida foi o **milho**, devido à sua relevância agrícola e necessidade de monitoramento constante de umidade e nutrientes do solo.

---

## 🧠 Lógica do Sistema

A irrigação é acionada com base em três critérios principais:

1. **Umidade do solo**
   - Se a umidade estiver abaixo de 40%, o solo é considerado seco

2. **pH do solo**
   - O pH simulado deve estar entre 5.5 e 7.5

3. **Nutrientes (NPK)**
   - Pelo menos 2 dos 3 nutrientes devem estar em nível adequado (botões pressionados)

---

## ⚡ Regra de Irrigação

A irrigação será ativada quando:

- O solo estiver seco
- O pH estiver dentro da faixa ideal
- Pelo menos 2 nutrientes estiverem adequados

Caso qualquer uma dessas condições não seja atendida, a irrigação permanece desligada.

---

## 💡 Funcionamento Visual

- LED aceso → irrigação ligada
- LED apagado → irrigação desligada
- Relé acompanha o estado do LED

---

## 🔧 Como Executar

1. Abrir o projeto no Wokwi
2. Iniciar a simulação
3. Interagir com os componentes:
   - Pressionar botões (NPK)
   - Ajustar o LDR (pH)
   - Alterar a umidade no DHT22
4. Observar o LED e o relé

---

## 🖼️ Imagem do Circuito

(INSIRA AQUI O PRINT DO WOKWI)

---

## 💻 Código Fonte

O código está disponível no arquivo `sketch.ino`.

---

## ⚠️ Observações

Devido à limitação de tempo, não foi possível incluir o vídeo demonstrativo nesta entrega. No entanto, o sistema está completamente funcional e pode ser testado diretamente na plataforma Wokwi.

---

## 🚀 Conclusão

O projeto demonstra a aplicação de conceitos de IoT e automação no setor agrícola, simulando um sistema inteligente capaz de otimizar a irrigação com base em dados do ambiente.

Esse tipo de solução contribui para o uso eficiente de recursos naturais e aumento da produtividade no campo.
