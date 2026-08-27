/* FUN_2c585734 @ 0x2c585734 */

undefined4 * FUN_2c585734(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *local_30;
  int local_2c;
  
  local_2c = *DAT_2c5858b4;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5858c0,0xfb,DAT_2c5858c4,DAT_2c5858d0,DAT_2c5858b8);
  }
  iVar2 = FUN_2c48e3b8(param_3,param_2,param_3,0);
  if (iVar2 == 0) {
    uVar6 = *(undefined4 *)(DAT_2c5858c8 + 4);
    *param_1 = DAT_2c5858cc;
    param_1[1] = uVar6;
    if (*DAT_2c5858b4 == local_2c) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  FUN_2c5846e8(param_2);
  iVar3 = FUN_2c48e85c(iVar2);
  if (iVar3 == 0) {
LAB_2c585762:
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5858c0,0x11d,DAT_2c5858c4,DAT_2c5858bc,DAT_2c5858b8);
  }
  iVar3 = FUN_2c48e3f0(iVar2);
  piVar1 = DAT_2c5858e0;
  if (0 < iVar3) {
    iVar7 = 0;
    do {
      iVar5 = FUN_2c48e408(iVar2,iVar7);
      if (iVar5 == 0) goto LAB_2c585762;
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar4 = (undefined4 *)FUN_2c47245c(0,0x60);
      FUN_2c674268(puVar4,0,0x60);
      *puVar4 = DAT_2c5858d4;
      *(undefined1 *)(puVar4 + 3) = 0;
      *(undefined1 *)(puVar4 + 10) = 0;
      *(undefined1 *)(puVar4 + 0x14) = 0;
      puVar4[1] = puVar4 + 3;
      puVar4[8] = puVar4 + 10;
      puVar4[0x12] = puVar4 + 0x14;
      local_30 = puVar4;
      iVar5 = FUN_2c548c08(iVar5,puVar4);
      if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c62c82c(4,DAT_2c5858c0,0x10e,DAT_2c5858c4,DAT_2c5858dc);
      }
      puVar4 = *(undefined4 **)(param_2 + 8);
      if (puVar4 == *(undefined4 **)(param_2 + 0xc)) {
        FUN_2c584908(param_2 + 4,puVar4,&local_30);
      }
      else {
        *puVar4 = local_30;
        *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar3 != iVar7);
  }
  FUN_2c48dea0(iVar2);
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5858c0,0x118,DAT_2c5858c4,DAT_2c5858d8,DAT_2c5858b8,
               *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2);
}

