# 🔍 PortScan-em-C

Este é um projeto simples de **scanner de portas TCP**, desenvolvido em linguagem **C**, com fins educacionais. Ele permite verificar se portas específicas de um host estão abertas ou fechadas.

## 📌 Objetivo

O propósito deste scanner é entender como funciona uma varredura de portas em baixo nível, utilizando sockets na linguagem C — um conhecimento essencial para quem estuda **pentest** e **redes**.

## ⚠️ Aviso Legal

> ❗ **Este projeto é apenas para fins educacionais.**
>  
> Não use este código contra sistemas ou redes que você **não tem permissão explícita** para testar. Pentest sem autorização é ilegal.

## 🛠️ Tecnologias utilizadas

- Linguagem C
- Bibliotecas:
  - `<stdio.h>`
  - `<stdlib.h>`
  - `<string.h>`
  - `<sys/socket.h>`
  - `<netinet/in.h>`
  - `<arpa/inet.h>`
  - `<unistd.h>`

## ▶️ Como compilar e executar

### 1. Compilar:
```bash
gcc portscan.c -o portscan
```
### 2. Executar:
```bash
./portscan
```
## 🙋 Autor
0xReconDev
Estudante de Pentest | GitHub: @0xReconDev
