#include<stdio.h>
#include<math.h>

#define Pl 3.1415926
 
int main(void){
int va, vb ,D = 1;
char mod;
double fnc, A = 0, p, z;
char sw,k,o,x,y;
  //モードをスキャン//
  printf("モードを選択してください)\n");
    //モード表示//
    scanf(" %c", &mod);
   
   while(1){
  //aモードと押された場合//
   switch(mod){
    case 'a':
    if(D == 1)//このプログラミングが一回目なのか二回めなのかを判断するの条件式//
    {
    //もし、数字文字数字で入力されなかったらモードに戻る//
    if(scanf("%d %c %d", &va, &sw, &vb) != 3){//正常に入力されているかを確認//
    printf("モードを選択してください)\n");
    scanf(" %c", &mod);
    continue;}
    switch(sw) //四則演算モード//
    {
    case '+':
    A = va+vb;
    printf("2つの数の和は%gです\n",A);
    break;
    case '-':
    A = va-vb;
    printf("2つの数の差は%gです\n",A);
    break;

    case '*':
    A = va*vb;
    printf("2つの数字の積は%gです\n",A);
    break;

    case '/':if( vb == 0.0 ){
    printf( "Error(零での計算はできません)\n" );
    continue;}
    A = va/vb;
    printf("2つの数字の商は%gです\n",A);
    break;
 
    default:
    printf("Error(計算できません)\n");
    continue; 
   }
   D++;//何度も計算できる//
  }
   //f押されたら切り替え//
    while(1){
    scanf(" %c", &sw);
    if(sw =='f'){
    mod = 'f';//fと押されたらモード切り替えのためにbreak//
    break;
    }
    else if(sw =='q')//qと押された場合終了(最後に行く）//
    return 0;
    scanf(" %d", &vb);
    switch(sw){
    case '+':
    A += vb;
    printf("2つの数の和は%gです\n",A);
    break;

    case '-':
    A -= vb;
    printf("2つの数の差は%gです\n",A);
    break;

    case '*':
    A *= vb;
    printf("2つの数字の積は%gです\n",A);
    break;

    case '/':if( vb == 0.0 ) {
    printf( "Error(零での計算はできません)\n" );
    continue; 
    }
    A /= vb;
    printf("2つの数字の商は%gです\n",A);
    break;
 
    default:
    printf("Error(計算できません)\n");
    continue;  
   
  }
 }

//fと押されたら、関数電卓の始まり//

    case 'f':
    if(D == 1)//一回目か同化を判断する//
    {
    scanf(" %c",&o);//もし&oにaが押されたらaモードに切り替え//
    if(o == 'a'){
    mod = 'a';
    
    continue;
    }
    else if(o =='q')//終了ボタン//
    return 0;
    scanf(" %lf %c %c %lf",&p,&x,&y,&z);
  
   
    switch(o){
    case 's':
    p = sin(p*Pl/180.0);
     
    break;

    case 'c':
  
    p = cos(p*Pl/180.0);
     
    break;

    case 't':
    
    p = tan(p*Pl/180.0);
   
    break;

    default:
    continue;  
    }
    switch(y){
    case 's':
    z = sin(z*Pl/180.0);
     
    break;

    case 'c':
  
    z = cos(z*Pl/180.0);
     
    break;

    case 't':
    
    z = tan(z*Pl/180.0);
   
    break;

    default:
    continue;  
    }
   switch(x){
    case '+':
    A = p+z;
    printf("2つの数の和は%gです\n",A);
    break;

    case '-':
    A = p-z;
    printf("2つの数の差は%gです\n",A);
    break;

    case '*':
    A = p*z;
    printf("2つの数字の積は%gです\n",A);
    break;

    case '/':if( z == 0.0 ) {
    printf( "Error(零での計算はできません)\n" );
    continue;}
    A = p/z;
    printf("2つの数字の商は%gです\n",A);
    break;
 
    default:
    printf("Error(計算できません)\n");
    continue; 
   }
  D++;
 }
 
   while(1){
    scanf(" %c", &k);//ヌル文字対策でヒトマスあける//
    if(k == 'a'){   //kにaが押されたらモード切り替え//
    mod = 'a';
    
    break;
    }
    else if(k =='q')
    return 0;
    scanf(" %c %lf",&sw, &fnc);
    
    switch(sw){
    case 's':
    fnc = sin(fnc*Pl/180.0);
     
    break;

    case 'c':
  
    fnc = cos(fnc*Pl/180.0);
     
    break;

    case 't':
    
    fnc = tan(fnc*Pl/180.0);
   
    break;

    default:
    continue;  
    }
  
   switch(k){
    case'+':
    A += fnc;
    printf("2つの数の和は%gです\n",A);
    break;
 
    case'-':
    A -= fnc;
    printf("2つの数の差は%gです\n",A);
    break;
 
    case'*':
    A *= fnc;
    printf("2つの数の積は%gです\n",A);
    break;
 
    case '/':if( fnc == 0.0){
    printf( "Error(零での計算はできません)\n" );
    continue;}
    A /= fnc;
    printf("2つの数の商は%gです\n",A);
    break;
    }
   }
   case'q'://case qだったら終了(最後に行く）//
   return 0;
   break;
   default ://それ以外だった場合モード選択に戻る//
   scanf(" %c",&mod);
   continue;
  }
 }
   return 0;
}
  
  
