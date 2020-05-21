###3章

##fork関数
・同じプログラムの処理を複数のプロセスに分けて処理する時に扱う

・親プロセスに子プロセスのID、子プロセスには0を返すため。以下のような実行結果と成る

'''
7049
I'm parent! my pid is 7048 and the pid of my child is 7049.
0
I'm child! my pid is 7049.

'''
