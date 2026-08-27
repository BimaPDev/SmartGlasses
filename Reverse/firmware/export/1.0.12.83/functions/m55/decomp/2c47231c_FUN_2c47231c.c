/* FUN_2c47231c @ 0x2c47231c */

void FUN_2c47231c(undefined4 param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_2c473450(param_1,param_4);
  iVar3 = param_2 + param_3 * 0xc;
  uVar2 = *(uint *)(iVar3 + 0x1c);
  if (uVar2 < uVar1) {
    uVar4 = DAT_2c472394;
    if (param_3 < 0xc) {
      uVar4 = *(undefined4 *)(DAT_2c472384 + param_3 * 4);
    }
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x334,DAT_2c472388,DAT_2c472390,DAT_2c47238c,param_4,uVar2,uVar1,uVar4);
  }
  *(uint *)(iVar3 + 0x1c) = uVar2 - uVar1;
  param_2 = param_2 + param_3 * 0xc;
  *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + -1;
  return;
}

