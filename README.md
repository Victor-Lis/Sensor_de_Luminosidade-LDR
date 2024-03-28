# Sensor de Luminosidade LDR

Esse código é um tanto curioso, afinal ao invés de eu estar utilizando o sensor LDR (próprio para luminosidade) para cumprir apenas sua função de detectar luminosidade, estou usando a variação de luminosidade para detectar movimento. 

Utilizei esse método visando solucionar os problemas dos códigos [Sensor TCRT5000 e Leds](https://github.com/Victor-Lis/Sensor_TCRT5000_e_Leds) e [Sensor_TCRT5000_with_Light_Reflection_Cutoff](https://github.com/Victor-Lis/Sensor_TCRT5000_with_Light_Reflection_Cutoff), a ideia surgiu a partir do meu professor Robson Aparecido Gomes.

Em resumo o código tem costantemente um led apontado para o sensor LDR, caso haja variação na luminosidade significa que algo passou na frete.

Uma curiosidade interessante é que a escolha da cor do led (verde), surgiu a partir de uma aula de Biologia, onde aprendi o porque do principal pigmento para o processo de fotossintese ser verde.

## Autores

- [@Victor-Lis](https://github.com/Victor-Lis)
