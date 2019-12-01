#ショートカット
CS D    デバッグを開く
CS Y    デバッグコンソールを開く・閉じる
F5      デバッグ開始／続行
F9      ブレークポイントの切り替え
S F9    列ブレークポイントの設定
F10     ステップオーバー
F11     ステップイン
F6      中断
S F11   ステップアウト
CF F5   デバッグを再起動



DDD
データディスプレイデバッグ

ブレークポイントの設定5つ
１． 行 　
２． 列 Column（ 行 の 部分） 　
３． 条件 Condition（ 評価 式 Expression と、 通過 回数 Hit Count） 　
４． 関数 Function 　
５． その他、 すべて の 例外 など 言語 特有 の ブレーク ポイント

1行中に複数のデバッグ設定が可能

行の左端を押す
Shift+F9
Shift+F9 行の途中で列Columブレークポイントの設定が可能
行の左端で右クリック
赤丸がつく



例
Ecpression
    j==0
Hit Count
    2
Logpoint（Printデバッグの代わり）
    i:{i},j:{j}



ブレイクポイントが不可能なときは
マークが灰色

関数 Function ブレーク ポイント の 設定
???



#ステップ実行
F5      継続 Continue      次のブレークポイントまで移動
F10     ステップオーバー    現在行を実行して次の行へ
F11     ステップイン        現在の行の実行が関数の場合、その中へ進む
S+F11   ステップアウト      現在実行中の関数を抜けるまで実行する

C+S+F5  再起動 Restart デバッグを再起動
S F5    停止 Stop デバッグを終了
F6      中断 Pause ステップ実行のため停止させる（有効な場合表示される）
実行タスクの切り替え

他に
ステップバック ステップ実行において、一つ前のステップに戻る
移動 Move To ステップを任意の場所に移動する
逆行 Reverse Continue ステップ実行において、一つ前のブレークポイントにロールバックする。


#データインスペクション
ステップ実行でプログラムが停止している時に、
各変数の値を確認したり、更新したりする。

デバッグの
「変数ペイン」、
「ウォッチ式ペイン」、
コード中にマウスオーバーしたときのポップアップ
がこの機能を持つ。

※ペインとはVSCode内の1コンポーネント


変数のペインには、
現在選択されているタスク
コールスタックにおける変数、クラス、構造体の中身
値の書き換え可能

拡張機能に、
ソースコード中の変数にマウスオーバーした時に、ポップアップでその変数の中身を表示する機能を持つものもある。

ウォッチ式WATCHのペインでは、監視したい変数を入力し、ステップ実行で変数の値の変わる様相を見ることができる。

言語によっては変数を直接編集可能



ワークスペースのディレクトリーに関する変数　　
${workspaceRoot}:           フルパス
${workspaceRootFolderName}: ディレクトリー名

現在エディターで開いているファイルに関する変数
${file}:                    フルパス
${relativeFile}:            ワークスペースからのパス　　
${fileBasename}:            ファイル名　　
${fileBasenameNoExtension}: ファイル名から拡張子を除いたもの　　
${fileDirname}:             ディレクトリー名　　
${fileExtname}:             拡張子

その他の変数
${cwd}:                     事前実行のタスクの起動したディレクトリー
${lineNumber}:              デバッグを実行した行番号
${env.NAME}:                任意の環境変数(NAMEは必ず全て大文字の必要がある)
${config:Name}:             setting.jsonから引用






Break Point
✅ break point
✅ condition break point
✅ function breakpoint
Step Execution
✅ Step Over
✅ Step Into
✅ Step Out
✅ Continue
❌ Step Back
❌ Move To
❌ Pause
Variables
✅ variables views
✅ watch variables
Call Stack
✅ call stack
Evaluation
✅ eval expression to show variables
✅ eval expression to change variables
Type of Execution
✅ debug unit test
✅ debug executable package
✅ attach debug process (but cannot work on MacOS)
✅ remote debugging (but cannot start server on MacOS)




-g  デバッグを有効
-Oo 最適化を無効
-W -Wall 警告をすべて表示













