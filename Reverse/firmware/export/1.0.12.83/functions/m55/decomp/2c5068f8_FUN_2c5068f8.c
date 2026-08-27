/* FUN_2c5068f8 @ 0x2c5068f8 */

/* WARNING: Removing unreachable block (ram,0x2c606a44) */
/* WARNING: Removing unreachable block (ram,0x2c606a84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5068f8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar3 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  FUN_2c6072bc(uVar3,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x14),0xff00ff00,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x14),2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = FUN_2c5e2e80(_LAB_2c506c74);
  FUN_2c606e38(uVar8,uVar3,0);
  uVar8 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = registry_lookup(_LAB_2c506c78);
  FUN_2c638730(uVar8,uVar3);
  if (*(int *)(param_1 + 0x14) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
  }
  puVar1 = _LAB_2c506c7c;
  uVar8 = FUN_2c637344(uVar2);
  uVar3 = _DAT_2c506c80;
  *(undefined4 *)(param_1 + 0x18) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),1,0x1a,0x5c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x120,0x86);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x18),0xff000000,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x18),0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x18),0xc,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x18),_LAB_2c506c84);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x18),1);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x18),*puVar1,1);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x18),0x4c,1);
  FUN_2c606b6c(*(undefined4 *)(param_1 + 0x18),1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
  }
  uVar8 = FUN_2c637344(uVar3);
  uVar3 = _DAT_2c506c80;
  *(undefined4 *)(param_1 + 0x1c) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),9,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0xf8,0x66);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x1c),0xff00ff00,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x1c),0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x1c),_LAB_2c506c84);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  FUN_2c6072bc(uVar3,1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x20),0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = FUN_2c5e2e4c(_DAT_2c506c88);
  FUN_2c63140c(uVar8,uVar3);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_2c6072bc(uVar3,1,6);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x24),0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x24);
  uVar3 = FUN_2c5e2e4c(_DAT_2c506c8c);
  FUN_2c63140c(uVar8,uVar3);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x28) = uVar3;
  FUN_2c6072bc(uVar3,1,0x34,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x28),0xc4,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x28),0xff00ff00,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x28),1,0);
  uVar8 = *(undefined4 *)(param_1 + 0x28);
  uVar3 = FUN_2c5e2e80(_LAB_2c506c74);
  FUN_2c606e38(uVar8,uVar3,0);
  FUN_2c6388dc(*(undefined4 *)(param_1 + 0x28),1);
  if (*(int *)(param_1 + 0x28) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x28),1);
  }
  uVar8 = FUN_2c637344(*(undefined4 *)(param_1 + 0x1c));
  uVar3 = _DAT_2c506c80;
  *(undefined4 *)(param_1 + 0x2c) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x2c),1,0x34,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x2c),0x27d1,0x14);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x2c),0xff00ff00,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x2c),_LAB_2c506c84);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  FUN_2c6072bc(uVar3,7,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x30),0x27d1);
  uVar8 = *(undefined4 *)(param_1 + 0x30);
  uVar3 = FUN_2c5e2e4c(_DAT_2c506c90);
  FUN_2c63140c(uVar8,uVar3);
  uVar8 = FUN_2c637344(*(undefined4 *)(param_1 + 0x2c));
  uVar3 = _DAT_2c506c80;
  *(undefined4 *)(param_1 + 0x34) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x34),7,9,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x34),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x34),0xff00ff00,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x34),2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = FUN_2c5e2e80(_LAB_2c506c74);
  FUN_2c606e38(uVar8,uVar3,0);
  FUN_2c606e2c(*(undefined4 *)(param_1 + 0x34),0xff,0);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar3 = registry_lookup(_LAB_2c506c94);
  FUN_2c638730(uVar8,uVar3);
  uVar8 = FUN_2c62fe4c(*(undefined4 *)(param_1 + 0x1c));
  uVar3 = _DAT_2c506c80;
  *(undefined4 *)(param_1 + 0x38) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x38),5,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x38),0xf8,0x28);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x38),0xff00ff00,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x38),10,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x38),0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x38),1);
  uVar9 = *puVar1;
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x38),uVar9,1);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x38),0x4c,1);
  FUN_2c606b6c(*(undefined4 *)(param_1 + 0x38),1);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x38));
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c6072bc(uVar3,9,0);
  uVar8 = FUN_2c5e2e80(_LAB_2c506c74);
  FUN_2c606e38(uVar3,uVar8,0);
  FUN_2c606e20(uVar3,uVar9,0);
  FUN_2c606e5c(uVar3,2,0);
  uVar8 = registry_lookup(_LAB_2c506c98);
  FUN_2c638730(uVar3,uVar8);
  uVar8 = FUN_2c637344(uVar2);
  uVar3 = _DAT_2c506fdc;
  *(undefined4 *)(param_1 + 0x3c) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x3c),3,0xffffffe6,0x5c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x3c),0x120,0x86);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x3c),0xff000000,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x3c),0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x3c),0xc,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x3c),_LAB_2c506fe0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x3c),1);
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x3c),uVar9,1);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x3c),0x4c,1);
  FUN_2c606b6c(*(undefined4 *)(param_1 + 0x3c),1);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x3c),1);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
  }
  uVar8 = FUN_2c637344(uVar3);
  uVar3 = _DAT_2c506fdc;
  *(undefined4 *)(param_1 + 0x40) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x40),9,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x40),0xf8,0x66);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x40),0xff00ff00,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x40),0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x40),_LAB_2c506fe0);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_2c6072bc(uVar3,1,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x44),0x2c);
  uVar8 = *(undefined4 *)(param_1 + 0x44);
  uVar3 = FUN_2c5e2e4c(_DAT_2c506fe4);
  FUN_2c63140c(uVar8,uVar3);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  FUN_2c6072bc(uVar3,1,6);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x48),0x20);
  uVar8 = *(undefined4 *)(param_1 + 0x48);
  uVar3 = FUN_2c5e2e4c(_DAT_2c506fe8);
  FUN_2c63140c(uVar8,uVar3);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  FUN_2c6072bc(uVar3,1,0x34,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x4c),0xc4,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x4c),0xff00ff00,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x4c),1,0);
  uVar8 = *(undefined4 *)(param_1 + 0x4c);
  uVar3 = FUN_2c5e2e80(_LAB_2c506fec);
  FUN_2c606e38(uVar8,uVar3,0);
  FUN_2c6388dc(*(undefined4 *)(param_1 + 0x4c),1);
  if (*(int *)(param_1 + 0x4c) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x4c),1);
  }
  uVar8 = FUN_2c637344(*(undefined4 *)(param_1 + 0x40));
  uVar3 = _DAT_2c506fdc;
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x50),1,0x34,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x50),0x27d1,0x14);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x50),0xff00ff00,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x50),_LAB_2c506fe0);
  uVar3 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x50));
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  FUN_2c6072bc(uVar3,7,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x54),0x27d1);
  uVar8 = *(undefined4 *)(param_1 + 0x54);
  uVar3 = FUN_2c5e2e4c(_DAT_2c506ff0);
  FUN_2c63140c(uVar8,uVar3);
  uVar8 = FUN_2c637344(*(undefined4 *)(param_1 + 0x50));
  uVar3 = _DAT_2c506fdc;
  *(undefined4 *)(param_1 + 0x58) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x58),7,9,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x58),0x27d1);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x58),0xff00ff00,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x58),2,0);
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  uVar3 = FUN_2c5e2e80(_LAB_2c506fec);
  FUN_2c606e38(uVar8,uVar3,0);
  FUN_2c606e2c(*(undefined4 *)(param_1 + 0x58),0xff,0);
  uVar8 = *(undefined4 *)(param_1 + 0x58);
  uVar3 = registry_lookup(_LAB_2c506ff4);
  FUN_2c638730(uVar8,uVar3);
  uVar8 = FUN_2c62fe4c(*(undefined4 *)(param_1 + 0x40));
  uVar3 = _DAT_2c506fdc;
  *(undefined4 *)(param_1 + 0x5c) = uVar8;
  FUN_2c603a04(uVar8,0,uVar3);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x5c),5,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x5c),0xf8,0x28);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x5c),0xff00ff00,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x5c),10,0);
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x5c),0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x5c),1);
  uVar9 = *puVar1;
  FUN_2c606d84(*(undefined4 *)(param_1 + 0x5c),uVar9,1);
  FUN_2c606d90(*(undefined4 *)(param_1 + 0x5c),0x4c,1);
  FUN_2c606b6c(*(undefined4 *)(param_1 + 0x5c),1);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x5c));
  FUN_2c607048(uVar3,0x27d1);
  FUN_2c6072bc(uVar3,9,0);
  uVar8 = FUN_2c5e2e80(_LAB_2c506fec);
  FUN_2c606e38(uVar3,uVar8,0);
  FUN_2c606e20(uVar3,uVar9,0);
  FUN_2c606e5c(uVar3,2,0);
  uVar8 = registry_lookup(_LAB_2c506ff8);
  FUN_2c638730(uVar3,uVar8);
  uVar3 = FUN_2c637344(uVar2);
  uVar2 = _DAT_2c506fdc;
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  FUN_2c603a04(uVar3,0,uVar2);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x60),5,0,0xffffffe4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x60),0x27d1);
  uVar3 = *(undefined4 *)(param_1 + 0x60);
  uVar2 = FUN_2c5e2e80(_LAB_2c506fec);
  FUN_2c606e38(uVar3,uVar2,0);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x60),uVar9,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x60),2,0);
  uVar3 = *(undefined4 *)(param_1 + 0x60);
  uVar2 = registry_lookup(_LAB_2c507038);
  FUN_2c638730(uVar3,uVar2);
  iVar4 = *(int *)(param_1 + 0x60);
  if (iVar4 == 0) {
    return;
  }
  iVar7 = *DAT_2c606ab8;
  iVar5 = FUN_2c607214();
  FUN_2c607df0(iVar4);
  *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) | 1;
  FUN_2c607df0(iVar4);
  iVar6 = FUN_2c607214(iVar4);
  if (iVar6 != iVar5) {
    FUN_2c6041d4(iVar4);
    FUN_2c607248();
    FUN_2c607248(iVar4);
  }
  if (*DAT_2c606ab8 != iVar7) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

