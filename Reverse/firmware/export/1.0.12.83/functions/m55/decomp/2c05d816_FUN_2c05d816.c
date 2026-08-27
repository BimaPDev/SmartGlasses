/* FUN_2c05d816 @ 0x2c05d816 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c05d816(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_r5;
  
  uVar1 = *param_1;
  iVar2 = param_1[1];
  *param_4 = param_1 + 2;
  param_4[1] = uVar1;
  param_4[2] = 0x3e00;
  param_4[3] = param_4;
  param_4[4] = unaff_r5 << 0xc;
                    /* WARNING: Subroutine does not return */
  TRACE(0,0x380,_LAB_2c49b2bc,(int)(param_1 + 2) * 0x400 - iVar2,param_1);
}

