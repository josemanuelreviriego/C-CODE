set nocompatible              
filetype off               

set rtp+=~/.vim/bundle/Vundle.vim
call vundle#begin()

call vundle#end()           
filetype plugin indent on


Plugin 'VundleVim/Vundle.vim'
Plugin 'vim-scripts/AutoComplPop'			"Autocompleta
Plugin 'Raimondi/delimitMate'				"Cierra las comillas
Plugin 'mattn/emmet-vim'				"Crea html 

Plugin 'Valloric/YouCompleteMe'		        "Sintaxis js, tiene conflicto con syntastic
Plugin 'scrooloose/syntastic'                		"Errores
