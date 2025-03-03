# BONYO4XS

<img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(2).jpg" width="700">

　BONYO4XSは40%サイズの分割キーボードです。
 
　リポジトリに設計データが公開されています。 自由にしてください。

　[noteでも紹介しています](https://note.com/tsuiha/m/m1388ad3cf830)

 片側4x6の計48キーを搭載しているカラムスタッガード（小指列が0.25U下がったオーソリニア）配列です。

 <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs.png" width="700">

 　サンドイッチマウント構造で、デフォルト10mm程度のテンティングが施されています。
　奥側のゴム足に高さのあるものを使用することでチルト＋テントの状態で使用することができ、手の姿勢が気持ちよく打鍵できると感じています。

 <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs.jpg" width="700">

 　親指4キー分のサムクラスタはMXキースイッチだけでなく、プレートを分離することでChoc V2キースイッチにも対応することができます。
  
 <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(16).JPG" width="700">

 　親指キーにロープロファイルスイッチを使用することで、テンティング時の親指キー高さが気になりにくくなります。

   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(15).jpg" width="700">

   外観写真
   
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(10).JPG" width="500">
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(11).JPG" width="500">
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(12).JPG" width="500">
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(13).JPG" width="500">
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(14).JPG" width="500">

   ## ビルドガイド

使用部品はparts listを参照ください。

　実装用基板、スイッチプレート、ボトムプレート、テントプレートの4種が含まれています。
　ラジオペンチ等でランナーを除去し、バリをやすり等で削ります。
 
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(3).JPG" width="700">

　画像を参考に基板に部品を実装します。左右と表裏に注意して進めます。

（下面赤枠）
　ダイオードを24か所に実装します。部品が下面に来るように実装します。画像ではDIPタイプを使用していますが、SMDタイプも使用できます。ダイオードには向きがあります。

（上面赤枠）
　上面の指定7箇所のみをジャンパします。

（下面青枠）
　TRSジャックを部品が下面に来るように実装します。

（下面緑枠）
　ロープロピンソケットを部品が下面に来るように実装します。*マイコンボードと一緒に実装するため、部品実装・マイコンボード項に従ってください。

   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(4).JPG" width="700">
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(5).JPG" width="700">
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(6).JPG" width="700">

部品実装・マイコンボード  
　マイコンボード - ピンヘッダ - ピンソケット - 基板 すべて重ねた状態ではんだ付けを行います。これは後にマイコンボードを容易に取り外せるようにするためです
 
   
   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(8).JPG" width="700">

部品実装・キースイッチ  
左側を例に進めます。

　スイッチプレートにキースイッチをはめこみます。
　*このときChoc V2を使用する際は、スリット部を切断しChoc V2キースイッチをはめてください。

　8mmスペーサを6か所ねじ止めします。
　*このときChoc V2を使用する際は、親指部に5mmスペーサを使用してください。

   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(7).JPG" width="700">

ボトムプレートとテントプレートで8mmスペーサを挟み。両側から2か所ねじ止めします。

　マイコンボードを再度基板に装着します。
　基板側とボトムプレート側を重ね、下面から6か所ねじ止めします。

   <img src="https://github.com/Tsuiha/BONYO4XS/blob/main/picture/bonyo4xs%20(9).JPG" width="700">
   
 完成です。

## qmk-vial
　ファームウェアにはqmk-vialを使用しています。  

   
