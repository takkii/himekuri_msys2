[![MIT License](http://img.shields.io/badge/license-MIT-blue.svg?style=flat)](LICENSE)[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)![GitHub release](https://img.shields.io/github/release/takkii/himekuri_c_plusplus.svg?style=flat)[![GitHub Status](https://img.shields.io/github/last-commit/takkii/himekuri_c_plusplus.svg?style=flat)](GitHub)

### 日めくりのC++版。

| [日めくり(Ruby)](https://github.com/takkii/himekuri) | [日めくり(Java)](https://github.com/takkii/himekuri_java) | [日めくり(C#)](https://github.com/takkii/himekuri_shaper) | [日めくり2(Ruby拡張C++)](https://github.com/takkii/himekuri2) | [日めくり(TypeScript)](https://github.com/takkii/himekuri_ts) |

```markdown
現在時刻 : 2021年8月21日 : 17時48分29秒 : 土曜日 : 葉月
来年の1月1日まであと : 133 日です
令和3年8月21日 : R03.8.21
日めくり数え番号 : 1.1.2
現在の C++ : C++17
```

[Qt_config](https://github.com/takkii/Qt_config)、QtCreatorの初期設定でC++を実行するとTerminalが起動します。個人的に、Terminalは使わないのでiTerm2に置き換えたいと呼び出し部分を変更しました。ソースのライセンスがGPLv3だったのでそのままにしています。影響範囲が少ない変更なので、iTerm2でより使いやすくなっています。

#### 実行方法

```markdown
標準
g++ -g main.cpp -o himekuri

C++17使用
g++ -g main.cpp -o himekuri -std=gnu++17

./himekuri
```
