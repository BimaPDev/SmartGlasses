/* FUN_140c97a4 @ 0x140c97a4 */

undefined4 *
FUN_140c97a4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined4 *local_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 uStack_5c;
  undefined4 *local_58;
  uint local_54;
  undefined4 auStack_50 [4];
  undefined4 *local_40;
  uint local_3c;
  undefined4 auStack_38 [5];
  
  piVar2 = (int *)FUN_140d2a04(param_5 + 0x6c);
  iVar3 = FUN_140c9384(param_5 + 0x6c);
  piVar8 = (int *)*param_7;
  iVar6 = param_7[1];
  iVar4 = iVar3;
  if (*piVar8 == *(int *)(iVar3 + 0x40)) goto LAB_140c9860;
  local_64 = *(undefined4 *)(iVar3 + 0x38);
  uVar12 = *(uint *)(iVar3 + 0x28);
  local_7c = *(undefined4 **)(iVar3 + 0x24);
  while( true ) {
    iVar4 = (**(code **)(*piVar2 + 0x14))(piVar2,4,piVar8,piVar8 + iVar6);
    piVar2 = (int *)(iVar4 - (int)piVar8 >> 2);
    local_70 = param_3;
    local_6c = param_4;
    if (piVar2 == (int *)0x0) break;
    local_58 = auStack_50;
    local_54 = 0;
    auStack_50[0] = 0;
    FUN_140d7984(&local_58,(int)piVar2 << 1);
    piVar10 = (int *)((int)piVar2 - *(int *)(iVar3 + 0x34));
    if ((int)piVar10 < 1) {
LAB_140c987c:
      if (0 < *(int *)(iVar3 + 0x34)) {
        FUN_140d79e6(&local_58,*(undefined4 *)(iVar3 + 0x14));
        if ((int)piVar10 < 0) {
          FUN_140c92b2(&local_58,-(int)piVar10,*(undefined4 *)(iVar3 + 0x44));
        }
        else {
          piVar2 = *(int **)(iVar3 + 0x34);
          piVar8 = piVar8 + (int)piVar10;
        }
        FUN_140d7c2c(&local_58,piVar8,piVar2);
      }
      bVar1 = false;
      uVar7 = *(uint *)(param_5 + 0xc) & 0xb0;
      iVar4 = 0;
      if ((*(uint *)(param_5 + 0xc) & 0x200) != 0) {
        iVar4 = *(int *)(iVar3 + 0x20);
      }
      local_40 = auStack_38;
      uVar9 = iVar4 + uVar12 + local_54;
      local_3c = 0;
      auStack_38[0] = 0;
      FUN_140d7984(&local_40,uVar9 * 2);
      uVar11 = *(uint *)(param_5 + 8);
      if ((uVar7 == 0x10) && (bVar1 = false, uVar9 < uVar11)) {
        bVar1 = true;
      }
      iVar4 = 0;
      goto LAB_140c98de;
    }
    if (*(int *)(iVar3 + 0x34) < 0) {
      piVar10 = piVar2;
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
      FUN_140d7adc(&local_58,0,local_54,piVar8,piVar10);
      goto LAB_140c987c;
    }
    FUN_140d7a24(&local_58,0,local_54,(int)piVar10 << 1,0);
    iVar4 = FUN_140d2c5c(local_58,*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 8),
                         *(undefined4 *)(iVar3 + 0xc),piVar8,piVar8 + (int)piVar10);
    uVar7 = iVar4 - (int)local_58 >> 2;
    if (uVar7 <= local_54) {
      FUN_140d7770(&local_58,uVar7);
      goto LAB_140c987c;
    }
    iVar4 = FUN_140cb80c(DAT_140c99e0,DAT_140c99dc);
    iVar6 = extraout_r3;
LAB_140c9860:
    local_64 = *(undefined4 *)(iVar4 + 0x3c);
    uVar12 = *(uint *)(iVar4 + 0x30);
    local_7c = *(undefined4 **)(iVar4 + 0x2c);
    if (iVar6 != 0) {
      piVar8 = piVar8 + 1;
    }
  }
  goto LAB_140c997a;
LAB_140c98de:
  do {
    switch(*(undefined1 *)((int)&local_64 + iVar4)) {
    case 0:
      if (bVar1) {
LAB_140c99b2:
        FUN_140c92b2(&local_40,uVar11 - uVar9,param_6);
      }
      break;
    case 1:
      uVar5 = param_6;
      if (bVar1) goto LAB_140c99b2;
LAB_140c999c:
      FUN_140d79e6(&local_40,uVar5);
      break;
    case 2:
      if (*(int *)(param_5 + 0xc) << 0x16 < 0) {
        FUN_140d7c2c(&local_40,*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20));
      }
      break;
    case 3:
      if (uVar12 != 0) {
        uVar5 = *local_7c;
        goto LAB_140c999c;
      }
      break;
    case 4:
      FUN_140d7be8(&local_40,local_58,local_54);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  if (1 < uVar12) {
    FUN_140d7c2c(&local_40,local_7c + 1,uVar12 - 1);
  }
  uVar12 = local_3c;
  if (local_3c < uVar11) {
    uVar12 = uVar11;
    if (uVar7 == 0x20) {
      FUN_140c92b2(&local_40,uVar11 - local_3c,param_6);
    }
    else {
      FUN_140c93ec(&local_40,0,uVar11 - local_3c,param_6);
    }
  }
  FUN_140c9770(&local_60,param_3,param_4,local_40,uVar12);
  local_70 = local_60;
  local_6c = CONCAT31((int3)((uint)param_4 >> 8),uStack_5c);
  FUN_140d77c4(&local_40);
  FUN_140d77c4(&local_58);
LAB_140c997a:
  *(undefined4 *)(param_5 + 8) = 0;
  *param_1 = local_70;
  param_1[1] = local_6c;
  return param_1;
}

