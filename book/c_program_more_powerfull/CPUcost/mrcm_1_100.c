#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

#define X	8192

int	b[100 * X];

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int i;

	n /= 10;
	for (i = 100 * X; (i -= X) >= 0; ) {
		b[i] = 1;
	}
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
		L0:	a += b[0 * X];
		L1:	a += b[1 * X];
		L2:	a += b[2 * X];
		L3:	a += b[3 * X];
		L4:	a += b[4 * X];
		L5:	a += b[5 * X];
		L6:	a += b[6 * X];
		L7:	a += b[7 * X];
		L8:	a += b[8 * X];
		L9:	a += b[9 * X];
		L10:	a += b[10 * X];
		L11:	a += b[11 * X];
		L12:	a += b[12 * X];
		L13:	a += b[13 * X];
		L14:	a += b[14 * X];
		L15:	a += b[15 * X];
		L16:	a += b[16 * X];
		L17:	a += b[17 * X];
		L18:	a += b[18 * X];
		L19:	a += b[19 * X];
		L20:	a += b[20 * X];
		L21:	a += b[21 * X];
		L22:	a += b[22 * X];
		L23:	a += b[23 * X];
		L24:	a += b[24 * X];
		L25:	a += b[25 * X];
		L26:	a += b[26 * X];
		L27:	a += b[27 * X];
		L28:	a += b[28 * X];
		L29:	a += b[29 * X];
		L30:	a += b[30 * X];
		L31:	a += b[31 * X];
		L32:	a += b[32 * X];
		L33:	a += b[33 * X];
		L34:	a += b[34 * X];
		L35:	a += b[35 * X];
		L36:	a += b[36 * X];
		L37:	a += b[37 * X];
		L38:	a += b[38 * X];
		L39:	a += b[39 * X];
		L40:	a += b[40 * X];
		L41:	a += b[41 * X];
		L42:	a += b[42 * X];
		L43:	a += b[43 * X];
		L44:	a += b[44 * X];
		L45:	a += b[45 * X];
		L46:	a += b[46 * X];
		L47:	a += b[47 * X];
		L48:	a += b[48 * X];
		L49:	a += b[49 * X];
		L50:	a += b[50 * X];
		L51:	a += b[51 * X];
		L52:	a += b[52 * X];
		L53:	a += b[53 * X];
		L54:	a += b[54 * X];
		L55:	a += b[55 * X];
		L56:	a += b[56 * X];
		L57:	a += b[57 * X];
		L58:	a += b[58 * X];
		L59:	a += b[59 * X];
		L60:	a += b[60 * X];
		L61:	a += b[61 * X];
		L62:	a += b[62 * X];
		L63:	a += b[63 * X];
		L64:	a += b[64 * X];
		L65:	a += b[65 * X];
		L66:	a += b[66 * X];
		L67:	a += b[67 * X];
		L68:	a += b[68 * X];
		L69:	a += b[69 * X];
		L70:	a += b[70 * X];
		L71:	a += b[71 * X];
		L72:	a += b[72 * X];
		L73:	a += b[73 * X];
		L74:	a += b[74 * X];
		L75:	a += b[75 * X];
		L76:	a += b[76 * X];
		L77:	a += b[77 * X];
		L78:	a += b[78 * X];
		L79:	a += b[79 * X];
		L80:	a += b[80 * X];
		L81:	a += b[81 * X];
		L82:	a += b[82 * X];
		L83:	a += b[83 * X];
		L84:	a += b[84 * X];
		L85:	a += b[85 * X];
		L86:	a += b[86 * X];
		L87:	a += b[87 * X];
		L88:	a += b[88 * X];
		L89:	a += b[89 * X];
		L90:	a += b[90 * X];
		L91:	a += b[91 * X];
		L92:	a += b[92 * X];
		L93:	a += b[93 * X];
		L94:	a += b[94 * X];
		L95:	a += b[95 * X];
		L96:	a += b[96 * X];
		L97:	a += b[97 * X];
		L98:	a += b[98 * X];
		L99:	a += b[99 * X];
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a);
	return 0;
}
