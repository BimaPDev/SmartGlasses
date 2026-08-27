/* FUN_2c5167b8 @ 0x2c5167b8 */

void FUN_2c5167b8(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined8 uVar2;
  
  iVar1 = FUN_2c606bb4(*param_1,0x80);
  if (((iVar1 == 0) && (uVar2 = FUN_2c606bb4(*param_1,0x10), (int)uVar2 != 0)) &&
     (*(char *)(param_1 + 0x17) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x5d) = param_2;
    *(undefined1 *)(param_1 + 0x17) = 1;
    FUN_2c62e8ec(param_1 + 3,(int)((ulonglong)uVar2 >> 0x20),extraout_r2,param_4);
    return;
  }
  return;
}

