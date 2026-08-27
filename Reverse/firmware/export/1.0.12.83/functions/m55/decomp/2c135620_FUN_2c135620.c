/* FUN_2c135620 @ 0x2c135620 */

void FUN_2c135620(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 uStack_4;
  
  uVar1 = *DAT_2c135674;
  uStack_4 = param_4;
  uVar2 = FUN_2c142878(param_1,param_2,param_3,&uStack_4,&uStack_4);
  if ((int)(uint)uVar2 < 0) {
    uVar2 = uVar2 & 0xffffffff00000000;
  }
  else if (param_2 <= (uint)uVar2) {
    if (param_2 == 0) {
      param_2 = 1;
    }
    uVar2 = CONCAT44(param_2,param_2 - 1);
  }
  if ((*DAT_2c135674 ^ uVar1) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c13424c((int)uVar2,(int)(uVar2 >> 0x20),*DAT_2c135674 ^ uVar1,0);
}

