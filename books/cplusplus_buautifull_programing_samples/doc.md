#c++美しいプログラミング見本帖
#2019/08/19

#chapter 1

P17 
	static, anonymous name space, どっち
---
P20 
	fprint cout 整合性
---

#chapter 2

P68
	c++とcのstructの違い 冗長 タグ名
---
P72
	関数プロトタイプ宣言が必要なケース まれ フレンド関数 使う時
---

#chapter 3

P99
	コンストラクタ 暗黙 `string str2 = buff` explicit
---
P105
	クラス内 typedef スコープ解決演算子
---
P106
	クラスstaticメンバ アクセス 共有 実装されない
---
P115
	c++malloc使わない理由 例外 コンストラクタ
---

#chapter 5
P174
	クラス定義 inline 暗黙
---
P180
	複数のコンストラクタ デフォルト引数 問題
---
P180
	デフォルト引数 適用の順番 問題
---
P200
	クラスの初期化 リスト 宣言順
---
	
#chapter 6

P208
	メンバ関数 const 戻り値改ざん
---
P217
	メンバ関数 static 非static アクセスできない理由
---
P222
	staticメンバ メリット
---
P237
	コピーコンストラクタ 使っては行けないケース コピー代入演算子同様
---

#chapter 7 
P300
	Class AA : public virtual Super 
---

#chapter 8 
P313 P314
	const メンバ関数 意味
---
P313
	mutable const メンバ
	存在理由がよく分からん
---
P321
	関数の参照渡しの戻り値をconst宣言 参照先固定 参照するものは変えられる 勘違い
---
P331
	加減算演算子 オーバーロード const 推奨
---
P337
	後置演算子 int ダミー
---
P337
	ローカル 参照を返しては行けない	
---
P340
	第一引数 基本データ型 二項演算子関数 解決法 friend

