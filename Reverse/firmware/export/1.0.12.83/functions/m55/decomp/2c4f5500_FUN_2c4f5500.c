/* FUN_2c4f5500 @ 0x2c4f5500 */

undefined4 FUN_2c4f5500(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  short *psVar10;
  undefined8 uVar11;
  int local_3c;
  int local_38;
  short *local_34;
  uint local_2c;
  
  local_2c = *DAT_2c4f5684;
  uVar6 = 0;
  if (*DAT_2c4f5680 == '\0') {
    uVar5 = 0;
  }
  else {
    if (0x400 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4f56c4,DAT_2c4f56c0);
    }
    if (param_3 == 0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_2c4c2cd8(*DAT_2c4f568c,param_3);
      if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4f56bc,DAT_2c4f56b8,param_3);
      }
      FUN_2c674668(local_3c,param_2,param_3);
    }
    puVar3 = DAT_2c4f56cc;
    puVar2 = DAT_2c4f56c8;
    FUN_2c644044(*DAT_2c4f56c8,0xffffffff);
    FUN_2c6471b4(*DAT_2c4f5688,0xffffffff);
    puVar4 = (undefined2 *)FUN_2c6442f0(*puVar3,0);
    iVar1 = DAT_2c4f5694;
    if (puVar4 == (undefined2 *)0x0) {
      FUN_2c6741e8(0x1290,DAT_2c4f5690);
      uVar5 = DAT_2c4f56d4;
      uVar6 = DAT_2c4f56d0;
      uVar9 = (uint)(iVar1 - (int)DAT_2c4f5698) >> 5;
      FUN_2c644324(&local_38,*puVar3,0);
      psVar10 = (short *)0x0;
      if (local_38 == 0x20) {
        psVar10 = local_34;
      }
      if (uVar9 != 0) {
        uVar7 = 0;
        psVar8 = DAT_2c4f5698;
        do {
          if (*psVar8 == *psVar10) {
            if ((*(int *)(psVar10 + 2) != 0) && (0xc < (ushort)psVar10[1])) {
                    /* WARNING: Subroutine does not return */
              TRACE(4,0x1c3,uVar5,uVar6,DAT_2c4f56ac,*(undefined4 *)(psVar8 + 2),
                    *(undefined1 *)(*(int *)(psVar10 + 2) + 0xd));
            }
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x1c6,uVar5,uVar6,DAT_2c4f569c,*(undefined4 *)(psVar8 + 2));
          }
          uVar7 = uVar7 + 1;
          psVar8 = psVar8 + 0x10;
        } while (uVar9 != uVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4f56b4,DAT_2c4f56b0);
    }
    uVar6 = *puVar3;
    *puVar4 = (short)param_1;
    puVar4[1] = (short)param_3;
    *(int *)(puVar4 + 2) = local_3c;
    uVar5 = FUN_2c6442fc(uVar6,puVar4);
    uVar11 = FUN_2c644080(*puVar2);
    uVar6 = (undefined4)((ulonglong)uVar11 >> 0x20);
    param_1 = (undefined4)uVar11;
  }
  if ((*DAT_2c4f5684 ^ local_2c) == 0) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(param_1,uVar6,*DAT_2c4f5684 ^ local_2c,0);
}

