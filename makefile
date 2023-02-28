all:
	gcc picole.c -o picole -IDependencies .\Dependencies\libglfw3.a  -lopengl32 -lgdi32