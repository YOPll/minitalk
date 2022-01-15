<p align="center">
<a href="https://github.com/YOPll/get_next_line">
  <img src="https://user-images.githubusercontent.com/49567393/145694296-91b27fdf-3666-4670-8a84-23695c2be1a4.png" alt="ft_printf 100/100">
</a>
  <br>
  125/100
</p>

# Introduction to minitalk
The purpose of this project is to code a small data exchange program using UNIX signals.

[SUBJECT](Subject/en.subject.pdf)

## About

The purpose of this project is to code a small data exchange program using UNIX signals. 
We must create a communication program in the form of a client and server. 
The server must be launched first, and after being launched it must display its PID.
The client will take as parameters: (Server PID, string that should be sent).
The client must communicate the string passed as a parameter to the server.
Once the string has been received, the server must display it.
The server should be able to receive strings from several clients in a row, without needing to be restarted.
We can only use the two signals SIGUSR1 and SIGUSR2.
We must also add a a small reception acknowledgment system and both client et server should support Unicode (UTF-8)

## USAGE

Build with ``make`` or ``make bonus``, then:

- Launch the server with ``./server``, it will display it's PID
- Launch the client with ``./client <server pid> <message>``
- Enjoy results

## PREVIEW

<!-- todo     -->

### DOCUMENTATION:
- https://sebastienguillon.com/test/javascript/convertisseur.html
- https://en.wikipedia.org/wiki/Bitwise_operations_in_C
- https://sites.uclouvain.be/SystInfo/notes/Theorie/html/Fichiers/fichiers-signaux.html
- http://manpagesfr.free.fr/man/man2/sigaction.2.html
