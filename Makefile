NombreCarpeta = Prueba
CopiarEn = ./Actualmente_Programando/$(NombreCarpeta)
Skel = ./Skel/Makefile ./Skel/dist/ ./Skel/include/ ./Skel/skel.cpp ./Skel/skel.h ./Skel/src/
SkelSrc= ./Actualmente_Programando/$(NombreCarpeta)/skel.cpp ./Actualmente_Programando/$(NombreCarpeta)/Makefile
SkelInclude = ./Actualmente_Programando/$(NombreCarpeta)/skel.h

MoverInclude: Nuevo_Proyecto NuevaCarpeta MoverSrc
	mv $(SkelInclude) ./Actualmente_Programando/$(NombreCarpeta)/include/

MoverSrc:Nuevo_Proyecto
	mv $(SkelSrc) ./Actualmente_Programando/$(NombreCarpeta)/src/

Nuevo_Proyecto:NuevaCarpeta
	cp -r $(Skel) $(CopiarEn)

NuevaCarpeta:
	mkdir $(NombreCarpeta)
	mv $(NombreCarpeta) ./Actualmente_Programando/
