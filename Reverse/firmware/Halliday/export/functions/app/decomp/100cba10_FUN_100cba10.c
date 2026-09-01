/* FUN_100cba10 @ 0x100cba10 */

undefined4 FUN_100cba10(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  
  if ((short)param_2[0x14] == 0) {
    uVar2 = 0x40;
    do {
      uVar4 = FUN_1013426c(param_1,uVar2);
      if ((int)uVar4 == 0) {
        *(short *)(param_2 + 0x14) = (short)((ulonglong)uVar4 >> 0x20);
        goto LAB_100cba2c;
      }
      uVar2 = (int)((ulonglong)uVar4 >> 0x20) + 1U & 0xffff;
    } while (uVar2 != 0x80);
    FUN_100a5b78(DAT_100cbac0 | (DAT_100cbabc - DAT_100cbab8) * 0x20 & 0xff00U,DAT_100cbac8,
                 DAT_100cbac4);
    uVar1 = 0;
  }
  else {
LAB_100cba2c:
    thunk_FUN_101146e4(param_2 + 4,DAT_100cbab0);
    param_2[0x10] = 0;
    param_2[2] = 0;
    piVar3 = param_2 + 2;
    if (*(undefined4 **)(param_1 + 0x58) == (undefined4 *)0x0) {
      *(int **)(param_1 + 0x54) = piVar3;
      *(int **)(param_1 + 0x58) = piVar3;
    }
    else {
      **(undefined4 **)(param_1 + 0x58) = piVar3;
      *(int **)(param_1 + 0x58) = piVar3;
    }
    *param_2 = param_1;
    param_2[3] = param_3;
    if ((ushort)((short)param_2[0x14] - 0x40U) < 0x40) {
      FUN_10114438(param_2 + 0x28,DAT_100cbab4);
      FUN_1013c954(param_2 + 0x2c);
      uVar1 = 1;
      *(undefined1 *)(param_2 + 0x11) = 1;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

