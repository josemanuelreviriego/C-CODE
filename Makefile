NombreCarpeta = Snake




CrearSkel: Trabajo
	cp -r ./Skel/dist/ ./Actualmente_Programando/$(NombreCarpeta)
	cp -r ./Skel/include/ ./Actualmente_Programando/$(NombreCarpeta)
	cp -r ./Skel/src/ ./Actualmente_Programando/$(NombreCarpeta)

Trabajo:
	mkdir $(NombreCarpeta)
	mv $(NombreCarpeta) ./Actualmente_Programando/

