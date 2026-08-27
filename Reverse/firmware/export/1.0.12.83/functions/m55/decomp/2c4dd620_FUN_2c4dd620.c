/* FUN_2c4dd620 @ 0x2c4dd620 */

void FUN_2c4dd620(undefined4 param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_2c66b450(*param_2,param_3 - *param_2,DAT_2c4dd640,param_4,param_4);
  if (iVar1 + *param_2 < param_3) {
    *param_2 = iVar1 + *param_2;
  }
  else {
    *param_2 = param_3;
  }
  return;
}

