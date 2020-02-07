PG_OF_PATH=/Users/dvcorreia/.openframeworks
NAME=`date +'%d%m%y'`
export NAME

poster:
	git clone --depth=1 --single-branch --branch poster-template https://github.com/dvcorreia/of-sketches.git $(NAME)
	rm -rf ./$(NAME)/.git

init:
	git --git-dir /openFrameworks/.git submodule init
	git --git-dir /openFrameworks/.git submodule update


