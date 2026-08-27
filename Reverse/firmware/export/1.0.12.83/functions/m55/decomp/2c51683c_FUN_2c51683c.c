/* FUN_2c51683c @ 0x2c51683c */

void FUN_2c51683c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined8 uVar2;
  
  iVar1 = FUN_2c602618(param_2);
  if (iVar1 != 0xd2) {
    return;
  }
  iVar1 = FUN_2c606bb4(*param_1,0x80);
  if (((iVar1 == 0) && (uVar2 = FUN_2c606bb4(*param_1,0x10), (int)uVar2 != 0)) &&
     (*(char *)(param_1 + 0x17) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x5d) = 1;
    *(undefined1 *)(param_1 + 0x17) = 1;
    FUN_2c62e8ec(param_1 + 3,(int)((ulonglong)uVar2 >> 0x20),extraout_r2,extraout_r3);
    return;
  }
  return;
}

