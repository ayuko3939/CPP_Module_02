# CPP Module 02

42TokyoのCPP_Module_02プロジェクト - 固定小数点数（Fixed-point）の実装を通してC++の基本概念を学習します。

## 概要

このモジュールでは以下のC++の基本概念を学習します：
- Ad-hoc多態性（Ad-hoc polymorphism）
- 演算子オーバーロード（Operator overloading）
- 正統形式（Orthodox Canonical Class Form）
- 固定小数点数（Fixed-point numbers）

## 課題

### Exercise 00: My First Class in Orthodox Canonical Form
**ディレクトリ**: `ex00/`

Fixedクラスの基本実装。
- デフォルトコンストラクタ
- コピーコンストラクタ
- コピー代入演算子
- デストラクタ
- getRawBits()とsetRawBits()メンバ関数

**実行**:
```bash
./Fixed
```

### Exercise 01: Towards a more useful fixed-point number class
**ディレクトリ**: `ex01/`

Fixedクラスの拡張実装。
- intとfloatからのコンストラクタ
- toInt()とtoFloat()変換関数
- 挿入（<<）演算子のオーバーロード

**実行**:
```bash
./Fixed
```

### Exercise 02: Now we're talking
**ディレクトリ**: `ex02/`

完全なFixedクラスの実装。
- 比較演算子（>, <, >=, <=, ==, !=）
- 算術演算子（+, -, *, /）
- 増減演算子（++, --）の前置・後置両方
- min, max静的メンバ関数

**実行**:
```bash
./Fixed
```

## コンパイル要件

- C++98標準
- フラグ: `-Wall -Wextra -Werror -std=c++98`
- 各exerciseにMakefileが含まれています
