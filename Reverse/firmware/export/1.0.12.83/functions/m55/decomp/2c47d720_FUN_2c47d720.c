/* FUN_2c47d720 @ 0x2c47d720 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47d720(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int unaff_r4;
  int unaff_r5;
  int *piVar3;
  undefined1 auStack_a0 [124];
  int iStack_24;
  int iStack_10;
  int iStack_c;
  
  piVar3 = &iStack_10;
  uVar1 = 0;
  iStack_10 = param_3;
  iStack_c = param_4;
  if (unaff_r4 == 0) {
LAB_2c47d750:
    param_4 = param_4 + uVar1;
    piVar3[0xd] = param_2;
    piVar3[0x14] = uVar1;
    param_2 = 0;
    uVar1 = 0;
    piVar3[0xc] = param_4;
    *piVar3 = 0;
    param_4 = 0;
    piVar3[0x1c] = (int)(piVar3 + 0x1e);
    param_3 = unaff_r5 + 0x1a4;
    piVar3[0x1e] = 0;
    piVar3[0x16] = 0;
    piVar3[0x15] = 0;
    piVar3[0x10] = 0;
  }
  else {
    uVar1 = (uint)*(ushort *)(unaff_r4 + 2);
    unaff_r5 = unaff_r5 + -0x62;
    if (unaff_r4 != 0) {
      piVar3 = (int *)auStack_a0;
      iStack_24 = *_LAB_2c47d804;
      param_4 = *(int *)(_LAB_2c47d808 + 0x230);
      unaff_r5 = _LAB_2c47d808;
      if (param_4 == 0) {
        if (*_LAB_2c47d804 == iStack_24) {
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_2c6741f4)(0x711,_LAB_2c47d810,_DAT_2c47d80c,0);
          return;
        }
        goto LAB_2c47d800;
      }
      goto LAB_2c47d750;
    }
  }
  piVar3[0x1a] = uVar1;
  piVar3[0x1b] = param_2;
  piVar3[0x12] = uVar1;
  piVar3[0x13] = param_2;
  piVar3[0xe] = uVar1;
  piVar3[0xf] = param_2;
  piVar3[7] = 0;
  piVar3[8] = 0;
  piVar3[10] = 0x5000;
  piVar3[0xb] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[0x17] = 0;
  piVar3[0x18] = 0;
  iVar2 = FUN_2c473e44(6,unaff_r5 + 0xc,param_3,param_4);
  if (iVar2 != 0) {
    piVar3[1] = 0;
    *piVar3 = 1;
    FUN_2c47cf18(iVar2,piVar3[0x1e],5);
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(7,iVar2);
  }
  FUN_2c6741e8(0x711,_LAB_2c47d814,_DAT_2c47d80c);
  if (*_LAB_2c47d804 == piVar3[0x1f]) {
    return;
  }
LAB_2c47d800:
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

