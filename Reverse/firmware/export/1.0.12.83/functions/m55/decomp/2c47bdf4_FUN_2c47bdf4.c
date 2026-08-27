/* FUN_2c47bdf4 @ 0x2c47bdf4 */

/* WARNING: Possible PIC construction at 0x2c47be9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c47bfac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c47c078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c47c13e: Changing call to branch */
/* WARNING: Possible PIC construction at 0x2c47c162: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c47c142) */
/* WARNING: Removing unreachable block (ram,0x2c47c198) */
/* WARNING: Removing unreachable block (ram,0x2c47c148) */
/* WARNING: Removing unreachable block (ram,0x2c47c07c) */
/* WARNING: Removing unreachable block (ram,0x2c47bfb0) */
/* WARNING: Removing unreachable block (ram,0x2c47c096) */
/* WARNING: Removing unreachable block (ram,0x2c47bfb8) */
/* WARNING: Removing unreachable block (ram,0x2c47bea0) */
/* WARNING: Removing unreachable block (ram,0x2c47bee8) */
/* WARNING: Removing unreachable block (ram,0x2c47bea6) */
/* WARNING: Removing unreachable block (ram,0x2c47c166) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47bdf4(int param_1,uint param_2)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  uint uVar9;
  undefined4 extraout_r3_01;
  undefined4 extraout_r3_02;
  uint unaff_r4;
  uint unaff_r5;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 unaff_lr;
  uint *puVar12;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  pcVar3 = _LAB_2c47c114;
  uVar8 = _LAB_2c47c0fc;
  puVar12 = _LAB_2c47c0d8;
  puVar11 = &uStack_38;
  if (*_LAB_2c47c114 != '\0') {
    uStack_38 = _LAB_2c47c0dc;
    uStack_34 = _LAB_2c47c0fc;
    uStack_30 = param_2;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x58,_LAB_2c47c0e4,_LAB_2c47c0e0);
  }
  if (param_1 == 0) {
    return;
  }
  uVar10 = _LAB_2c47c0d8[2];
  uStack_30 = uVar10;
  if (uVar10 == 0) {
    if (_LAB_2c47c0d8[1] != 0) {
LAB_2c47be32:
      uStack_30 = uVar10;
      if (*pcVar3 == '\0') {
        return;
      }
      goto LAB_2c47be3a;
    }
    iVar4 = func_0x2c47bcb4(param_1);
    iVar5 = _LAB_2c47c118;
    uVar6 = _LAB_2c47c0f8;
    if ((8 < param_2) && (iVar4 != 0)) {
LAB_2c47bed6:
      uStack_30 = puVar12[2];
      if (uStack_30 != 0) goto LAB_2c47bede;
      if ((puVar12[1] != 0) || (param_2 < 4)) goto LAB_2c47be32;
      iVar5 = func_0x2c47bcb4(param_1);
      if (iVar5 == 0) {
        uStack_38 = _LAB_2c47c270;
        uStack_34 = DAT_2c47c254;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x69,DAT_2c47c260,DAT_2c47c25c);
      }
      uVar10 = *(uint *)(param_1 + 4);
      cVar1 = *pcVar3;
      uStack_30 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                  uVar10 >> 0x18;
      puVar12[2] = uStack_30;
      if (cVar1 != '\0') {
        uStack_38 = _LAB_2c47c108;
        uStack_34 = uVar8;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x6e,_LAB_2c47c0e4,_LAB_2c47c0e0);
      }
      uVar6 = _LAB_2c47c268;
      uVar7 = DAT_2c47c254;
      if (uStack_30 < 0x19001) {
        uVar10 = FUN_2c47245c(3);
        puVar12[1] = uVar10;
        if (uVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*DAT_2c6741f4)(0x711,_LAB_2c47c280,DAT_2c47c254);
          return;
        }
        uVar9 = puVar12[2] + 8 & 0xffff;
        if (uVar9 < param_2) {
          FUN_2c674668(uVar10,param_1 + 8);
          *puVar12 = puVar12[2];
          unaff_lr = 0x2c47bfb1;
          unaff_r4 = param_2;
          unaff_r5 = uVar9;
          register0x00000054 = (BADSPACEBASE *)&uStack_38;
        }
        else {
          param_2 = param_2 - 8;
          FUN_2c674668(uVar10,param_1 + 8,param_2);
          cVar1 = *pcVar3;
          *puVar12 = param_2;
          if (cVar1 != '\0') {
            uStack_38 = _LAB_2c47c27c;
            uStack_34 = DAT_2c47c254;
            uStack_30 = param_2;
                    /* WARNING: Subroutine does not return */
            TRACE(4,0x82,DAT_2c47c260,DAT_2c47c25c);
          }
        }
        goto SUB_2c47bd78;
      }
      goto LAB_2c47bfc4;
    }
    uVar9 = (uint)(byte)puVar12[6];
    if (6 < uVar9 - 1) {
      if ((param_2 < 9) && (uVar9 == 0)) {
        *(char *)(puVar12 + 6) = (char)param_2;
        FUN_2c674668(uVar6,param_1,param_2);
LAB_2c47bf38:
        uStack_38 = _LAB_2c47c100;
        uStack_34 = _LAB_2c47c0fc;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x61,_LAB_2c47c0e4,_LAB_2c47c0e0);
      }
      goto LAB_2c47bed6;
    }
    if (*(char *)((int)puVar12 + 0x19) != -0x16) goto LAB_2c47bed6;
    unaff_r5 = 8 - uVar9 & 0xff;
    FUN_2c674668(_LAB_2c47c118 + (uVar9 + 1 & 0xff),param_1,unaff_r5);
    iVar4 = func_0x2c47bcb4(iVar5 + 1);
    if (iVar4 == 0) {
      uStack_38 = _LAB_2c47c270;
      uStack_34 = _LAB_2c47c264;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xca,DAT_2c47c260,DAT_2c47c25c);
    }
    uVar10 = *(uint *)((int)puVar12 + 0x1d);
    cVar1 = *pcVar3;
    uStack_30 = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
                uVar10 >> 0x18;
    puVar12[2] = uStack_30;
    if (cVar1 != '\0') {
      uStack_34 = _LAB_2c47c264;
      uStack_38 = _LAB_2c47c26c;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0xce,DAT_2c47c260,DAT_2c47c25c);
    }
    puVar12[6] = 0;
    *(undefined4 *)(iVar5 + 4) = 0;
    *(undefined1 *)(iVar5 + 8) = 0;
    if (0x19000 < uStack_30) {
      FUN_2c6741e8(0x711,_LAB_2c47c268,_LAB_2c47c264);
      unaff_lr = 0x2c47c167;
      uVar8 = extraout_r3_02;
      goto SUB_2c47bd10;
    }
    uVar10 = FUN_2c47245c(3);
    puVar12[1] = uVar10;
    if (uVar10 == 0) {
      FUN_2c6741e8(0x711,_LAB_2c47c280,_LAB_2c47c264);
      goto LAB_2c47bf38;
    }
    if ((unaff_r5 + puVar12[2] & 0xffff) < param_2) {
      FUN_2c674668(uVar10,param_1 + unaff_r5);
      *puVar12 = puVar12[2];
      unaff_lr = 0x2c47c143;
      unaff_r4 = param_2;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
    }
    else {
      unaff_r4 = param_2 - unaff_r5;
      FUN_2c674668(uVar10,param_1 + unaff_r5,unaff_r4);
      cVar1 = *pcVar3;
      *puVar12 = unaff_r4;
      if (cVar1 != '\0') {
        uStack_38 = _LAB_2c47c27c;
        uStack_34 = _LAB_2c47c264;
        uStack_30 = unaff_r4;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xe5,DAT_2c47c260,DAT_2c47c25c);
      }
      unaff_lr = 0x2c47c07d;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
    }
  }
  else {
LAB_2c47bede:
    if (*pcVar3 != '\0') {
LAB_2c47be3a:
      uStack_2c = *puVar12;
      uStack_38 = _LAB_2c47c0e8;
      uStack_34 = uVar8;
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x91,_LAB_2c47c0e4,_LAB_2c47c0e0);
    }
    if (puVar12[2] <= *puVar12) {
      return;
    }
    FUN_2c6448b4(*_LAB_2c47c0ec,3000);
    uVar10 = puVar12[1];
    uVar6 = _LAB_2c47c104;
    uVar7 = _LAB_2c47c0fc;
    if (uVar10 == 0) {
LAB_2c47bfc4:
      FUN_2c6741e8(0x711,uVar6,uVar7);
      uVar8 = extraout_r3_01;
      param_2 = unaff_r4;
      puVar11 = (undefined4 *)register0x00000054;
      goto SUB_2c47bd10;
    }
    uVar9 = *puVar12;
    if (puVar12[2] - uVar9 < param_2) {
      FUN_2c674668(uVar9 + uVar10,param_1);
      uStack_30 = puVar12[2];
      cVar1 = *pcVar3;
      *puVar12 = uStack_30;
      if (cVar1 != '\0') {
        uStack_38 = _LAB_2c47c0f4;
        uStack_34 = uVar8;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xa1,_LAB_2c47c0e4,_LAB_2c47c0e0);
      }
      unaff_lr = 0x2c47bea1;
      unaff_r4 = param_2;
      unaff_r5 = uStack_30 & 0xffff;
      register0x00000054 = (BADSPACEBASE *)&uStack_38;
    }
    else {
      FUN_2c674668(uVar9 + uVar10,param_1,param_2);
      cVar1 = *pcVar3;
      uStack_30 = param_2 + *puVar12;
      *puVar12 = uStack_30;
      if (cVar1 != '\0') {
        uStack_38 = DAT_2c47c258;
        uStack_34 = DAT_2c47c254;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0xac,DAT_2c47c260,DAT_2c47c25c);
      }
    }
  }
