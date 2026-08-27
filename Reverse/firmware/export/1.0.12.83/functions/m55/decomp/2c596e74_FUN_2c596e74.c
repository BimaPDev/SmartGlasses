/* FUN_2c596e74 @ 0x2c596e74 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c596e74(int param_1,undefined4 param_2)

{
  undefined4 **ppuVar1;
  uint **ppuVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  undefined4 *puStack_78;
  uint *puStack_74;
  uint uStack_70;
  uint auStack_6c [3];
  undefined4 uStack_60;
  undefined4 **ppuStack_5c;
  undefined4 **ppuStack_58;
  uint *puStack_54;
  uint *puStack_50;
  undefined4 **ppuStack_4c;
  uint *puStack_48;
  uint *puStack_44;
  uint uStack_40;
  uint auStack_3c [2];
  uint *puStack_34;
  undefined4 *puStack_30;
  undefined4 *apuStack_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uStack_14 = _LAB_2c596ec4;
    uStack_18 = _LAB_2c596ec8;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,_LAB_2c596ecc,0x4aa);
  }
  FUN_2c560950(*(undefined4 *)(param_1 + 4),1);
  iVar3 = FUN_2c569c08(param_2,_LAB_2c596ec0);
  if (iVar3 != 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x20);
  iStack_1c = *DAT_2c548140;
  uStack_18 = unaff_r4;
  uStack_14 = unaff_r5;
  iVar3 = FUN_2c547fb8(iVar4,*(undefined4 *)(iVar4 + 0x14),iVar5,0);
  if (iVar3 != 0) {
    if (*DAT_2c548140 != iStack_1c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    uStack_20 = uStack_14;
    uStack_24 = uStack_18;
    apuStack_2c[0] = (undefined4 *)*DAT_2c54792c;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c547930,0x50,DAT_2c547938,DAT_2c547940);
    }
    iVar3 = *(int *)(iVar4 + 0x14);
    if (iVar3 == iVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c547930,0x54,DAT_2c547938,DAT_2c547944);
    }
    if (iVar3 == 0) {
      puVar9 = *(undefined1 **)(iVar5 + 8);
      puStack_44 = auStack_3c;
      puVar7 = *(undefined4 **)(iVar5 + 0xc);
      if ((puVar9 + (int)puVar7 != (undefined1 *)0x0) && (puVar9 == (undefined1 *)0x0))
      goto LAB_2c547914;
      puStack_78 = puVar7;
      if (puVar7 < (undefined4 *)0x10) {
        if (puVar7 == (undefined4 *)0x1) {
          auStack_3c[0] = CONCAT31(auStack_3c[0]._1_3_,*puVar9);
          goto LAB_2c547844;
        }
        if (puVar7 == (undefined4 *)0x0) goto LAB_2c547844;
      }
      else {
        puStack_44 = (uint *)FUN_2c5470b4(&puStack_78,0,0);
        auStack_3c[0] = (uint)puStack_78;
      }
      FUN_2c674668(puStack_44,puVar9,puVar7);
LAB_2c547844:
      *(undefined1 *)((int)puStack_44 + (int)puStack_78) = 0;
      uStack_40 = (uint)puStack_78;
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c547930,0x5b,DAT_2c547938,DAT_2c547934,DAT_2c54793c,puStack_44);
    }
    puStack_74 = auStack_6c;
    puVar9 = *(undefined1 **)(iVar3 + 8);
    puVar7 = *(undefined4 **)(iVar3 + 0xc);
    if ((puVar9 + (int)puVar7 != (undefined1 *)0x0) && (puVar9 == (undefined1 *)0x0))
    goto LAB_2c547914;
    puStack_78 = puVar7;
    if (puVar7 < (undefined4 *)0x10) {
      if (puVar7 == (undefined4 *)0x1) {
        auStack_6c[0] = CONCAT31(auStack_6c[0]._1_3_,*puVar9);
      }
      else if (puVar7 != (undefined4 *)0x0) goto LAB_2c54788a;
    }
    else {
      puStack_74 = (uint *)FUN_2c5470b4(&puStack_78,0,0);
      auStack_6c[0] = (uint)puStack_78;
LAB_2c54788a:
      FUN_2c674668(puStack_74,puVar9,puVar7);
    }
    puVar6 = puStack_74;
    ppuVar2 = &puStack_54;
    *(undefined1 *)((int)puStack_74 + (int)puStack_78) = 0;
    puVar9 = *(undefined1 **)(iVar5 + 8);
    puVar8 = *(uint **)(iVar5 + 0xc);
    uStack_70 = (uint)puStack_78;
    ppuStack_5c = ppuVar2;
    if ((puVar9 + (int)puVar8 != (undefined1 *)0x0) && (puVar9 == (undefined1 *)0x0)) {
LAB_2c547914:
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(DAT_2c547948);
    }
    if (puVar8 < (uint *)0x10) {
      if (puVar8 == (uint *)0x1) {
        puStack_54 = (uint *)CONCAT31(puStack_54._1_3_,*puVar9);
        goto LAB_2c5477ae;
      }
      puStack_78 = puVar8;
      if (puVar8 == (uint *)0x0) goto LAB_2c5477ae;
    }
    else {
      puStack_78 = puVar8;
      ppuVar2 = (uint **)FUN_2c5470b4(&puStack_78,0);
      puStack_54 = puStack_78;
    }
    ppuStack_5c = ppuVar2;
    FUN_2c674668(ppuVar2,puVar9,puVar8);
    puVar8 = puStack_78;
LAB_2c5477ae:
    puStack_78 = puVar8;
    *(undefined1 *)((int)ppuStack_5c + (int)puStack_78) = 0;
    ppuStack_58 = (undefined4 **)puStack_78;
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c547930,0x58,DAT_2c547938,DAT_2c547934,puVar6,ppuStack_5c);
  }
  puVar9 = *(undefined1 **)(iVar5 + 8);
  puVar6 = *(uint **)(iVar5 + 0xc);
  ppuStack_4c = &puStack_44;
  if ((puVar9 + (int)puVar6 != (undefined1 *)0x0) && (puVar9 == (undefined1 *)0x0))
  goto LAB_2c548130;
  puStack_50 = puVar6;
  if (puVar6 < (uint *)0x10) {
    if (puVar6 == (uint *)0x1) {
      puStack_44 = (uint *)CONCAT31(puStack_44._1_3_,*puVar9);
    }
    else if (puVar6 != (uint *)0x0) goto LAB_2c548102;
  }
  else {
    ppuStack_4c = (undefined4 **)FUN_2c5470b4(&puStack_50,0);
    puStack_44 = puStack_50;
LAB_2c548102:
    FUN_2c674668(ppuStack_4c,puVar9,puVar6);
  }
  ppuVar1 = ppuStack_4c;
  *(undefined1 *)((int)ppuStack_4c + (int)puStack_50) = 0;
  puStack_34 = (uint *)apuStack_2c;
  puVar9 = *(undefined1 **)(*(int *)(iVar4 + 0x14) + 8);
  puVar6 = *(uint **)(*(int *)(iVar4 + 0x14) + 0xc);
  puStack_48 = puStack_50;
  if ((puVar9 + (int)puVar6 != (undefined1 *)0x0) && (puVar9 == (undefined1 *)0x0)) {
LAB_2c548130:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c548150);
  }
  if (puVar6 < (uint *)0x10) {
    if (puVar6 == (uint *)0x1) {
      apuStack_2c[0] = (undefined4 *)CONCAT31(apuStack_2c[0]._1_3_,*puVar9);
      goto LAB_2c54809c;
    }
    puStack_50 = puVar6;
    if (puVar6 == (uint *)0x0) goto LAB_2c54809c;
  }
  else {
    puStack_50 = puVar6;
    puStack_34 = (uint *)FUN_2c5470b4(&puStack_50,0);
    apuStack_2c[0] = puStack_50;
  }
  FUN_2c674668(puStack_34,puVar9,puVar6);
  puVar6 = puStack_50;
LAB_2c54809c:
  puStack_50 = puVar6;
  *(undefined1 *)((int)puStack_34 + (int)puStack_50) = 0;
  puStack_54 = puStack_34;
  ppuStack_58 = ppuVar1;
  uStack_60 = DAT_2c54814c;
  ppuStack_5c = (undefined4 **)DAT_2c548148;
  puStack_30 = puStack_50;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c548144,0x17);
}

