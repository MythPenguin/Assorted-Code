target: verysimple
verysimple: simple.c
	gcc -mpreferred-stack-boundary=4 -fno-builtin -O0 \
-fno-stack-protector -masm=intel -S simple.c -o simple.64asm
	sed -i '/\.cfi/d' simple.64asm

target: verysimple32
verysimple32: simple.c
	gcc -m32 -mpreferred-stack-boundary=2 -fno-builtin -O0 \
-fno-stack-protector -masm=intel -S simple.c -o simple.32asm
	sed -i '/\.cfi/d' simple.32asm

target: simple32
simple32: simple.c
	gcc -m32 -mpreferred-stack-boundary=2 -fno-builtin -O0 \
-fno-stack-protector -ggdb simple.c -o simple32.out

target: simple
simple: simple.c
	gcc -mpreferred-stack-boundary=4 -fno-builtin -O0 \
-fno-stack-protector -ggdb simple.c -o simple64.out

target: clean
clean:
	rm simple.*asm simple*.out