SUB_2c47bd78:
  *(undefined4 *)((int)register0x00000054 + -4) = unaff_lr;
  puVar12 = (uint *)((int)register0x00000054 + -8);
  *puVar12 = unaff_r4;
  puVar11 = (undefined4 *)register0x00000054;
  if (*DAT_2c47bdd8 <= DAT_2c47bdd8[2]) {
    if (*DAT_2c47bdd8 == DAT_2c47bdd8[2]) {
      if (*DAT_2c47bddc != '\0') {
        *(undefined4 *)((int)register0x00000054 + -0x10) = DAT_2c47bde8;
        *(undefined4 *)((int)register0x00000054 + -0xc) = DAT_2c47bde0;
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x139,DAT_2c47bdf0,DAT_2c47bdec);
      }
      if (DAT_2c47bdd8[1] != 0) {
        FUN_2c47d590(DAT_2c47bdd8[1],(short)DAT_2c47bdd8[2]);
        unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
        uVar8 = extraout_r3;
        param_2 = *puVar12;
        goto SUB_2c47bd10;
      }
    }
    return;
  }
  FUN_2c6741e8(0x711,DAT_2c47bde4,DAT_2c47bde0);
  unaff_lr = *(undefined4 *)((int)register0x00000054 + -4);
  uVar8 = extraout_r3_00;
  param_2 = *puVar12;
SUB_2c47bd10:
  puVar2 = DAT_2c47bd3c;
  *(undefined4 *)((int)puVar11 + -4) = unaff_lr;
  *(uint *)((int)puVar11 + -8) = unaff_r5;
  *(uint *)((int)puVar11 + -0xc) = param_2;
  *(undefined4 *)((int)puVar11 + -0x10) = uVar8;
  iVar5 = DAT_2c47bd3c[1];
  *DAT_2c47bd3c = 0;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 8) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(3);
  }
  FUN_2c6448f0(*DAT_2c47bd40);
  return;
}

