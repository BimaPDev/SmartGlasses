/* FUN_2c55cfa4 @ 0x2c55cfa4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c55cfa4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_2c;
  
  FUN_2c60438c(*(undefined4 *)(param_1 + 0x14));
  uVar6 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24);
  uVar7 = _LAB_2c55d160 * ((int)uVar6 >> 3);
  if (uVar6 < 0x61) {
    *(uint *)(param_1 + 8) = uVar7;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 2;
    *(uint *)(param_1 + 8) = uVar7 >> 1;
    *(uint *)(param_1 + 0xc) = uVar7 - (uVar7 >> 1);
  }
  uVar1 = _DAT_2c55d164;
  uStack_2c = 0;
  do {
    uVar2 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x14));
    FUN_2c603a04(uVar2,0,uVar1);
    FUN_2c607048(uVar2,0x21c,0x27d1);
    uVar3 = FUN_2c606a10(uVar2);
    FUN_2c603a04(uVar3,0,uVar1);
    FUN_2c607048(uVar3,0x27d1);
    FUN_2c6072b4(uVar3,9);
    FUN_2c627e28(uVar3,4);
    FUN_2c606d48(uVar3,0xc,0);
    FUN_2c606d54(uVar3,0xc,0);
    uVar2 = _LAB_2c55d168;
    if (uStack_2c == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(param_1 + 8);
    }
    while( true ) {
      if (uStack_2c == 0) {
        iVar8 = *(int *)(param_1 + 8);
      }
      else {
        iVar8 = _LAB_2c55d160 * (*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 3);
      }
      if (iVar8 <= iVar9) break;
      iVar8 = *(int *)(param_1 + 0x24);
      uVar4 = FUN_2c606a10(uVar3);
      FUN_2c603a04(uVar4,0,uVar1);
      FUN_2c607048(uVar4,0x7d,0x28);
      FUN_2c606d60(uVar4,0xff000000,0);
      FUN_2c606d6c(uVar4,0xff,0);
      FUN_2c606d9c(uVar4,1,0);
      FUN_2c606e68(uVar4,0xc,0);
      FUN_2c606d90(uVar4,0x66,0);
      FUN_2c606d84(uVar4,0xff00ff00,0);
      uVar4 = FUN_2c637344(uVar4);
      FUN_2c603a04(uVar4,0,uVar1);
      FUN_2c607048(uVar4,0x2064,0x27d1);
      FUN_2c606e20(uVar4,0xff00ff00,0);
      FUN_2c606e2c(uVar4,0xff,0);
      uVar5 = FUN_2c5e2e80(uVar2);
      FUN_2c606e38(uVar4,uVar5,0);
      FUN_2c606e5c(uVar4,2,0);
      FUN_2c638730(uVar4,*(undefined4 *)(iVar8 + iVar9 * 0x18));
      FUN_2c6072bc(uVar4,9,0);
      iVar9 = iVar9 + 1;
    }
    uStack_2c = uStack_2c + 1;
  } while (uStack_2c < *(int *)(param_1 + 0x10));
  return;
}

