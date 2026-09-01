/* FUN_10138eca @ 0x10138eca */

void FUN_10138eca(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  
  iVar1 = FUN_100e96f4(*(undefined4 *)(param_1 + 0xc),param_2,param_2,param_3);
  if ((iVar1 == 0) && (param_4 != (undefined4 *)0x0)) {
    *param_4 = 0;
    param_4[1] = 0;
  }
  return;
}

