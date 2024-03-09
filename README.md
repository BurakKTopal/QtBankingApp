# Banking App in C++ supporting multiple clients on LocalHost

## Explanation of folders
The folders containing the code are:
<ol>
  <li><a href="https://github.com/BurakKTopal/QtBankingApp/tree/master/BankingApp">/BankingApp</a>: contains the files to configure the client side of the application.</il>
  <li><a href="https://github.com/BurakKTopal/QtBankingApp/tree/master/BankingApp_server">/BankingApp_server</a>: contains the files to configure the server side of the application.</il>
</ol>

The CMAKE builds of these folders are given by:
<ol>
  <li><a href="https://github.com/BurakKTopal/QtBankingApp/tree/master/bankApp_build">/bankApp_build</a>: the CMAKE build of the client side.</li>
  <li><a href="https://github.com/BurakKTopal/QtBankingApp/tree/master/bankApp_server_build">/bankApp_server_build</a>: the CMAKE build of the server side.</li>
</ol>

Finally, the standalone applications, together with their configurations can be found in /Executables. This folder
contains:
<ol>
  <li><a href="https://github.com/BurakKTopal/QtBankingApp/tree/master/Executables/Client">/Client</a>: The folder containing <a href="https://github.com/BurakKTopal/QtBankingApp/blob/master/Executables/Client/BankingApp.exe">BankingApp.exe</a>: this is the standalone executable for the client.</li>
  <li><a href="https://github.com/BurakKTopal/QtBankingApp/tree/master/Executables/Server">/Server</a>: The folder containing <a href="https://github.com/BurakKTopal/QtBankingApp/blob/master/Executables/Server/BankingApp_server.exe">BankingApp_server.exe</a>: this is the standalone executable for the server.</li>
</ol>


## Usage, test users
<p>
The use of <a href="https://github.com/BurakKTopal/QtBankingApp/blob/master/Executables/Client/BankingApp.exe">BankingApp.exe</a> and <a href="https://github.com/BurakKTopal/QtBankingApp/blob/master/Executables/Server/BankingApp_server.exe">BankingApp_server.exe</a> are pretty straightforward. The users are contained in the Sqlite3 file
<a href="https://github.com/BurakKTopal/QtBankingApp/blob/master/Executables/Server/ClientData.db">ClientData.db</a>. This DB is managed by the server and contains all users in the table "client". The transfers being made from one account 
to the other is being held by the "client_transfer" table.
</p>

<p>
  There are already two test users:
  <ul>
    <li>
      Bank number: 09032024, account holder: admin, password: sudosu
    </li>
    <li>
      Bank number: 090320242, account holder: slave, password: suslave
    </li>
  </ul>
</p>


## Author
Burak Kucuktopal
