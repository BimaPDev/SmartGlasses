/* FUN_2c544984 @ 0x2c544984 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c544984(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [4];
  int iStack_14;
  
  iStack_14 = *_LAB_2c5449f0;
  puStack_2c = auStack_24;
  FUN_2c5447f0(&puStack_2c,_LAB_2c5449ec + -7,_LAB_2c5449ec,0);
  *param_1 = _DAT_2c5449f4;
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
  *param_1 = _DAT_2c5449f8;
  piVar1 = _LAB_2c5449f0;
  param_1[3] = uStack_28;
  if (*piVar1 == iStack_14) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

