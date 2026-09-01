/* FUN_101201c6 @ 0x101201c6 */

void FUN_101201c6(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_3;
  do {
    if (uVar2 == 0) {
      return;
    }
    uVar3 = uVar2;
    if (0xffff < uVar2) {
      uVar3 = 0x10000;
    }
    FUN_10120114(param_1,1);
    if (param_4 == 1) {
      uVar1 = 0;
LAB_101201f6:
      FUN_1011fffa(param_1,uVar1);
      uVar1 = 2;
    }
    else if (param_4 == 2) {
      uVar1 = 0;
LAB_10120244:
      FUN_1011fffa(param_1,uVar1);
      uVar1 = 3;
    }
    else {
      if (param_4 == 3) {
        uVar1 = 1;
        goto LAB_101201f6;
      }
      if (param_4 == 4) {
        uVar1 = 1;
        goto LAB_10120244;
      }
      FUN_1011fffa(param_1,0);
      uVar1 = 0;
    }
    FUN_1012001a(param_1,uVar1);
    uVar1 = FUN_1012002c();
    FUN_1012003a(uVar1,2);
    FUN_1007df2c();
    uVar1 = FUN_1012008e(param_1,(param_3 - uVar2) + param_2);
    uVar1 = FUN_10120096(uVar1,8);
    FUN_1012009e(uVar1,uVar3);
    FUN_101200a6();
    FUN_101200b0();
    uVar2 = uVar2 - uVar3;
    FUN_10120060();
    FUN_1012006e();
  } while( true );
}

