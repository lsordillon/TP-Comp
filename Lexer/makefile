#Compilateur
CXX=g++

#Mode DEBUG
DEBUG=no

#Commandes de Compilation et d'edition des liens
ifeq ($(DEBUG),yes)
	CXXFLAGS =-Wall -DMAP
	LDFLAGS =
else
	CXXFLAGS=-Wall
	LDFLAGS =
endif

#Nom de l'executable
EXEC=Analyseur.exe

#Fichiers sources
SRC=$(wildcard *.cpp ) #prendre tous les fichiers .cpp

#Fichiers objets
OBJ= $(subst .cpp,.o,$(SRC)) #prendre les fichiers .o correspondant aux .cpp


all : $(EXEC)


#Compilation de chaque .cpp
%.o: %.cpp
	$(CXX) $^ -o $@ -c $(CXXFLAGS) -std=c++11

#Fabrication de l'executable
Analyseur.exe : $(OBJ)
	$(CXX) $^ -o $@ $(LDFLAGS)

clean :
	rm -rf $(OBJ)
	rm -rf $(EXEC)

#Creation des dependances
depend : 
	makedepend -- $(CXXFLAGS) -- $(SRC)



#$@ 	Le nom de la cible
#$^ 	La liste des dépendances
	