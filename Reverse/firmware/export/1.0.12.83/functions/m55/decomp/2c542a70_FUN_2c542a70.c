/* FUN_2c542a70 @ 0x2c542a70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c542a70(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  int iStack_14;
  
  iStack_14 = *_LAB_2c542adc;
  puStack_2c = auStack_24;
  FUN_2c542800(&puStack_2c,_DAT_2c542ad8 + -4,_DAT_2c542ad8,0);
  *param_1 = _DAT_2c542ae0;
  param_1[2] = param_1 + 4;
  if (puStack_2c == auStack_24) {
    uVar2 = puStack_2c[1];
    uVar3 = puStack_2c[2];
    uVar4 = puStack_2c[3];
    param_1[4] = *puStack_2c;
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
  }
  else {
    param_1[2] = puStack_2c;
    param_1[4] = auStack_24[0];
  }
  *param_1 = _DAT_2c542ae4;
  piVar1 = _LAB_2c542adc;
  param_1[3] = uStack_28;
  if (*piVar1 == iStack_14) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

