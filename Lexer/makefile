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
EXEC=CaVaMarcher.exe

#Fichiers sources
SRC=$(wildcard *.cpp ) #prendre tous les fichiers .cpp

#Fichiers objets
OBJ= $(subst .cpp,.o,$(SRC)) #prendre les fichiers .o correspondant aux .cpp


all : $(EXEC)


#Compilation de chaque .cpp
%.o: %.cpp
	$(CXX) $^ -o $@ -c $(CXXFLAGS)

#Fabrication de l'executable
CaVaMarcher.exe : $(OBJ)
	$(CXX) $^ -o $@ $(LDFLAGS)

clean :
	rm -rf $(OBJ)

#Creation des dependances
depend : 
	makedepend -- $(CXXFLAGS) -- $(SRC)



#$@ 	Le nom de la cible
#$^ 	La liste des dépendances
	