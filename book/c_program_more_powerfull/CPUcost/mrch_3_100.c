#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

#define X	1

int	b[300 * X];

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int i;
	int a0 = a, a1 = a, a2 = a;

	n /= 30;
	for (i = 300 * X; (i -= X) >= 0; ) {
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
		x(100); x(101); x(102); x(103); x(104);
		x(105); x(106); x(107); x(108); x(109);
		x(110); x(111); x(112); x(113); x(114);
		x(115); x(116); x(117); x(118); x(119);
		x(120); x(121); x(122); x(123); x(124);
		x(125); x(126); x(127); x(128); x(129);
		x(130); x(131); x(132); x(133); x(134);
		x(135); x(136); x(137); x(138); x(139);
		x(140); x(141); x(142); x(143); x(144);
		x(145); x(146); x(147); x(148); x(149);
		x(150); x(151); x(152); x(153); x(154);
		x(155); x(156); x(157); x(158); x(159);
		x(160); x(161); x(162); x(163); x(164);
		x(165); x(166); x(167); x(168); x(169);
		x(170); x(171); x(172); x(173); x(174);
		x(175); x(176); x(177); x(178); x(179);
		x(180); x(181); x(182); x(183); x(184);
		x(185); x(186); x(187); x(188); x(189);
		x(190); x(191); x(192); x(193); x(194);
		x(195); x(196); x(197); x(198); x(199);
		x(200); x(201); x(202); x(203); x(204);
		x(205); x(206); x(207); x(208); x(209);
		x(210); x(211); x(212); x(213); x(214);
		x(215); x(216); x(217); x(218); x(219);
		x(220); x(221); x(222); x(223); x(224);
		x(225); x(226); x(227); x(228); x(229);
		x(230); x(231); x(232); x(233); x(234);
		x(235); x(236); x(237); x(238); x(239);
		x(240); x(241); x(242); x(243); x(244);
		x(245); x(246); x(247); x(248); x(249);
		x(250); x(251); x(252); x(253); x(254);
		x(255); x(256); x(257); x(258); x(259);
		x(260); x(261); x(262); x(263); x(264);
		x(265); x(266); x(267); x(268); x(269);
		x(270); x(271); x(272); x(273); x(274);
		x(275); x(276); x(277); x(278); x(279);
		x(280); x(281); x(282); x(283); x(284);
		x(285); x(286); x(287); x(288); x(289);
		x(290); x(291); x(292); x(293); x(294);
		x(295); x(296); x(297); x(298); x(299);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 += b[0 * X];
		L1:	a1 += b[1 * X];
		L2:	a2 += b[2 * X];
		L3:	a0 += b[3 * X];
		L4:	a1 += b[4 * X];
		L5:	a2 += b[5 * X];
		L6:	a0 += b[6 * X];
		L7:	a1 += b[7 * X];
		L8:	a2 += b[8 * X];
		L9:	a0 += b[9 * X];
		L10:	a1 += b[10 * X];
		L11:	a2 += b[11 * X];
		L12:	a0 += b[12 * X];
		L13:	a1 += b[13 * X];
		L14:	a2 += b[14 * X];
		L15:	a0 += b[15 * X];
		L16:	a1 += b[16 * X];
		L17:	a2 += b[17 * X];
		L18:	a0 += b[18 * X];
		L19:	a1 += b[19 * X];
		L20:	a2 += b[20 * X];
		L21:	a0 += b[21 * X];
		L22:	a1 += b[22 * X];
		L23:	a2 += b[23 * X];
		L24:	a0 += b[24 * X];
		L25:	a1 += b[25 * X];
		L26:	a2 += b[26 * X];
		L27:	a0 += b[27 * X];
		L28:	a1 += b[28 * X];
		L29:	a2 += b[29 * X];
		L30:	a0 += b[30 * X];
		L31:	a1 += b[31 * X];
		L32:	a2 += b[32 * X];
		L33:	a0 += b[33 * X];
		L34:	a1 += b[34 * X];
		L35:	a2 += b[35 * X];
		L36:	a0 += b[36 * X];
		L37:	a1 += b[37 * X];
		L38:	a2 += b[38 * X];
		L39:	a0 += b[39 * X];
		L40:	a1 += b[40 * X];
		L41:	a2 += b[41 * X];
		L42:	a0 += b[42 * X];
		L43:	a1 += b[43 * X];
		L44:	a2 += b[44 * X];
		L45:	a0 += b[45 * X];
		L46:	a1 += b[46 * X];
		L47:	a2 += b[47 * X];
		L48:	a0 += b[48 * X];
		L49:	a1 += b[49 * X];
		L50:	a2 += b[50 * X];
		L51:	a0 += b[51 * X];
		L52:	a1 += b[52 * X];
		L53:	a2 += b[53 * X];
		L54:	a0 += b[54 * X];
		L55:	a1 += b[55 * X];
		L56:	a2 += b[56 * X];
		L57:	a0 += b[57 * X];
		L58:	a1 += b[58 * X];
		L59:	a2 += b[59 * X];
		L60:	a0 += b[60 * X];
		L61:	a1 += b[61 * X];
		L62:	a2 += b[62 * X];
		L63:	a0 += b[63 * X];
		L64:	a1 += b[64 * X];
		L65:	a2 += b[65 * X];
		L66:	a0 += b[66 * X];
		L67:	a1 += b[67 * X];
		L68:	a2 += b[68 * X];
		L69:	a0 += b[69 * X];
		L70:	a1 += b[70 * X];
		L71:	a2 += b[71 * X];
		L72:	a0 += b[72 * X];
		L73:	a1 += b[73 * X];
		L74:	a2 += b[74 * X];
		L75:	a0 += b[75 * X];
		L76:	a1 += b[76 * X];
		L77:	a2 += b[77 * X];
		L78:	a0 += b[78 * X];
		L79:	a1 += b[79 * X];
		L80:	a2 += b[80 * X];
		L81:	a0 += b[81 * X];
		L82:	a1 += b[82 * X];
		L83:	a2 += b[83 * X];
		L84:	a0 += b[84 * X];
		L85:	a1 += b[85 * X];
		L86:	a2 += b[86 * X];
		L87:	a0 += b[87 * X];
		L88:	a1 += b[88 * X];
		L89:	a2 += b[89 * X];
		L90:	a0 += b[90 * X];
		L91:	a1 += b[91 * X];
		L92:	a2 += b[92 * X];
		L93:	a0 += b[93 * X];
		L94:	a1 += b[94 * X];
		L95:	a2 += b[95 * X];
		L96:	a0 += b[96 * X];
		L97:	a1 += b[97 * X];
		L98:	a2 += b[98 * X];
		L99:	a0 += b[99 * X];
		L100:	a1 += b[100 * X];
		L101:	a2 += b[101 * X];
		L102:	a0 += b[102 * X];
		L103:	a1 += b[103 * X];
		L104:	a2 += b[104 * X];
		L105:	a0 += b[105 * X];
		L106:	a1 += b[106 * X];
		L107:	a2 += b[107 * X];
		L108:	a0 += b[108 * X];
		L109:	a1 += b[109 * X];
		L110:	a2 += b[110 * X];
		L111:	a0 += b[111 * X];
		L112:	a1 += b[112 * X];
		L113:	a2 += b[113 * X];
		L114:	a0 += b[114 * X];
		L115:	a1 += b[115 * X];
		L116:	a2 += b[116 * X];
		L117:	a0 += b[117 * X];
		L118:	a1 += b[118 * X];
		L119:	a2 += b[119 * X];
		L120:	a0 += b[120 * X];
		L121:	a1 += b[121 * X];
		L122:	a2 += b[122 * X];
		L123:	a0 += b[123 * X];
		L124:	a1 += b[124 * X];
		L125:	a2 += b[125 * X];
		L126:	a0 += b[126 * X];
		L127:	a1 += b[127 * X];
		L128:	a2 += b[128 * X];
		L129:	a0 += b[129 * X];
		L130:	a1 += b[130 * X];
		L131:	a2 += b[131 * X];
		L132:	a0 += b[132 * X];
		L133:	a1 += b[133 * X];
		L134:	a2 += b[134 * X];
		L135:	a0 += b[135 * X];
		L136:	a1 += b[136 * X];
		L137:	a2 += b[137 * X];
		L138:	a0 += b[138 * X];
		L139:	a1 += b[139 * X];
		L140:	a2 += b[140 * X];
		L141:	a0 += b[141 * X];
		L142:	a1 += b[142 * X];
		L143:	a2 += b[143 * X];
		L144:	a0 += b[144 * X];
		L145:	a1 += b[145 * X];
		L146:	a2 += b[146 * X];
		L147:	a0 += b[147 * X];
		L148:	a1 += b[148 * X];
		L149:	a2 += b[149 * X];
		L150:	a0 += b[150 * X];
		L151:	a1 += b[151 * X];
		L152:	a2 += b[152 * X];
		L153:	a0 += b[153 * X];
		L154:	a1 += b[154 * X];
		L155:	a2 += b[155 * X];
		L156:	a0 += b[156 * X];
		L157:	a1 += b[157 * X];
		L158:	a2 += b[158 * X];
		L159:	a0 += b[159 * X];
		L160:	a1 += b[160 * X];
		L161:	a2 += b[161 * X];
		L162:	a0 += b[162 * X];
		L163:	a1 += b[163 * X];
		L164:	a2 += b[164 * X];
		L165:	a0 += b[165 * X];
		L166:	a1 += b[166 * X];
		L167:	a2 += b[167 * X];
		L168:	a0 += b[168 * X];
		L169:	a1 += b[169 * X];
		L170:	a2 += b[170 * X];
		L171:	a0 += b[171 * X];
		L172:	a1 += b[172 * X];
		L173:	a2 += b[173 * X];
		L174:	a0 += b[174 * X];
		L175:	a1 += b[175 * X];
		L176:	a2 += b[176 * X];
		L177:	a0 += b[177 * X];
		L178:	a1 += b[178 * X];
		L179:	a2 += b[179 * X];
		L180:	a0 += b[180 * X];
		L181:	a1 += b[181 * X];
		L182:	a2 += b[182 * X];
		L183:	a0 += b[183 * X];
		L184:	a1 += b[184 * X];
		L185:	a2 += b[185 * X];
		L186:	a0 += b[186 * X];
		L187:	a1 += b[187 * X];
		L188:	a2 += b[188 * X];
		L189:	a0 += b[189 * X];
		L190:	a1 += b[190 * X];
		L191:	a2 += b[191 * X];
		L192:	a0 += b[192 * X];
		L193:	a1 += b[193 * X];
		L194:	a2 += b[194 * X];
		L195:	a0 += b[195 * X];
		L196:	a1 += b[196 * X];
		L197:	a2 += b[197 * X];
		L198:	a0 += b[198 * X];
		L199:	a1 += b[199 * X];
		L200:	a2 += b[200 * X];
		L201:	a0 += b[201 * X];
		L202:	a1 += b[202 * X];
		L203:	a2 += b[203 * X];
		L204:	a0 += b[204 * X];
		L205:	a1 += b[205 * X];
		L206:	a2 += b[206 * X];
		L207:	a0 += b[207 * X];
		L208:	a1 += b[208 * X];
		L209:	a2 += b[209 * X];
		L210:	a0 += b[210 * X];
		L211:	a1 += b[211 * X];
		L212:	a2 += b[212 * X];
		L213:	a0 += b[213 * X];
		L214:	a1 += b[214 * X];
		L215:	a2 += b[215 * X];
		L216:	a0 += b[216 * X];
		L217:	a1 += b[217 * X];
		L218:	a2 += b[218 * X];
		L219:	a0 += b[219 * X];
		L220:	a1 += b[220 * X];
		L221:	a2 += b[221 * X];
		L222:	a0 += b[222 * X];
		L223:	a1 += b[223 * X];
		L224:	a2 += b[224 * X];
		L225:	a0 += b[225 * X];
		L226:	a1 += b[226 * X];
		L227:	a2 += b[227 * X];
		L228:	a0 += b[228 * X];
		L229:	a1 += b[229 * X];
		L230:	a2 += b[230 * X];
		L231:	a0 += b[231 * X];
		L232:	a1 += b[232 * X];
		L233:	a2 += b[233 * X];
		L234:	a0 += b[234 * X];
		L235:	a1 += b[235 * X];
		L236:	a2 += b[236 * X];
		L237:	a0 += b[237 * X];
		L238:	a1 += b[238 * X];
		L239:	a2 += b[239 * X];
		L240:	a0 += b[240 * X];
		L241:	a1 += b[241 * X];
		L242:	a2 += b[242 * X];
		L243:	a0 += b[243 * X];
		L244:	a1 += b[244 * X];
		L245:	a2 += b[245 * X];
		L246:	a0 += b[246 * X];
		L247:	a1 += b[247 * X];
		L248:	a2 += b[248 * X];
		L249:	a0 += b[249 * X];
		L250:	a1 += b[250 * X];
		L251:	a2 += b[251 * X];
		L252:	a0 += b[252 * X];
		L253:	a1 += b[253 * X];
		L254:	a2 += b[254 * X];
		L255:	a0 += b[255 * X];
		L256:	a1 += b[256 * X];
		L257:	a2 += b[257 * X];
		L258:	a0 += b[258 * X];
		L259:	a1 += b[259 * X];
		L260:	a2 += b[260 * X];
		L261:	a0 += b[261 * X];
		L262:	a1 += b[262 * X];
		L263:	a2 += b[263 * X];
		L264:	a0 += b[264 * X];
		L265:	a1 += b[265 * X];
		L266:	a2 += b[266 * X];
		L267:	a0 += b[267 * X];
		L268:	a1 += b[268 * X];
		L269:	a2 += b[269 * X];
		L270:	a0 += b[270 * X];
		L271:	a1 += b[271 * X];
		L272:	a2 += b[272 * X];
		L273:	a0 += b[273 * X];
		L274:	a1 += b[274 * X];
		L275:	a2 += b[275 * X];
		L276:	a0 += b[276 * X];
		L277:	a1 += b[277 * X];
		L278:	a2 += b[278 * X];
		L279:	a0 += b[279 * X];
		L280:	a1 += b[280 * X];
		L281:	a2 += b[281 * X];
		L282:	a0 += b[282 * X];
		L283:	a1 += b[283 * X];
		L284:	a2 += b[284 * X];
		L285:	a0 += b[285 * X];
		L286:	a1 += b[286 * X];
		L287:	a2 += b[287 * X];
		L288:	a0 += b[288 * X];
		L289:	a1 += b[289 * X];
		L290:	a2 += b[290 * X];
		L291:	a0 += b[291 * X];
		L292:	a1 += b[292 * X];
		L293:	a2 += b[293 * X];
		L294:	a0 += b[294 * X];
		L295:	a1 += b[295 * X];
		L296:	a2 += b[296 * X];
		L297:	a0 += b[297 * X];
		L298:	a1 += b[298 * X];
		L299:	a2 += b[299 * X];
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1 + a2);
	return 0;
}
