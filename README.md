# PROGRAMA-1-
PROGRAMA 1, LABORATORIO PARA INGRESO

Perfecto, Marvin 👌 — este es tu README pero adaptado a la **versión 1.0 (primera fase)**. Aquí lo importante es dejar claro que es una versión inicial (más simple) y bien documentada para que se vea evolución en tu repo 🚀

---

# 💻 Sistema de Registro de Laboratorio (Versión 1.0)

## 📌 Descripción

Este proyecto es un sistema en **C++** que permite registrar el acceso de usuarios a un laboratorio de cómputo mediante un menú interactivo en consola.

En esta primera fase, el sistema permite:

* Registrar usuarios
* Capturar datos básicos
* Consultar disponibilidad de equipos (datos estáticos)

---

## 🎯 Objetivo

Desarrollar una base funcional para un sistema de control de acceso a laboratorio, aplicando principios de **programación estructurada**.

---

## ⚙️ Características

✅ Menú interactivo en consola
✅ Validación de entrada de datos
✅ Uso de ciclos (`do-while`)
✅ Uso de estructura `switch`
✅ Manejo de errores con `cin.fail()`
✅ Captura de datos del usuario
✅ Conversión de nivel académico a texto

---

## 🧠 Funcionamiento del sistema

El sistema opera mediante un menú con 3 opciones:

```text
1. Registro nuevo ingreso
2. Consulta disponibilidad
3. Salir del sistema
```

---

### 🔹 Registro de usuario

Permite capturar:

* ID del usuario (validado > 0)
* Número de PC (1 - 20)
* Tiempo de uso (minutos)
* Nivel de estudio

El nivel de estudio se traduce automáticamente a texto:

| Opción | Nivel        |
| ------ | ------------ |
| 1      | Primaria     |
| 2      | Secundaria   |
| 3      | Preparatoria |
| 4      | Universidad  |
| 5      | Posgrado     |
| 6      | Otro         |

---

### 🔹 Consulta de disponibilidad

Muestra información **simulada**:

* Total de PCs
* PCs ocupadas
* PCs disponibles
* Lista de equipos ocupados

⚠️ Nota: En esta versión los datos son fijos (no dinámicos).

---

### 🔹 Salida del sistema

Permite cerrar el programa de forma segura.

---

## 🏗️ Estructura del código

El programa se desarrolla completamente dentro de la función `main()` y utiliza:

* Variables locales para almacenar datos
* Validaciones con ciclos `do-while`
* Control de flujo con `switch`
* Limpieza de buffer con `numeric_limits`

---

## 📦 Requisitos

* Compilador C++ (g++, MinGW, etc.)
* Editor de código (Visual Studio Code recomendado)

---

## ▶️ Ejecución

### Compilar:

```bash
g++ main.cpp -o sistema
```

### Ejecutar:

```bash
./sistema
```

---

## 🧩 Conceptos aplicados

* Programación estructurada
* Validación de datos
* Entrada/salida estándar (`cin`, `cout`)
* Manejo de errores
* Uso de `switch-case`
* Ciclos de repetición

---

## 🚧 Limitaciones de esta versión

* No guarda datos (solo en memoria temporal)
* No hay control real de disponibilidad
* No existen funciones (todo está en `main`)
* No hay validación avanzada de tiempo

---

## 🚀 Mejoras futuras (versión 2.0)

Aquí conectas con el otro código que ya hiciste 👀

* Implementación de funciones
* Validación de horario
* Control dinámico de equipos disponibles
* Uso de variables globales
* Mejor estructura modular


---

## 📄 Licencia

Proyecto de uso académico y educativo.


---

## 👨‍💻 Autor

**Marvin Valdez**
Ingeniero en Sistemas, Electronica y Electromecanica | Redes | Ciberseguridad | IA

---
