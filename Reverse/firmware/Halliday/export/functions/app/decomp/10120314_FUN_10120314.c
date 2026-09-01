/* FUN_10120314 @ 0x10120314 */

void FUN_10120314(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  FUN_1012012e(param_1,0,param_3,param_4,param_4);
  if (param_4 == 1) {
    uVar3 = 1;
LAB_1012032c:
    FUN_1011fffa(param_1,uVar3);
    uVar2 = 2;
  }
  else {
    if (param_4 == 2) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      uVar3 = 0;
      if (param_4 == 3) goto LAB_1012032c;
      if (param_4 != 4) {
        FUN_1011fffa(param_1,0);
        uVar2 = 0;
        goto LAB_10120332;
      }
    }
    FUN_1011fffa(param_1,uVar2);
    uVar2 = 3;
  }
LAB_10120332:
  uVar2 = FUN_1012001a(param_1,uVar2);
  FUN_101200be(uVar2,param_3);
  uVar2 = FUN_101200c6();
  FUN_1012003a(uVar2,1);
  puVar4 = param_2 + param_3;
  for (; param_2 != puVar4; param_2 = param_2 + 1) {
    FUN_101200d4(param_1);
    uVar1 = FUN_101200f4(param_1);
    *param_2 = uVar1;
  }
  return;
}

