[![MIT License](http://img.shields.io/badge/license-MIT-blue.svg?style=flat)](LICENSE)[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)![GitHub release](https://img.shields.io/github/release/takkii/himekuri_c_plusplus.svg?style=flat)[![GitHub Status](https://img.shields.io/github/last-commit/takkii/himekuri_c_plusplus.svg?style=flat)](GitHub)

### 日めくりのC++版。

| [日めくり(Ruby)](https://github.com/takkii/himekuri) | [日めくり(Java)](https://github.com/takkii/himekuri_java) | [日めくり(C#)](https://github.com/takkii/himekuri_shaper) | [日めくり2(Ruby拡張C++)](https://github.com/takkii/himekuri2) | [日めくり(Scala)未完成](https://github.com/takkii/himekuriScala) | [日めくり(TypeScript)](https://github.com/takkii/himekuri_ts) |

```markdown
時刻を表示:2020年7月23日：9時21分40秒
来年の1月1日まであと: 161 日です
令和2年7月23日 : R02.7.23
日めくり数え番号 : 1.0.0
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
