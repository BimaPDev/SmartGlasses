/* FUN_2c5a49fc @ 0x2c5a49fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c5a49fc(uint *param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = _LAB_2c5a4a64;
  uVar5 = *param_1;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c658680(_DAT_2c5a4a68);
  }
  if ((param_2 < uVar5) && (uVar4 = param_2 * 2, uVar5 < param_2 << 1)) {
    if (-1 < (int)uVar4) {
      uVar5 = uVar4 + 1;
      *param_1 = uVar4;
      iVar6 = *piVar1;
      goto joined_r0x2c5a4a36;
    }
    uVar5 = 0x80000000;
    *param_1 = 0x7fffffff;
  }
  else {
    uVar5 = uVar5 + 1;
  }
  iVar6 = *_LAB_2c5a4a64;
  piVar1 = _LAB_2c5a4a64;
joined_r0x2c5a4a36:
  if (iVar6 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar2 = DAT_2c472514;
  piVar1 = DAT_2c4724f4;
  if (DAT_2c4724f0 <= uVar5) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x119,DAT_2c472508,DAT_2c472504,DAT_2c472500,DAT_2c4724fc,DAT_2c4724f0);
  }
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x11e,DAT_2c472508,DAT_2c472504,DAT_2c47250c,DAT_2c4724fc);
  }
  if (*DAT_2c4724f4 != 0) {
    FUN_2c644044(*DAT_2c472514,0xffffffff);
    uVar3 = FUN_2c472278(*piVar1,DAT_2c4724f8,0,uVar5);
    FUN_2c644080(*puVar2);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x123,DAT_2c472508,DAT_2c472504,DAT_2c472510,DAT_2c4724fc);
}

