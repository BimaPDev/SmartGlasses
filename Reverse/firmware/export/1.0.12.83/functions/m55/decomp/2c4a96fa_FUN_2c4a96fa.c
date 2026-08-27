/* FUN_2c4a96fa @ 0x2c4a96fa */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a96fa(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*param_4 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x119,DAT_2c4a9794,DAT_2c4a9790,_LAB_2c4a9798);
  }
  uVar1 = param_1 & 0xffff;
  uVar2 = _LAB_2c4a97a0;
  if ((((uVar1 != 8000) && (uVar2 = _LAB_2c4a979c, uVar1 != 16000)) &&
      (uVar2 = _LAB_2c4a97a4, uVar1 != 0xac44)) && (uVar2 = _LAB_2c4a9788, uVar1 != 48000)) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4a97ac,_LAB_2c4a97a8,param_1);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x132,DAT_2c4a9794,DAT_2c4a9790,DAT_2c4a978c,param_1,uVar2);
}

