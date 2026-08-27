/* FUN_2c50a484 @ 0x2c50a484 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c50a484(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  
  puVar2 = _LAB_2c50a838;
  uVar4 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar5 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x10) = uVar5;
  FUN_2c6072bc(uVar5,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),*puVar2,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = FUN_2c5e2e80(_LAB_2c50a824);
  FUN_2c606e38(uVar8,uVar5,0);
  uVar8 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = registry_lookup(_LAB_2c50a828);
  FUN_2c638730(uVar8,uVar5);
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  uVar5 = FUN_2c637344(uVar4);
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  FUN_2c6072bc(uVar5,2,0,0x1ac);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x20),*puVar2,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x20),2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = FUN_2c5e2e80(_LAB_2c50a824);
  FUN_2c606e38(uVar8,uVar5,0);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar5 = registry_lookup(_LAB_2c50a82c);
  FUN_2c638730(uVar8,uVar5);
  if (*(int *)(param_1 + 0x20) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x20),1);
  }
  uVar8 = FUN_2c606a10(uVar4);
  uVar5 = _DAT_2c50a830;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  FUN_2c603a04(uVar8,0,uVar5);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),10,0xaa);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x14),0xc,0);
  uVar5 = _LAB_2c50a824;
  uVar11 = *puVar2;
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x14),uVar11,0);
  uVar3 = _LAB_2c50a83c;
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x14),0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),1,0,0x5c);
  uVar6 = FUN_2c606a10(uVar4);
  uVar8 = _DAT_2c50a830;
  *(undefined4 *)(param_1 + 0x18) = uVar6;
  FUN_2c603a04(uVar6,0,uVar8);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),10,0xaa);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x18),0xc,0);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x18),uVar11,0);
  uVar8 = _DAT_2c50a830;
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x18),0);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),3,0,0x5c);
  uVar4 = FUN_2c606a10(uVar4);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_2c62a470();
  uVar6 = FUN_2c62a47c();
  FUN_2c607048(uVar4,uVar6,0xb4);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),2,0,0x5c);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),0x10);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x1c),2);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x1c),0xff000000,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x1c),0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x1c),0);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  FUN_2c606d30(uVar4,0);
  FUN_2c606d3c(uVar4,0);
  FUN_2c606d18(uVar4,0);
  FUN_2c606d24(uVar4,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x1c),0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x1c),0x10);
  FUN_2c60497c(*(undefined4 *)(param_1 + 0x1c),0);
  FUN_2c627e28(*(undefined4 *)(param_1 + 0x1c),0);
  FUN_2c627e50(*(undefined4 *)(param_1 + 0x1c),0,2);
  FUN_2c606d54(*(undefined4 *)(param_1 + 0x1c),0xc,0);
  FUN_2c606d30(*(undefined4 *)(param_1 + 0x1c),0x1a,0);
  FUN_2c606d3c(*(undefined4 *)(param_1 + 0x1c),0x1a,0);
  iVar9 = param_1;
  do {
    uVar4 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(iVar9 + 0x28) = uVar4;
    FUN_2c603a04(uVar4,0,uVar8);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x28),0x120,0xb4);
    FUN_2c606e68(*(undefined4 *)(iVar9 + 0x28),0xc,0);
    uVar6 = *puVar2;
    FUN_2c606d60(*(undefined4 *)(iVar9 + 0x28),uVar6,0);
    FUN_2c606d6c(*(undefined4 *)(iVar9 + 0x28),0);
    FUN_2c606d9c(*(undefined4 *)(iVar9 + 0x28),1,0);
    FUN_2c606d84(*(undefined4 *)(iVar9 + 0x28),uVar6,0);
    FUN_2c606d90(*(undefined4 *)(iVar9 + 0x28),0x4c,0);
    uVar4 = FUN_2c637344(*(undefined4 *)(iVar9 + 0x28));
    *(undefined4 *)(iVar9 + 0x2c) = uVar4;
    FUN_2c6072bc(uVar4,1,0x14,0x10);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x2c),0x27d1,0x1c);
    FUN_2c606e20(*(undefined4 *)(iVar9 + 0x2c),uVar6,0);
    FUN_2c606e5c(*(undefined4 *)(iVar9 + 0x2c),2,0);
    uVar11 = *(undefined4 *)(iVar9 + 0x2c);
    uVar4 = FUN_2c5e2e80(uVar5);
    FUN_2c606e38(uVar11,uVar4,0);
    uVar11 = *(undefined4 *)(iVar9 + 0x2c);
    uVar4 = registry_lookup(_LAB_2c50a834);
    FUN_2c638730(uVar11,uVar4);
    uVar4 = FUN_2c606a10(*(undefined4 *)(iVar9 + 0x28));
    *(undefined4 *)(iVar9 + 0x30) = uVar4;
    FUN_2c603a04(uVar4,0,uVar8);
    FUN_2c6072bc(*(undefined4 *)(iVar9 + 0x30),1,0x14,0x38);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x30),0xf8,0x6c);
    FUN_2c606e68(*(undefined4 *)(iVar9 + 0x30),10,0);
    FUN_2c606d60(*(undefined4 *)(iVar9 + 0x30),uVar6,0);
    FUN_2c606d6c(*(undefined4 *)(iVar9 + 0x30),0x19,0);
    uVar4 = FUN_2c637344(*(undefined4 *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x34) = uVar4;
    FUN_2c6072bc(uVar4,1,0x10,0x16);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x34),0x27d1,0x1c);
    FUN_2c606e20(*(undefined4 *)(iVar9 + 0x34),uVar6,0);
    FUN_2c606e5c(*(undefined4 *)(iVar9 + 0x34),1,0);
    uVar11 = *(undefined4 *)(iVar9 + 0x34);
    uVar4 = FUN_2c5e2e80(uVar5);
    FUN_2c606e38(uVar11,uVar4,0);
    uVar11 = *(undefined4 *)(iVar9 + 0x34);
    uVar4 = registry_lookup(uVar3);
    FUN_2c638730(uVar11,uVar4);
    uVar4 = FUN_2c637344(*(undefined4 *)(iVar9 + 0x30));
    *(undefined4 *)(iVar9 + 0x38) = uVar4;
    FUN_2c6072bc(uVar4,1,0x10,0x3e);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x38),0x27d1,0x18);
    FUN_2c606e20(*(undefined4 *)(iVar9 + 0x38),uVar6,0);
    FUN_2c606e5c(*(undefined4 *)(iVar9 + 0x38),1,0);
    uVar11 = *(undefined4 *)(iVar9 + 0x38);
    uVar4 = FUN_2c5e2e80(_LAB_2c50aa64);
    FUN_2c606e38(uVar11,uVar4,0);
    uVar11 = *(undefined4 *)(iVar9 + 0x38);
    uVar4 = registry_lookup(uVar3);
    FUN_2c638730(uVar11,uVar4);
    uVar4 = FUN_2c606a10(*(undefined4 *)(iVar9 + 0x28));
    *(undefined4 *)(iVar9 + 0x3c) = uVar4;
    FUN_2c603a04(uVar4,0,uVar8);
    FUN_2c6072bc(*(undefined4 *)(iVar9 + 0x3c),1,0xf0,0x10);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x3c),0x1c);
    FUN_2c606e68(*(undefined4 *)(iVar9 + 0x3c),0x10,0);
    FUN_2c606d60(*(undefined4 *)(iVar9 + 0x3c),uVar6,0);
    FUN_2c606d6c(*(undefined4 *)(iVar9 + 0x3c),0xff,0);
    uVar4 = FUN_2c606a10(*(undefined4 *)(iVar9 + 0x3c));
    *(undefined4 *)(iVar9 + 0x40) = uVar4;
    FUN_2c603a04(uVar4,0,uVar8);
    FUN_2c6072bc(*(undefined4 *)(iVar9 + 0x40),9,0,0xffffffff);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x40),0x10,10);
    FUN_2c606d00(*(undefined4 *)(iVar9 + 0x40),8,0);
    FUN_2c606d0c(*(undefined4 *)(iVar9 + 0x40),5,0);
    FUN_2c606cf4(*(undefined4 *)(iVar9 + 0x40),_LAB_2c50aa68,0);
    uVar4 = FUN_2c606a10(*(undefined4 *)(iVar9 + 0x40));
    *(undefined4 *)(iVar9 + 0x44) = uVar4;
    FUN_2c603a04(uVar4,0,uVar8);
    FUN_2c6072bc(*(undefined4 *)(iVar9 + 0x44),1,0);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x44),4,10);
    FUN_2c606d60(*(undefined4 *)(iVar9 + 0x44),0xff000000,0);
    FUN_2c606d6c(*(undefined4 *)(iVar9 + 0x44),0xff,0);
    uVar4 = FUN_2c606a10(*(undefined4 *)(iVar9 + 0x40));
    *(undefined4 *)(iVar9 + 0x48) = uVar4;
    FUN_2c603a04(uVar4,0,uVar8);
    FUN_2c6072bc(*(undefined4 *)(iVar9 + 0x48),4,0);
    FUN_2c607048(*(undefined4 *)(iVar9 + 0x48),0x10,4);
    FUN_2c606d60(*(undefined4 *)(iVar9 + 0x48),0xff000000,0);
    FUN_2c606d6c(*(undefined4 *)(iVar9 + 0x48),0xff,0);
    if (*(int *)(iVar9 + 0x3c) != 0) {
      lv_obj_add_flag_invalidate(*(int *)(iVar9 + 0x3c),1);
    }
    iVar9 = iVar9 + 0x24;
  } while (iVar9 != param_1 + 0x48);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x50),1,0x14,0xd);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x50),0x27d1,0x22);
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = FUN_2c5e2e80(_LAB_2c50aa6c);
  FUN_2c606e38(uVar5,uVar4,0);
  uVar5 = *(undefined4 *)(param_1 + 0x50);
  uVar4 = registry_lookup(_LAB_2c50aa70);
  FUN_2c638730(uVar5,uVar4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x54),0xf8,0x66);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x58),1,0x10,0x13);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x58),0x27d1,0x22);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = FUN_2c5e2e80(_LAB_2c50aa6c);
  FUN_2c606e38(uVar5,uVar4,0);
  uVar5 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = registry_lookup(_LAB_2c50aa74);
  FUN_2c638730(uVar5,uVar4);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x5c),1,0x10,0x3c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x5c),0x27d1,0x1c);
  uVar5 = *(undefined4 *)(param_1 + 0x5c);
  uVar4 = FUN_2c5e2e80(_LAB_2c50aa78);
  FUN_2c606e38(uVar5,uVar4,0);
  iVar10 = *(int *)(param_1 + 0x5c);
  iVar9 = registry_lookup(_LAB_2c50aa74);
  FUN_2c607df0();
  if (iVar9 == 0) {
    iVar9 = *(int *)(iVar10 + 0x24);
LAB_2c638786:
    if (-1 < (int)((uint)*(byte *)(iVar10 + 0x52) << 0x1c)) {
      iVar7 = FUN_2c66c4ec(iVar9);
      iVar9 = FUN_2c62bebc(iVar9,iVar7 + 1);
      *(int *)(iVar10 + 0x24) = iVar9;
      if (iVar9 == 0) {
        return;
      }
      goto LAB_2c63877a;
    }
  }
  else {
    if (*(int *)(iVar10 + 0x24) == iVar9) goto LAB_2c638786;
    if ((*(int *)(iVar10 + 0x24) != 0) && (bVar1 = *(byte *)(iVar10 + 0x52), (bVar1 & 8) == 0)) {
      FUN_2c62bea8();
      *(uint *)(iVar10 + 0x24) = bVar1 & 8;
    }
  }
  iVar7 = FUN_2c66c4ec(iVar9);
  iVar7 = lv_mem_alloc(iVar7 + 1);
  *(int *)(iVar10 + 0x24) = iVar7;
  if (iVar7 != 0) {
    FUN_2c6435c4(iVar7,iVar9);
    *(byte *)(iVar10 + 0x52) = *(byte *)(iVar10 + 0x52) & 0xf7;
    if (*(int *)(iVar10 + 0x24) != 0) {
LAB_2c63877a:
      FUN_2c637b3c(iVar10);
      return;
    }
  }
  return;
}

