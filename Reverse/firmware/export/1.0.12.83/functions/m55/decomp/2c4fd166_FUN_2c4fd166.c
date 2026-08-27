/* FUN_2c4fd166 @ 0x2c4fd166 */

int FUN_2c4fd166(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar4;
  undefined1 *in_stack_00000034;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_10;
  
  *param_1 = unaff_r4;
  param_1[1] = unaff_r6;
  param_1 = param_1 + 2;
  bVar4 = unaff_r4 < 0;
  do {
    iVar1 = unaff_r4;
    if (bVar4) {
                    /* WARNING: Subroutine does not return */
      TRACE(param_1,0x17);
    }
    iVar2 = unaff_r7 << 1;
    if (iVar1 == 0x13) {
LAB_2c4fd270:
                    /* WARNING: Subroutine does not return */
      TRACE(iVar2,param_2,DAT_2c4fd294,param_4);
    }
    iVar2 = iVar1 + -0x26;
    if (param_4 != 0) {
      if (iVar2 == DAT_2c4fd2a0) {
        iVar2 = -0x55555556;
      }
      iVar1 = FUN_2c4fcc2c(2,iVar2);
      if (iVar1 == 0) {
        param_5 = DAT_2c4fd2a4;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x23d,DAT_2c4fd294,DAT_2c4fd290);
      }
      unaff_r5 = FUN_2c4fcc2c(1,iVar2);
      if (unaff_r5 == 0) {
        param_2 = 0x241;
        param_5 = DAT_2c4fd2ac;
        iVar2 = 4;
        param_4 = DAT_2c4fd290;
        goto LAB_2c4fd270;
      }
      goto LAB_2c4fd210;
    }
    puVar3 = &stack0x000002a8;
    param_1 = (int *)0x0;
    if (-1 < iVar2) {
      iVar1 = FUN_2c003304(1,param_2,puVar3,0);
      param_2 = uRam2c4fd19c;
      if (iVar1 == 0) {
        iVar1 = FUN_2c674748(1);
        if (iVar1 != 0) {
          param_5 = uRam2c4fd1a0;
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x221,uRam2c4fd174,uRam2c4fd170);
        }
        param_5 = uRam2c4fd188;
        iVar1 = FUN_2c003304(0,iVar2,0,0);
        if (iVar1 == 0) {
          param_5 = uRam2c4fd18c;
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x22a,uRam2c4fd174,uRam2c4fd170);
        }
        param_5 = uRam2c4fd198;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x227,uRam2c4fd174,uRam2c4fd170);
      }
      goto LAB_2c4fd138;
    }
    bVar4 = true;
    unaff_r4 = iVar1 + -0x39;
  } while (iVar1 + -0x39 < 0);
  if (iVar1 + -0x4c < 0) {
LAB_2c4fd138:
    param_5 = param_2;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x21c,uRam2c4fd174,uRam2c4fd170);
  }
  if (iVar1 + -0x5f < 0) {
    iVar2 = 0;
    if (iVar1 + -0x72 < 0) {
      if (-1 < iVar1 + -0x85) goto LAB_2c4fd214;
      iStack_10 = iVar1 + -0x98;
      register0x00000054 = (BADSPACEBASE *)&local_48;
      param_2 = 0x22f;
      local_48 = DAT_2c4fd288;
      uStack_44 = DAT_2c4fd28c;
      puVar3 = DAT_2c4fd294;
      iVar2 = DAT_2c4fd290;
    }
    *(int *)((int)register0x00000054 + 0x34) = *DAT_2c4fd298;
                    /* WARNING: Subroutine does not return */
    TRACE(4,param_2,puVar3,iVar2);
  }
LAB_2c4fd210:
  puVar3 = (undefined1 *)*DAT_2c4fd298;
LAB_2c4fd214:
  if (puVar3 == in_stack_00000034) {
    return unaff_r5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

