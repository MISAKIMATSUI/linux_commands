#include <stdlib.h>
#include <stdio.h>

#define x(n)	case n: goto L ## n

#define X	8192

int	b[400 * X];

int
main(int argc, char **argv)
{
	int n = argc > 1 ? atoi(argv[1]) : 1000000000;
	int a = argc > 2 ? atoi(argv[2]) : 0;
	int i;
	int a0 = a, a1 = a, a2 = a, a3 = a;

	n /= 40;
	for (i = 400 * X; (i -= X) >= 0; ) {
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
		x(300); x(301); x(302); x(303); x(304);
		x(305); x(306); x(307); x(308); x(309);
		x(310); x(311); x(312); x(313); x(314);
		x(315); x(316); x(317); x(318); x(319);
		x(320); x(321); x(322); x(323); x(324);
		x(325); x(326); x(327); x(328); x(329);
		x(330); x(331); x(332); x(333); x(334);
		x(335); x(336); x(337); x(338); x(339);
		x(340); x(341); x(342); x(343); x(344);
		x(345); x(346); x(347); x(348); x(349);
		x(350); x(351); x(352); x(353); x(354);
		x(355); x(356); x(357); x(358); x(359);
		x(360); x(361); x(362); x(363); x(364);
		x(365); x(366); x(367); x(368); x(369);
		x(370); x(371); x(372); x(373); x(374);
		x(375); x(376); x(377); x(378); x(379);
		x(380); x(381); x(382); x(383); x(384);
		x(385); x(386); x(387); x(388); x(389);
		x(390); x(391); x(392); x(393); x(394);
		x(395); x(396); x(397); x(398); x(399);
	}
	do {
		asm("DUMMY1:");
		L0:	a0 += b[0 * X];
		L1:	a1 += b[1 * X];
		L2:	a2 += b[2 * X];
		L3:	a3 += b[3 * X];
		L4:	a0 += b[4 * X];
		L5:	a1 += b[5 * X];
		L6:	a2 += b[6 * X];
		L7:	a3 += b[7 * X];
		L8:	a0 += b[8 * X];
		L9:	a1 += b[9 * X];
		L10:	a2 += b[10 * X];
		L11:	a3 += b[11 * X];
		L12:	a0 += b[12 * X];
		L13:	a1 += b[13 * X];
		L14:	a2 += b[14 * X];
		L15:	a3 += b[15 * X];
		L16:	a0 += b[16 * X];
		L17:	a1 += b[17 * X];
		L18:	a2 += b[18 * X];
		L19:	a3 += b[19 * X];
		L20:	a0 += b[20 * X];
		L21:	a1 += b[21 * X];
		L22:	a2 += b[22 * X];
		L23:	a3 += b[23 * X];
		L24:	a0 += b[24 * X];
		L25:	a1 += b[25 * X];
		L26:	a2 += b[26 * X];
		L27:	a3 += b[27 * X];
		L28:	a0 += b[28 * X];
		L29:	a1 += b[29 * X];
		L30:	a2 += b[30 * X];
		L31:	a3 += b[31 * X];
		L32:	a0 += b[32 * X];
		L33:	a1 += b[33 * X];
		L34:	a2 += b[34 * X];
		L35:	a3 += b[35 * X];
		L36:	a0 += b[36 * X];
		L37:	a1 += b[37 * X];
		L38:	a2 += b[38 * X];
		L39:	a3 += b[39 * X];
		L40:	a0 += b[40 * X];
		L41:	a1 += b[41 * X];
		L42:	a2 += b[42 * X];
		L43:	a3 += b[43 * X];
		L44:	a0 += b[44 * X];
		L45:	a1 += b[45 * X];
		L46:	a2 += b[46 * X];
		L47:	a3 += b[47 * X];
		L48:	a0 += b[48 * X];
		L49:	a1 += b[49 * X];
		L50:	a2 += b[50 * X];
		L51:	a3 += b[51 * X];
		L52:	a0 += b[52 * X];
		L53:	a1 += b[53 * X];
		L54:	a2 += b[54 * X];
		L55:	a3 += b[55 * X];
		L56:	a0 += b[56 * X];
		L57:	a1 += b[57 * X];
		L58:	a2 += b[58 * X];
		L59:	a3 += b[59 * X];
		L60:	a0 += b[60 * X];
		L61:	a1 += b[61 * X];
		L62:	a2 += b[62 * X];
		L63:	a3 += b[63 * X];
		L64:	a0 += b[64 * X];
		L65:	a1 += b[65 * X];
		L66:	a2 += b[66 * X];
		L67:	a3 += b[67 * X];
		L68:	a0 += b[68 * X];
		L69:	a1 += b[69 * X];
		L70:	a2 += b[70 * X];
		L71:	a3 += b[71 * X];
		L72:	a0 += b[72 * X];
		L73:	a1 += b[73 * X];
		L74:	a2 += b[74 * X];
		L75:	a3 += b[75 * X];
		L76:	a0 += b[76 * X];
		L77:	a1 += b[77 * X];
		L78:	a2 += b[78 * X];
		L79:	a3 += b[79 * X];
		L80:	a0 += b[80 * X];
		L81:	a1 += b[81 * X];
		L82:	a2 += b[82 * X];
		L83:	a3 += b[83 * X];
		L84:	a0 += b[84 * X];
		L85:	a1 += b[85 * X];
		L86:	a2 += b[86 * X];
		L87:	a3 += b[87 * X];
		L88:	a0 += b[88 * X];
		L89:	a1 += b[89 * X];
		L90:	a2 += b[90 * X];
		L91:	a3 += b[91 * X];
		L92:	a0 += b[92 * X];
		L93:	a1 += b[93 * X];
		L94:	a2 += b[94 * X];
		L95:	a3 += b[95 * X];
		L96:	a0 += b[96 * X];
		L97:	a1 += b[97 * X];
		L98:	a2 += b[98 * X];
		L99:	a3 += b[99 * X];
		L100:	a0 += b[100 * X];
		L101:	a1 += b[101 * X];
		L102:	a2 += b[102 * X];
		L103:	a3 += b[103 * X];
		L104:	a0 += b[104 * X];
		L105:	a1 += b[105 * X];
		L106:	a2 += b[106 * X];
		L107:	a3 += b[107 * X];
		L108:	a0 += b[108 * X];
		L109:	a1 += b[109 * X];
		L110:	a2 += b[110 * X];
		L111:	a3 += b[111 * X];
		L112:	a0 += b[112 * X];
		L113:	a1 += b[113 * X];
		L114:	a2 += b[114 * X];
		L115:	a3 += b[115 * X];
		L116:	a0 += b[116 * X];
		L117:	a1 += b[117 * X];
		L118:	a2 += b[118 * X];
		L119:	a3 += b[119 * X];
		L120:	a0 += b[120 * X];
		L121:	a1 += b[121 * X];
		L122:	a2 += b[122 * X];
		L123:	a3 += b[123 * X];
		L124:	a0 += b[124 * X];
		L125:	a1 += b[125 * X];
		L126:	a2 += b[126 * X];
		L127:	a3 += b[127 * X];
		L128:	a0 += b[128 * X];
		L129:	a1 += b[129 * X];
		L130:	a2 += b[130 * X];
		L131:	a3 += b[131 * X];
		L132:	a0 += b[132 * X];
		L133:	a1 += b[133 * X];
		L134:	a2 += b[134 * X];
		L135:	a3 += b[135 * X];
		L136:	a0 += b[136 * X];
		L137:	a1 += b[137 * X];
		L138:	a2 += b[138 * X];
		L139:	a3 += b[139 * X];
		L140:	a0 += b[140 * X];
		L141:	a1 += b[141 * X];
		L142:	a2 += b[142 * X];
		L143:	a3 += b[143 * X];
		L144:	a0 += b[144 * X];
		L145:	a1 += b[145 * X];
		L146:	a2 += b[146 * X];
		L147:	a3 += b[147 * X];
		L148:	a0 += b[148 * X];
		L149:	a1 += b[149 * X];
		L150:	a2 += b[150 * X];
		L151:	a3 += b[151 * X];
		L152:	a0 += b[152 * X];
		L153:	a1 += b[153 * X];
		L154:	a2 += b[154 * X];
		L155:	a3 += b[155 * X];
		L156:	a0 += b[156 * X];
		L157:	a1 += b[157 * X];
		L158:	a2 += b[158 * X];
		L159:	a3 += b[159 * X];
		L160:	a0 += b[160 * X];
		L161:	a1 += b[161 * X];
		L162:	a2 += b[162 * X];
		L163:	a3 += b[163 * X];
		L164:	a0 += b[164 * X];
		L165:	a1 += b[165 * X];
		L166:	a2 += b[166 * X];
		L167:	a3 += b[167 * X];
		L168:	a0 += b[168 * X];
		L169:	a1 += b[169 * X];
		L170:	a2 += b[170 * X];
		L171:	a3 += b[171 * X];
		L172:	a0 += b[172 * X];
		L173:	a1 += b[173 * X];
		L174:	a2 += b[174 * X];
		L175:	a3 += b[175 * X];
		L176:	a0 += b[176 * X];
		L177:	a1 += b[177 * X];
		L178:	a2 += b[178 * X];
		L179:	a3 += b[179 * X];
		L180:	a0 += b[180 * X];
		L181:	a1 += b[181 * X];
		L182:	a2 += b[182 * X];
		L183:	a3 += b[183 * X];
		L184:	a0 += b[184 * X];
		L185:	a1 += b[185 * X];
		L186:	a2 += b[186 * X];
		L187:	a3 += b[187 * X];
		L188:	a0 += b[188 * X];
		L189:	a1 += b[189 * X];
		L190:	a2 += b[190 * X];
		L191:	a3 += b[191 * X];
		L192:	a0 += b[192 * X];
		L193:	a1 += b[193 * X];
		L194:	a2 += b[194 * X];
		L195:	a3 += b[195 * X];
		L196:	a0 += b[196 * X];
		L197:	a1 += b[197 * X];
		L198:	a2 += b[198 * X];
		L199:	a3 += b[199 * X];
		L200:	a0 += b[200 * X];
		L201:	a1 += b[201 * X];
		L202:	a2 += b[202 * X];
		L203:	a3 += b[203 * X];
		L204:	a0 += b[204 * X];
		L205:	a1 += b[205 * X];
		L206:	a2 += b[206 * X];
		L207:	a3 += b[207 * X];
		L208:	a0 += b[208 * X];
		L209:	a1 += b[209 * X];
		L210:	a2 += b[210 * X];
		L211:	a3 += b[211 * X];
		L212:	a0 += b[212 * X];
		L213:	a1 += b[213 * X];
		L214:	a2 += b[214 * X];
		L215:	a3 += b[215 * X];
		L216:	a0 += b[216 * X];
		L217:	a1 += b[217 * X];
		L218:	a2 += b[218 * X];
		L219:	a3 += b[219 * X];
		L220:	a0 += b[220 * X];
		L221:	a1 += b[221 * X];
		L222:	a2 += b[222 * X];
		L223:	a3 += b[223 * X];
		L224:	a0 += b[224 * X];
		L225:	a1 += b[225 * X];
		L226:	a2 += b[226 * X];
		L227:	a3 += b[227 * X];
		L228:	a0 += b[228 * X];
		L229:	a1 += b[229 * X];
		L230:	a2 += b[230 * X];
		L231:	a3 += b[231 * X];
		L232:	a0 += b[232 * X];
		L233:	a1 += b[233 * X];
		L234:	a2 += b[234 * X];
		L235:	a3 += b[235 * X];
		L236:	a0 += b[236 * X];
		L237:	a1 += b[237 * X];
		L238:	a2 += b[238 * X];
		L239:	a3 += b[239 * X];
		L240:	a0 += b[240 * X];
		L241:	a1 += b[241 * X];
		L242:	a2 += b[242 * X];
		L243:	a3 += b[243 * X];
		L244:	a0 += b[244 * X];
		L245:	a1 += b[245 * X];
		L246:	a2 += b[246 * X];
		L247:	a3 += b[247 * X];
		L248:	a0 += b[248 * X];
		L249:	a1 += b[249 * X];
		L250:	a2 += b[250 * X];
		L251:	a3 += b[251 * X];
		L252:	a0 += b[252 * X];
		L253:	a1 += b[253 * X];
		L254:	a2 += b[254 * X];
		L255:	a3 += b[255 * X];
		L256:	a0 += b[256 * X];
		L257:	a1 += b[257 * X];
		L258:	a2 += b[258 * X];
		L259:	a3 += b[259 * X];
		L260:	a0 += b[260 * X];
		L261:	a1 += b[261 * X];
		L262:	a2 += b[262 * X];
		L263:	a3 += b[263 * X];
		L264:	a0 += b[264 * X];
		L265:	a1 += b[265 * X];
		L266:	a2 += b[266 * X];
		L267:	a3 += b[267 * X];
		L268:	a0 += b[268 * X];
		L269:	a1 += b[269 * X];
		L270:	a2 += b[270 * X];
		L271:	a3 += b[271 * X];
		L272:	a0 += b[272 * X];
		L273:	a1 += b[273 * X];
		L274:	a2 += b[274 * X];
		L275:	a3 += b[275 * X];
		L276:	a0 += b[276 * X];
		L277:	a1 += b[277 * X];
		L278:	a2 += b[278 * X];
		L279:	a3 += b[279 * X];
		L280:	a0 += b[280 * X];
		L281:	a1 += b[281 * X];
		L282:	a2 += b[282 * X];
		L283:	a3 += b[283 * X];
		L284:	a0 += b[284 * X];
		L285:	a1 += b[285 * X];
		L286:	a2 += b[286 * X];
		L287:	a3 += b[287 * X];
		L288:	a0 += b[288 * X];
		L289:	a1 += b[289 * X];
		L290:	a2 += b[290 * X];
		L291:	a3 += b[291 * X];
		L292:	a0 += b[292 * X];
		L293:	a1 += b[293 * X];
		L294:	a2 += b[294 * X];
		L295:	a3 += b[295 * X];
		L296:	a0 += b[296 * X];
		L297:	a1 += b[297 * X];
		L298:	a2 += b[298 * X];
		L299:	a3 += b[299 * X];
		L300:	a0 += b[300 * X];
		L301:	a1 += b[301 * X];
		L302:	a2 += b[302 * X];
		L303:	a3 += b[303 * X];
		L304:	a0 += b[304 * X];
		L305:	a1 += b[305 * X];
		L306:	a2 += b[306 * X];
		L307:	a3 += b[307 * X];
		L308:	a0 += b[308 * X];
		L309:	a1 += b[309 * X];
		L310:	a2 += b[310 * X];
		L311:	a3 += b[311 * X];
		L312:	a0 += b[312 * X];
		L313:	a1 += b[313 * X];
		L314:	a2 += b[314 * X];
		L315:	a3 += b[315 * X];
		L316:	a0 += b[316 * X];
		L317:	a1 += b[317 * X];
		L318:	a2 += b[318 * X];
		L319:	a3 += b[319 * X];
		L320:	a0 += b[320 * X];
		L321:	a1 += b[321 * X];
		L322:	a2 += b[322 * X];
		L323:	a3 += b[323 * X];
		L324:	a0 += b[324 * X];
		L325:	a1 += b[325 * X];
		L326:	a2 += b[326 * X];
		L327:	a3 += b[327 * X];
		L328:	a0 += b[328 * X];
		L329:	a1 += b[329 * X];
		L330:	a2 += b[330 * X];
		L331:	a3 += b[331 * X];
		L332:	a0 += b[332 * X];
		L333:	a1 += b[333 * X];
		L334:	a2 += b[334 * X];
		L335:	a3 += b[335 * X];
		L336:	a0 += b[336 * X];
		L337:	a1 += b[337 * X];
		L338:	a2 += b[338 * X];
		L339:	a3 += b[339 * X];
		L340:	a0 += b[340 * X];
		L341:	a1 += b[341 * X];
		L342:	a2 += b[342 * X];
		L343:	a3 += b[343 * X];
		L344:	a0 += b[344 * X];
		L345:	a1 += b[345 * X];
		L346:	a2 += b[346 * X];
		L347:	a3 += b[347 * X];
		L348:	a0 += b[348 * X];
		L349:	a1 += b[349 * X];
		L350:	a2 += b[350 * X];
		L351:	a3 += b[351 * X];
		L352:	a0 += b[352 * X];
		L353:	a1 += b[353 * X];
		L354:	a2 += b[354 * X];
		L355:	a3 += b[355 * X];
		L356:	a0 += b[356 * X];
		L357:	a1 += b[357 * X];
		L358:	a2 += b[358 * X];
		L359:	a3 += b[359 * X];
		L360:	a0 += b[360 * X];
		L361:	a1 += b[361 * X];
		L362:	a2 += b[362 * X];
		L363:	a3 += b[363 * X];
		L364:	a0 += b[364 * X];
		L365:	a1 += b[365 * X];
		L366:	a2 += b[366 * X];
		L367:	a3 += b[367 * X];
		L368:	a0 += b[368 * X];
		L369:	a1 += b[369 * X];
		L370:	a2 += b[370 * X];
		L371:	a3 += b[371 * X];
		L372:	a0 += b[372 * X];
		L373:	a1 += b[373 * X];
		L374:	a2 += b[374 * X];
		L375:	a3 += b[375 * X];
		L376:	a0 += b[376 * X];
		L377:	a1 += b[377 * X];
		L378:	a2 += b[378 * X];
		L379:	a3 += b[379 * X];
		L380:	a0 += b[380 * X];
		L381:	a1 += b[381 * X];
		L382:	a2 += b[382 * X];
		L383:	a3 += b[383 * X];
		L384:	a0 += b[384 * X];
		L385:	a1 += b[385 * X];
		L386:	a2 += b[386 * X];
		L387:	a3 += b[387 * X];
		L388:	a0 += b[388 * X];
		L389:	a1 += b[389 * X];
		L390:	a2 += b[390 * X];
		L391:	a3 += b[391 * X];
		L392:	a0 += b[392 * X];
		L393:	a1 += b[393 * X];
		L394:	a2 += b[394 * X];
		L395:	a3 += b[395 * X];
		L396:	a0 += b[396 * X];
		L397:	a1 += b[397 * X];
		L398:	a2 += b[398 * X];
		L399:	a3 += b[399 * X];
		asm("DUMMY2:");
	} while (--n > 0);
	printf("a = %d\n", a0 + a1 + a2 + a3);
	return 0;
}
