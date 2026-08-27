/* FUN_2c535078 @ 0x2c535078 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c535078(int param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  undefined4 auStack_54 [2];
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint *puStack_3c;
  uint uStack_38;
  uint auStack_34 [4];
  int iStack_24;
  
  iStack_24 = *_LAB_2c535304;
  auStack_54[0] = param_2;
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x1c)) {
      func_0x2c53561c();
      iVar9 = *(int *)(param_1 + 0xc);
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 0x10;
      goto LAB_2c5351a6;
    }
    FUN_2c534f6c(param_1 + 0x14,*(int *)(param_1 + 0x18),auStack_54);
  }
  else {
    iVar9 = *(int *)(param_1 + 8);
    iVar13 = *(int *)(param_1 + 0xc);
    if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14)) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
    }
    iVar7 = iVar13 - iVar9;
    if (0 < iVar7 >> 6) {
      iVar11 = iVar9 + (iVar7 >> 6) * 0x40;
      iVar7 = param_4 + 1;
      do {
        uVar2 = FUN_2c63736c(*(undefined4 *)(iVar9 + 8));
        iVar3 = FUN_2c66b624(iVar7,uVar2);
        iVar5 = iVar9;
        if (iVar3 == 0) goto LAB_2c5350ce;
        uVar2 = FUN_2c63736c(*(undefined4 *)(iVar9 + 0x18));
        iVar5 = FUN_2c66b624(iVar7,uVar2);
        if (iVar5 == 0) {
          iVar5 = iVar9 + 0x10;
          if (iVar5 != *(int *)(param_1 + 0xc)) goto LAB_2c5350d4;
          goto LAB_2c53517e;
        }
        uVar2 = FUN_2c63736c(*(undefined4 *)(iVar9 + 0x28));
        iVar5 = FUN_2c66b624(iVar7,uVar2);
        if (iVar5 == 0) {
          iVar5 = iVar9 + 0x20;
          goto LAB_2c5350ce;
        }
        uVar2 = FUN_2c63736c(*(undefined4 *)(iVar9 + 0x38));
        iVar5 = FUN_2c66b624(iVar7,uVar2);
        if (iVar5 == 0) {
          iVar5 = iVar9 + 0x30;
          goto LAB_2c5350ce;
        }
        iVar9 = iVar9 + 0x40;
      } while (iVar11 != iVar9);
      iVar7 = iVar13 - iVar9;
    }
    iVar7 = iVar7 >> 4;
    if (iVar7 == 2) {
LAB_2c5352c2:
      uVar2 = FUN_2c63736c(*(undefined4 *)(iVar9 + 8));
      iVar7 = FUN_2c66b624(param_4 + 1,uVar2);
      iVar5 = iVar9;
      if (iVar7 != 0) {
        iVar9 = iVar9 + 0x10;
LAB_2c535296:
        uVar2 = FUN_2c63736c(*(undefined4 *)(iVar9 + 8));
        iVar7 = FUN_2c66b624(param_4 + 1,uVar2);
        iVar5 = iVar9;
        if (iVar7 != 0) {
          iVar5 = iVar13;
        }
      }
    }
    else if (iVar7 == 3) {
      uVar2 = FUN_2c63736c(*(undefined4 *)(iVar9 + 8));
      iVar7 = FUN_2c66b624(param_4 + 1,uVar2);
      iVar5 = iVar9;
      if (iVar7 != 0) {
        iVar9 = iVar9 + 0x10;
        goto LAB_2c5352c2;
      }
    }
    else {
      iVar5 = iVar13;
      if (iVar7 == 1) goto LAB_2c535296;
    }
LAB_2c5350ce:
    if (iVar5 == *(int *)(param_1 + 0xc)) {
LAB_2c53517e:
      func_0x2c53563c(&uStack_4c,auStack_54[0],param_3,param_4);
      puVar10 = *(uint **)(param_1 + 0xc);
      if (puVar10 == *(uint **)(param_1 + 0x10)) {
        FUN_2c534e60(param_1 + 8,puVar10,&uStack_4c);
        iVar9 = *(int *)(param_1 + 0xc);
      }
      else {
        *puVar10 = uStack_4c;
        puVar10[1] = uStack_48;
        puVar10[2] = uStack_44;
        puVar10[3] = uStack_40;
        iVar9 = *(int *)(param_1 + 0xc) + 0x10;
        *(int *)(param_1 + 0xc) = iVar9;
      }
      goto LAB_2c5351a6;
    }
LAB_2c5350d4:
    puVar12 = *(undefined1 **)(param_4 + 0x18);
    puStack_3c = auStack_34;
    if (puVar12 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c658674(_DAT_2c53530c);
    }
    uVar4 = FUN_2c66c4ec(puVar12);
    uStack_4c = uVar4;
    if (uVar4 < 0x10) {
      puVar10 = auStack_34;
      if (uVar4 == 1) {
        auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,*puVar12);
      }
      else if (uVar4 != 0) goto LAB_2c535236;
    }
    else {
      puStack_3c = (uint *)FUN_2c534964(&uStack_4c,0);
      auStack_34[0] = uStack_4c;
      puVar10 = puStack_3c;
LAB_2c535236:
      FUN_2c674668(puVar10,puVar12,uVar4);
      puVar10 = puStack_3c;
    }
    *(undefined1 *)((int)puVar10 + uStack_4c) = 0;
    uStack_38 = uStack_4c;
    func_0x2c53562c(iVar5,&puStack_3c);
    if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    puStack_3c = auStack_34;
    uVar4 = FUN_2c66c4ec(param_4 + 1);
    uStack_4c = uVar4;
    if (uVar4 < 0x10) {
      puVar10 = auStack_34;
      if (uVar4 == 1) {
        auStack_34[0] = CONCAT31(auStack_34[0]._1_3_,*(undefined1 *)(param_4 + 1));
      }
      else if (uVar4 != 0) goto LAB_2c53525a;
    }
    else {
      puStack_3c = (uint *)FUN_2c534964(&uStack_4c,0);
      auStack_34[0] = uStack_4c;
      puVar10 = puStack_3c;
LAB_2c53525a:
      FUN_2c674668(puVar10,param_4 + 1,uVar4);
      puVar10 = puStack_3c;
    }
    *(undefined1 *)((int)puVar10 + uStack_4c) = 0;
    uStack_38 = uStack_4c;
    func_0x2c535634(iVar5,&puStack_3c);
    if (puStack_3c != auStack_34) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
  }
  iVar9 = *(int *)(param_1 + 0xc);
LAB_2c5351a6:
  piVar1 = _LAB_2c535304;
  uVar8 = iVar9 - *(int *)(param_1 + 8) >> 4;
  uVar6 = (uint)((ulonglong)_LAB_2c535308 * (ulonglong)uVar8 >> 0x20);
  uVar4 = uVar6 >> 1;
  if (uVar8 != (uVar6 & 0xfffffffe) + (uVar6 >> 1)) {
    uVar4 = uVar4 + 1;
  }
  *(uint *)(param_1 + 0x24) = uVar4;
  if (*piVar1 != iStack_24) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

