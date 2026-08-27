/* FUN_2c545f76 @ 0x2c545f76 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c545f76(undefined4 param_1,undefined4 param_2,undefined1 param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *in_r12;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  uVar2 = *param_4;
  iVar3 = *_LAB_2c545fdc;
  uStack_18 = CONCAT22(CONCAT11(uStack_18._3_1_,param_3),(short)param_4[1]);
  in_r12[2] = in_r12 + 4;
  in_r12[4] = uVar2;
  in_r12[6] = uStack_14;
  in_r12[7] = uStack_10;
  uVar2 = _DAT_2c545fe0;
  piVar1 = _LAB_2c545fdc;
  in_r12[5] = uStack_18;
  in_r12[3] = 6;
  *in_r12 = uVar2;
  if (*piVar1 == iVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

