/* FUN_2c556904 @ 0x2c556904 */

int FUN_2c556904(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint local_34 [4];
  int local_24;
  
  piVar1 = DAT_2c556c10;
  local_24 = *DAT_2c556c0c;
  if (param_1 != 0) {
    if (*DAT_2c556c10 == 0) {
      FUN_2c4723c4();
      *piVar1 = 1;
    }
    puVar2 = (undefined4 *)FUN_2c47245c(0,0x34);
    FUN_2c674268(puVar2,0,0x34);
    uVar5 = DAT_2c556c14;
    *puVar2 = DAT_2c556c14;
    puVar2[1] = puVar2 + 3;
    *(undefined1 *)(puVar2 + 3) = 0;
    *(undefined1 *)(puVar2 + 9) = 0;
    puVar2[7] = puVar2 + 9;
    puVar11 = *(undefined4 **)(param_2 + 4);
    *(undefined4 **)(param_2 + 4) = puVar2;
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = uVar5;
      if ((undefined4 *)puVar11[7] != puVar11 + 9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680();
      }
      if ((undefined4 *)puVar11[1] != puVar11 + 3) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0,puVar11);
    }
    iVar3 = FUN_2c48e42c(param_1,DAT_2c556c18);
    iVar12 = *(int *)(param_2 + 4);
    if (((iVar3 == 0) || (iVar4 = FUN_2c54f0ec(iVar3,DAT_2c556c1c,iVar12 + 4,1), iVar4 < 0)) ||
       (iVar3 = FUN_2c54f0ec(iVar3,DAT_2c556c20,iVar12 + 0x1c,1), iVar3 < 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c556c98,0x17,DAT_2c556c90,DAT_2c556c94,DAT_2c556c90);
    }
    uVar5 = FUN_2c48e42c(param_1,DAT_2c556c24);
    iVar3 = FUN_2c48e86c();
    if (iVar3 != 0) {
      puVar6 = (undefined1 *)FUN_2c48e3e8(uVar5);
      local_3c = local_34;
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c658674(DAT_2c556c9c);
      }
      uVar7 = FUN_2c66c4ec();
      local_40 = uVar7;
      if (uVar7 < 0x10) {
        puVar8 = local_34;
        if (uVar7 == 1) {
          local_34[0] = CONCAT31(local_34[0]._1_3_,*puVar6);
        }
        else if (uVar7 != 0) goto LAB_2c556bfe;
      }
      else {
        local_3c = (uint *)FUN_2c5567ec(&local_40,0);
        local_34[0] = local_40;
        puVar8 = local_3c;
LAB_2c556bfe:
        FUN_2c674668(puVar8,puVar6,uVar7);
        puVar8 = local_3c;
      }
      uVar7 = local_40;
      *(undefined1 *)((int)puVar8 + local_40) = 0;
      puVar10 = *(undefined1 **)(param_2 + 8);
      if (puVar10 == (undefined1 *)(param_2 + 0x10)) {
        uVar9 = 0xf;
      }
      else {
        uVar9 = *(uint *)(param_2 + 0x10);
      }
      local_38 = local_40;
      if (uVar9 < local_40) {
        puVar10 = (undefined1 *)FUN_2c5567ec(&local_40);
        if ((undefined1 *)(param_2 + 0x10) != *(undefined1 **)(param_2 + 8)) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        *(undefined1 **)(param_2 + 8) = puVar10;
        *(uint *)(param_2 + 0x10) = local_40;
      }
      if (uVar7 != 0) {
        if (uVar7 == 1) {
          *puVar10 = (char)*local_3c;
          puVar10 = *(undefined1 **)(param_2 + 8);
        }
        else {
          FUN_2c674668(puVar10,local_3c,uVar7);
          puVar10 = *(undefined1 **)(param_2 + 8);
        }
      }
      *(uint *)(param_2 + 0xc) = uVar7;
      puVar10[uVar7] = 0;
      FUN_2c48e87c(puVar6);
      if (*piVar1 == 0) {
        FUN_2c4723c4();
        *piVar1 = 1;
      }
      puVar2 = (undefined4 *)FUN_2c47245c(0,0x38);
      FUN_2c674268(puVar2,0,0x38);
      uVar5 = DAT_2c556c28;
      *puVar2 = DAT_2c556c28;
      puVar2[1] = puVar2 + 3;
      *(undefined1 *)(puVar2 + 3) = 0;
      *(undefined1 *)(puVar2 + 9) = 0;
      puVar2[7] = puVar2 + 9;
      puVar11 = *(undefined4 **)(param_2 + 0x20);
      *(undefined4 **)(param_2 + 0x20) = puVar2;
      if (puVar11 != (undefined4 *)0x0) {
        *puVar11 = uVar5;
        if ((undefined4 *)puVar11[7] != puVar11 + 9) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680();
        }
        if ((undefined4 *)puVar11[1] != puVar11 + 3) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0,puVar11);
      }
      uVar5 = FUN_2c48e42c(param_1,DAT_2c556c2c);
      iVar3 = FUN_2c55685c(uVar5,*(undefined4 *)(param_2 + 0x20));
      if (iVar3 < 0) {
LAB_2c556bd6:
        iVar3 = -1;
      }
      else {
        if (*piVar1 == 0) {
          FUN_2c4723c4();
          *piVar1 = 1;
        }
        puVar2 = (undefined4 *)FUN_2c47245c(0,0x4c);
        FUN_2c674268(puVar2,0,0x4c);
        uVar5 = DAT_2c556c30;
        *puVar2 = DAT_2c556c30;
        puVar2[1] = puVar2 + 3;
        *(undefined1 *)(puVar2 + 3) = 0;
        puVar2[7] = puVar2 + 9;
        *(undefined1 *)(puVar2 + 9) = 0;
        *(undefined1 *)(puVar2 + 0xf) = 0;
        puVar2[0xd] = puVar2 + 0xf;
        puVar11 = *(undefined4 **)(param_2 + 0x24);
        *(undefined4 **)(param_2 + 0x24) = puVar2;
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = uVar5;
          if ((undefined4 *)puVar11[0xd] != puVar11 + 0xf) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680();
          }
          if ((undefined4 *)puVar11[7] != puVar11 + 9) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          if ((undefined4 *)puVar11[1] != puVar11 + 3) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0,puVar11);
        }
        uVar5 = FUN_2c48e42c(param_1,DAT_2c556c34);
        iVar3 = FUN_2c5568b0(uVar5,*(undefined4 *)(param_2 + 0x24));
        if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c62c82c(4,DAT_2c556c98,0x29,DAT_2c556c90,DAT_2c556c94,DAT_2c556c90);
        }
        iVar3 = FUN_2c54f0ec(param_1,DAT_2c556c38,param_2 + 0x28,1);
        if (iVar3 < 0) goto LAB_2c556bd6;
        iVar3 = FUN_2c54ee98(param_1,DAT_2c556c3c,param_2 + 0x40,1);
        iVar3 = iVar3 >> 0x1f;
      }
      if (local_3c != local_34) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      goto LAB_2c556b94;
    }
  }
  iVar3 = -1;
LAB_2c556b94:
  if (*DAT_2c556c0c == local_24) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

