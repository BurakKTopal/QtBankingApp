# Banking App in C++ supporting multiple clients on LocalHost

## Explanation of folders
The folders containing the code are:
<ol>
  <li>/BankingApp: contains the files to configure the client side of the application.</il>
  <li>/BankingApp_server: contains the files to configure the server side of the application.</il>
</ol>

The CMAKE builds of these folders are given by:
<ol>
  <li>/bankApp_build: the CMAKE build of the client side.</li>
  <li>/bankApp_server_build: the CMAKE build of the server side.</li>
</ol>

Finally, the standalone applications, together with their configurations can be found in /Executables. This folder
contains:
<ol>
  <li>/Client: The folder containing BankingApp.exe: this is the standalone executable for the client.</li>
  <li>/Server: The folder containing BankingApp_server.exe: this is the standalone executable for the server.</li>
</ol>


## Usage, test users
<p>
The use of BankingApp.exe and BankingApp_server.exe are pretty straightforward. The users are contained in the Sqlite3 file
ClientData.db. This DB is managed by the server and contains all users in the table "client". The transfers being made from one account 
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
