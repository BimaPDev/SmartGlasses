/* FUN_2c66df3c @ 0x2c66df3c */

void FUN_2c66df3c(undefined4 *param_1,undefined1 *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined1 auStack_24 [16];
  
  if (param_2 == (undefined1 *)0x0) {
    param_2 = auStack_24;
    param_3 = 0;
  }
  iVar1 = (**(code **)(DAT_2c66df64 + 0xe0))(param_1,param_2,param_3);
  if (iVar1 == -1) {
    *param_4 = 0;
    *param_1 = 0x8a;
  }
  return;
}

