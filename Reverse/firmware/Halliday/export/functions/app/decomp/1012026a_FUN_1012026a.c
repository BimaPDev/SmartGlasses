/* FUN_1012026a @ 0x1012026a */

void FUN_1012026a(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_3;
  do {
    if (uVar3 == 0) {
      return;
    }
    uVar4 = uVar3;
    if (0xffff < uVar3) {
      uVar4 = 0x10000;
    }
    FUN_1012012e(param_1,1);
    if (param_4 == 1) {
      uVar2 = 1;
LAB_1012029c:
      FUN_1011fffa(param_1,uVar2);
      uVar1 = 2;
    }
    else if (param_4 == 2) {
      uVar1 = 1;
LAB_101202f6:
      FUN_1011fffa(param_1,uVar1);
      uVar1 = 3;
    }
    else {
      uVar1 = 0;
      uVar2 = 0;
      if (param_4 == 3) goto LAB_1012029c;
      if (param_4 == 4) goto LAB_101202f6;
      FUN_1011fffa(param_1,0);
      uVar1 = 0;
    }
    uVar1 = FUN_1012001a(param_1,uVar1);
    FUN_101200be(uVar1,uVar4);
    uVar1 = FUN_101200c6();
    FUN_1012003a(uVar1,1);
    FUN_1007df68();
    uVar1 = FUN_1012008e(param_1,0xc);
    uVar1 = FUN_10120096(uVar1,(param_3 - uVar3) + param_2);
    FUN_1012009e(uVar1,uVar4);
    FUN_101200d4();
    FUN_101200a6(param_1);
    FUN_101200b0();
    uVar3 = uVar3 - uVar4;
    FUN_10120060();
    FUN_1012006e();
  } while( true );
}

