/* FUN_2c541418 @ 0x2c541418 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c541418(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  int iStack_14;
  
  iStack_14 = *DAT_2c541484;
  puStack_2c = auStack_24;
  FUN_2c541188(&puStack_2c,_LAB_2c541480 + -7,_LAB_2c541480,0);
  *param_1 = _DAT_2c541488;
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
  *param_1 = _LAB_2c54148c;
  piVar1 = DAT_2c541484;
  param_1[3] = uStack_28;
  if (*piVar1 == iStack_14) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

