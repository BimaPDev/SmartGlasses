/* FUN_1002f6f0 @ 0x1002f6f0 */

void FUN_1002f6f0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *DAT_1002f73c;
  if (param_1 != 0) {
    if (4 < param_2) {
      param_2 = 5;
    }
    uVar4 = 0;
    do {
      iVar1 = FUN_10126fb4(param_1,uVar4);
      if (iVar1 != 0) {
        if ((uVar4 & 0xff) < param_2) {
          uVar2 = 0xff;
        }
        else {
          uVar2 = 0;
        }
        FUN_10126ea2(iVar1,uVar2);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 5);
  }
  if (*DAT_1002f73c != iVar3) {
    FUN_1013cdc0();
  }
  return;
}

