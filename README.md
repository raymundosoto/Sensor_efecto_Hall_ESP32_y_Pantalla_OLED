# Sensor_efecto_Hall_ESP32_y_Pantalla_OLED
Este repositorio contiene el código para conectar una pantalla OLED de 0.96'' a un ESP32 y visualizar las lecturas del sensor de Efecto hall que viene incluido en el ESP32 
## Efecto Hall y su Integración en ESP32
El Efecto Hall es un fenómeno físico que describe la generación de una diferencia de potencial eléctrico en un conductor cuando se encuentra expuesto a un campo magnético perpendicular a la corriente que fluye a través de él. Este efecto es fundamental en diversas tecnologías y ha encontrado aplicaciones innovadoras en el ámbito de los sensores.

## Integración del Sensor de Efecto Hall en ESP32

El ESP32 incorpora un sensor de efecto Hall, el cual puede detectar cambios en campos magnéticos cercanos. Este sensor, combinado con la programación mediante Arduino, ofrece una plataforma ideal para desarrollar aplicaciones que requieren detección precisa y rápida de campos magnéticos.

## Aplicaciones del Sensor de Efecto Hall en Proyectos

Las posibles aplicaciones del sensor de efecto Hall en proyectos son diversas y fascinantes:

- Medición de Velocidad y Posición: El sensor puede utilizarse para medir la velocidad de rotación en motores, así como la posición de objetos magnéticos.

- Interruptores Magnéticos: Es posible diseñar interruptores sin contacto para detectar la apertura o cierre de puertas, ventanas o compartimentos.

- Control de Acceso: Implementación en sistemas de seguridad o control de acceso que involucren la detección de tarjetas magnéticas o dispositivos similares.

- Sensores de Corriente: Puede ser parte integral en el diseño de sensores de corriente, permitiendo la medición precisa y no invasiva de esta magnitud.

- Aplicaciones Automotrices: En la industria automotriz, se puede emplear para detectar la posición del pedal del freno, la posición del cigüeñal, entre otros usos.

Este repositorio tiene como objetivo explorar y demostrar algunas de estas aplicaciones a través de un proyecto que utiliza el ESP32 y su sensor de efecto Hall. A través de este material, se proporcionará información, código y recursos para facilitar el entendimiento y la implementación de esta tecnología en proyectos propios.

## Esquema de conexión entre la pantalla OLED y el ESP32

Conexión de pines
|  ESP32|OLED  |
|--|--|
| 3.3 V |VCC  |
|GPIO 22|SCL|
| GPIO 21 |SDA  |

![imagen](https://github.com/raymundosoto/Sensor_efecto_Hall_ESP32_y_Pantalla_OLED/assets/72757419/8fadb825-9dc2-41b0-bf62-b1c7ac0a1a93)




