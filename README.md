# Exercice héritage

## Diagramme de classe
![alt text](images/class-room.png "UML")

## Informations
> Laisser dans toutes les classes un constructeur par défaut.

Lors de la création de n'importe quel objet, il faut afficher un message.

Lors de la destruction d'un objet, il faut afficher un message avec le nom de l'objet détruit.

Tous les paramètres des étudiants ou professeurs sont passés lors de l'instanciation des objets.

### Class Student
- printInfos : affiche le nom et la moyenne de l'étudiant sur la console.

### Class Professor
- printInfos : affiche le nom et le numéro du professeur sur la console.

### Class School
- printList : affiche la liste des salles et pour chaque salle les professeurs et les élèves.

### class Room
- printList : affiche la liste des étudiants et ensuite la liste des professeurs avec les informations.

## Questions
- Peut-on améliorer l'architecture ?

## Protection
- Supprimer les constructeurs par défaut pour obliger le passage de paramètres lors de la construction.