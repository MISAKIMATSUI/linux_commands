#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;

	n /= 10;
	switch (argc > 3 ? atoi(argv[3]) : 0) {
		x(0);   x(1);   x(2);   x(3);   x(4);
		x(5);   x(6);   x(7);   x(8);   x(9);
		x(10);  x(11);  x(12);  x(13);  x(14);
		x(15);  x(16);  x(17);  x(18);  x(19);
		x(20);  x(21);  x(22);  x(23);  x(24);
		x(25);  x(26);  x(27);  x(28);  x(29);
		x(30);  x(31);  x(32);  x(33);  x(34);
		x(35);  x(36);  x(37);  x(38);  x(39);
		x(40);  x(41);  x(42);  x(43);  x(44);
		x(45);  x(46);  x(47);  x(48);  x(49);
		x(50);  x(51);  x(52);  x(53);  x(54);
		x(55);  x(56);  x(57);  x(58);  x(59);
		x(60);  x(61);  x(62);  x(63);  x(64);
		x(65);  x(66);  x(67);  x(68);  x(69);
		x(70);  x(71);  x(72);  x(73);  x(74);
		x(75);  x(76);  x(77);  x(78);  x(79);
		x(80);  x(81);  x(82);  x(83);  x(84);
		x(85);  x(86);  x(87);  x(88);  x(89);
		x(90);  x(91);  x(92);  x(93);  x(94);
		x(95);  x(96);  x(97);  x(98);  x(99);
	}
	do {
		asm("DUMMY1:");
		L0:	func(a);
		L1:	func(a);
		L2:	func(a);
		L3:	func(a);
		L4:	func(a);
		L5:	func(a);
		L6:	func(a);
		L7:	func(a);
		L8:	func(a);
		L9:	func(a);
		L10:	func(a);
		L11:	func(a);
		L12:	func(a);
		L13:	func(a);
		L14:	func(a);
		L15:	func(a);
		L16:	func(a);
		L17:	func(a);
		L18:	func(a);
		L19:	func(a);
		L20:	func(a);
		L21:	func(a);
		L22:	func(a);
		L23:	func(a);
		L24:	func(a);
		L25:	func(a);
		L26:	func(a);
		L27:	func(a);
		L28:	func(a);
		L29:	func(a);
		L30:	func(a);
		L31:	func(a);
		L32:	func(a);
		L33:	func(a);
		L34:	func(a);
		L35:	func(a);
		L36:	func(a);
		L37:	func(a);
		L38:	func(a);
		L39:	func(a);
		L40:	func(a);
		L41:	func(a);
		L42:	func(a);
		L43:	func(a);
		L44:	func(a);
		L45:	func(a);
		L46:	func(a);
		L47:	func(a);
		L48:	func(a);
		L49:	func(a);
		L50:	func(a);
		L51:	func(a);
		L52:	func(a);
		L53:	func(a);
		L54:	func(a);
		L55:	func(a);
		L56:	func(a);
		L57:	func(a);
		L58:	func(a);
		L59:	func(a);
		L60:	func(a);
		L61:	func(a);
		L62:	func(a);
		L63:	func(a);
		L64:	func(a);
		L65:	func(a);
		L66:	func(a);
		L67:	func(a);
		L68:	func(a);
		L69:	func(a);
		L70:	func(a);
		L71:	func(a);
		L72:	func(a);
		L73:	func(a);
		L74:	func(a);
		L75:	func(a);
		L76:	func(a);
		L77:	func(a);
		L78:	func(a);
		L79:	func(a);
		L80:	func(a);
		L81:	func(a);
		L82:	func(a);
		L83:	func(a);
		L84:	func(a);
		L85:	func(a);
		L86:	func(a);
		L87:	func(a);
		L88:	func(a);
		L89:	func(a);
		L90:	func(a);
		L91:	func(a);
		L92:	func(a);
		L93:	func(a);
		L94:	func(a);
		L95:	func(a);
		L96:	func(a);
		L97:	func(a);
		L98:	func(a);
		L99:	func(a);
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
