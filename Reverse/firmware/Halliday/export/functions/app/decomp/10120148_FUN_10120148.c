/* FUN_10120148 @ 0x10120148 */

void FUN_10120148(undefined4 param_1,undefined1 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  
  FUN_10120114(param_1,0);
  if (param_4 == 1) {
    uVar1 = 0;
LAB_1012015e:
    FUN_1011fffa(param_1,uVar1);
    uVar1 = 2;
  }
  else {
    if (param_4 == 2) {
      uVar1 = 0;
    }
    else {
      if (param_4 == 3) {
        uVar1 = 1;
        goto LAB_1012015e;
      }
      if (param_4 != 4) {
        FUN_1011fffa(param_1,0);
        uVar1 = 0;
        goto LAB_10120166;
      }
      uVar1 = 1;
    }
    FUN_1011fffa(param_1,uVar1);
    uVar1 = 3;
  }
LAB_10120166:
  FUN_1012001a(param_1,uVar1);
  uVar1 = FUN_1012002c();
  FUN_1012003a(uVar1,2);
  puVar2 = param_2 + param_3;
  for (; param_2 != puVar2; param_2 = param_2 + 1) {
    FUN_1012004a(param_1);
    FUN_10120058(param_1,*param_2);
  }
  FUN_10120060();
  FUN_1012006e();
  return;
}

