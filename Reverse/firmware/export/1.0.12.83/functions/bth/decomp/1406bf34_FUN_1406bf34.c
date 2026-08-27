/* FUN_1406bf34 @ 0x1406bf34 */

void FUN_1406bf34(undefined4 param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  
  if ((param_2 & 0x3f) == 0x12) {
    uVar2 = 0xd;
  }
  else {
    if ((param_2 & 0x3f) != 0x16) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x42,DAT_1406bfa4,0x340,DAT_1406bfa8);
    }
    uVar2 = 0x15;
  }
  iVar1 = FUN_1406cd54(param_1,uVar2,0x2c,DAT_1406bfac,param_4);
  *param_3 = DAT_1406bfb0;
  if (iVar1 == 0) {
    iVar1 = *param_4;
    *(undefined1 *)(iVar1 + 0x2a) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined1 *)(iVar1 + 0x29) = 0xff;
    if ((int)(param_2 << 0x18) < 0) {
      *(undefined1 *)(iVar1 + 0x28) = 3;
      return;
    }
    if ((int)(param_2 << 0x19) < 0) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    *(undefined1 *)(iVar1 + 0x28) = uVar3;
  }
  return;
}

