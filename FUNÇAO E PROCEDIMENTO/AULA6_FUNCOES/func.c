int f(int x){
	x = x + 1;
	return x;
}

int g(int x,int y){
	x = x + 2*y;
	return x;
}

imprimeMenu(){
	printf("========= MENU =========\n");
	printf("1_______ f(x) = x+1\n");
	printf("2_______ g(x,y) = x+2y\n");
	printf("<esc>___ sair\n");
	printf("========================\n");
}
