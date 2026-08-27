/* FUN_2c142608 @ 0x2c142608 */

uint FUN_2c142608(undefined4 *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  
  puVar8 = DAT_2c1426ec;
  uVar7 = (param_2 + 3 & 0xfffffffc) + 8;
  if (uVar7 < 0xc) {
    uVar7 = 0xc;
  }
  if (((int)uVar7 < 0) || (uVar7 < param_2)) {
    *param_1 = 0xc;
    return 0;
  }
  FUN_2c142a1c();
  puVar4 = (uint *)*puVar8;
  for (puVar1 = (uint *)*puVar8; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    uVar5 = *puVar1 - uVar7;
    if (-1 < (int)uVar5) {
      if (uVar5 < 0xc) {
        if (puVar4 == puVar1) {
          *puVar8 = puVar1[1];
        }
        else {
          puVar4[1] = puVar1[1];
        }
      }
      else {
        uVar3 = (int)puVar1 + uVar7;
        *puVar1 = uVar7;
        if (puVar4 != puVar1) {
          puVar4[1] = uVar3;
        }
        uVar6 = puVar1[1];
        if (puVar4 == puVar1) {
          *puVar8 = uVar3;
        }
        *(uint *)((int)puVar1 + uVar7) = uVar5;
        *(uint *)(uVar3 + 4) = uVar6;
      }
      goto LAB_2c1426a8;
    }
    puVar4 = puVar1;
  }
  puVar1 = (uint *)FUN_2c1425c8(param_1,uVar7);
  if (puVar1 == (uint *)0xffffffff) {
    puVar1 = (uint *)*puVar8;
    for (puVar8 = (uint *)*puVar8; puVar8 != (uint *)0x0; puVar8 = (uint *)puVar8[1]) {
      puVar1 = puVar8;
    }
    uVar5 = *puVar1;
    iVar2 = FUN_2c1426f0(param_1,0);
    if ((int)puVar1 + uVar5 == iVar2) {
      uVar7 = ((uVar7 + 3) - *puVar1 & 0xfffffffc) + 8;
      if (uVar7 < 0xc) {
        uVar7 = 0xc;
      }
      iVar2 = FUN_2c1425c8(param_1,uVar7);
      if (iVar2 != -1) {
        *puVar1 = *puVar1 + uVar7;
        goto LAB_2c1426a8;
      }
    }
    *param_1 = 0xc;
    FUN_2c142a28(param_1);
    uVar7 = 0;
  }
  else {
    *puVar1 = uVar7;
LAB_2c1426a8:
    FUN_2c142a28(param_1);
    uVar7 = (int)puVar1 + 0xbU & 0xfffffff8;
    iVar2 = uVar7 - (int)(puVar1 + 1);
    if (iVar2 != 0) {
      *(uint *)((int)puVar1 + iVar2) = (int)(puVar1 + 1) - uVar7;
    }
  }
  return uVar7;
}

