/* FUN_2c65685c @ 0x2c65685c */

undefined4 *
FUN_2c65685c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int param_5,undefined4 param_6,undefined4 *param_7)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r3;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puStack_7c;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 uStack_5c;
  undefined4 *puStack_58;
  uint uStack_54;
  undefined4 auStack_50 [4];
  undefined4 *puStack_40;
  uint uStack_3c;
  undefined4 auStack_38 [5];
  
  piVar2 = (int *)FUN_2c65faf0(param_5 + 0x6c);
  iVar3 = FUN_2c656140(param_5 + 0x6c);
  piVar8 = (int *)*param_7;
  iVar6 = param_7[1];
  iVar4 = iVar3;
  if (*piVar8 == *(int *)(iVar3 + 0x40)) goto LAB_2c656918;
  uStack_64 = *(undefined4 *)(iVar3 + 0x38);
  uVar12 = *(uint *)(iVar3 + 0x28);
  puStack_7c = *(undefined4 **)(iVar3 + 0x24);
  while( true ) {
    iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2,4,piVar8,piVar8 + iVar6);
    piVar2 = (int *)(iVar4 - (int)piVar8 >> 2);
    uStack_70 = param_3;
    uStack_6c = param_4;
    if (piVar2 == (int *)0x0) break;
    puStack_58 = auStack_50;
    uStack_54 = 0;
    auStack_50[0] = 0;
    FUN_2c664a64(&puStack_58,(int)piVar2 << 1);
    piVar10 = (int *)((int)piVar2 - *(int *)(iVar3 + 0x34));
    if ((int)piVar10 < 1) {
LAB_2c656934:
      if (0 < *(int *)(iVar3 + 0x34)) {
        FUN_2c664ac6(&puStack_58,*(undefined4 *)(iVar3 + 0x14));
        if ((int)piVar10 < 0) {
          FUN_2c65612a(&puStack_58,-(int)piVar10,*(undefined4 *)(iVar3 + 0x44));
        }
        else {
          piVar2 = *(int **)(iVar3 + 0x34);
          piVar8 = piVar8 + (int)piVar10;
        }
        FUN_2c664d0c(&puStack_58,piVar8,piVar2);
      }
      bVar1 = false;
      uVar7 = *(uint *)(param_5 + 0xc) & 0xb0;
      iVar4 = 0;
      if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
        iVar4 = *(int *)(iVar3 + 0x20);
      }
      puStack_40 = auStack_38;
      uVar9 = iVar4 + uVar12 + uStack_54;
      uStack_3c = 0;
      auStack_38[0] = 0;
      FUN_2c664a64(&puStack_40,uVar9 * 2);
      uVar11 = *(uint *)(param_5 + 8);
      if ((uVar7 == 0x10) && (bVar1 = false, uVar9 < uVar11)) {
        bVar1 = true;
      }
      iVar4 = 0;
      goto LAB_2c656996;
    }
    if (*(int *)(iVar3 + 0x34) < 0) {
      piVar10 = piVar2;
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
      FUN_2c664bbc(&puStack_58,0,uStack_54,piVar8,piVar10);
      goto LAB_2c656934;
    }
    FUN_2c664b04(&puStack_58,0,uStack_54,(int)piVar10 << 1,0);
    iVar4 = FUN_2c65fd48(puStack_58,*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 8),
                         *(undefined4 *)(iVar3 + 0xc),piVar8,piVar8 + (int)piVar10);
    uVar7 = iVar4 - (int)puStack_58 >> 2;
    if (uVar7 <= uStack_54) {
      FUN_2c664850(&puStack_58,uVar7);
      goto LAB_2c656934;
    }
    iVar4 = FUN_2c65868c(DAT_2c656a98,DAT_2c656a94);
    iVar6 = extraout_r3;
LAB_2c656918:
    uStack_64 = *(undefined4 *)(iVar4 + 0x3c);
    uVar12 = *(uint *)(iVar4 + 0x30);
    puStack_7c = *(undefined4 **)(iVar4 + 0x2c);
    if (iVar6 != 0) {
      piVar8 = piVar8 + 1;
    }
  }
  goto LAB_2c656a32;
LAB_2c656996:
  do {
    switch(*(undefined1 *)((int)&uStack_64 + iVar4)) {
    case 0:
      if (bVar1) {
LAB_2c656a6a:
        FUN_2c65612a(&puStack_40,uVar11 - uVar9,param_6);
      }
      break;
    case 1:
      uVar5 = param_6;
      if (bVar1) goto LAB_2c656a6a;
LAB_2c656a54:
      FUN_2c664ac6(&puStack_40,uVar5);
      break;
    case 2:
      if (*(int *)(param_5 + 0xc) << 0x16 < 0) {
        FUN_2c664d0c(&puStack_40,*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20));
      }
      break;
    case 3:
      if (uVar12 != 0) {
        uVar5 = *puStack_7c;
        goto LAB_2c656a54;
      }
      break;
    case 4:
      FUN_2c664cc8(&puStack_40,puStack_58,uStack_54);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (1 < uVar12) {
    FUN_2c664d0c(&puStack_40,puStack_7c + 1,uVar12 - 1);
  }
  uVar12 = uStack_3c;
  if (uStack_3c < uVar11) {
    uVar12 = uVar11;
    if (uVar7 == 0x20) {
      FUN_2c65612a(&puStack_40,uVar11 - uStack_3c,param_6);
    }
    else {
      FUN_2c656264(&puStack_40,0,uVar11 - uStack_3c,param_6);
    }
  }
  FUN_2c6565e8(&uStack_60,param_3,param_4,puStack_40,uVar12);
  uStack_70 = uStack_60;
  uStack_6c = CONCAT31((int3)((uint)param_4 >> 8),uStack_5c);
  FUN_2c6648a4(&puStack_40);
  FUN_2c6648a4(&puStack_58);
LAB_2c656a32:
  *(undefined4 *)(param_5 + 8) = 0;
  *param_1 = uStack_70;
  param_1[1] = uStack_6c;
  return param_1;
}

