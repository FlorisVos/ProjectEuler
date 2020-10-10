# Miron's awesome c++ solutions

In mijn folder find je subfolders per probleem, waarin '.cpp' bestanden staan en bestanden zonder extensie. In de 'c.pp' bestanden staat de daadwerkelijke code in de taal c++, die ik nu voor de lol aan het leren ben. Voordelen zijn dat het veel sneller is dan Python, nadelen is dat je de bestanden moet compileren (bouwen) voordat je ze kan draaien en de syntax is veel strikter, waardoor het wat moeilijker leest.

Ik werk gebruik zelf het Ubuntu besturingssysteem, wat betekent dat de programma's die ik compileer niet op windows draaien. Je zult ze moeten draaien op het WSL (windows subsytem for linux). Zie [deze pagina](https://docs.microsoft.com/en-us/windows/wsl/install-win10) voor een handleiding.

Als je eenmaal een toegang hebt tot een shell in Ubuntu typ dan de volgende commando's om een programma te draaien

```
cd locatievanprojecteulerfolder/Miron/problem_1
./problem_1
```

Mocht je zelf mijn bestanden willen compileren in linux

```
sudo apt-get install g++ build-essential
g++ problem_1 problem_1.cpp
```

Als je mijn programma's op windows wilt compileren (bah) verwijs ik je door naar de documentatie van [microsoft](https://docs.microsoft.com/en-us/cpp/build/walkthrough-compiling-a-native-cpp-program-on-the-command-line?view=vs-2019), ik kan daarmee proberen te helpen, maar ik heb er geen ervaring mee.
