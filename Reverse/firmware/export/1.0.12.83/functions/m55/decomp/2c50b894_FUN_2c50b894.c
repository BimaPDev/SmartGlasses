/* FUN_2c50b894 @ 0x2c50b894 */

void FUN_2c50b894(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 local_2d;
  int local_2c;
  
  puVar2 = DAT_2c50bc00;
  local_2c = *DAT_2c50bbe0;
  uVar6 = (**(code **)(**(int **)(param_1 + 4) + 4))();
  uVar7 = FUN_2c637344();
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  FUN_2c6072bc(uVar7,2,0,0x1c);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1,0x1c);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x10),*puVar2,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x10),2,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = FUN_2c5e2e80(DAT_2c50bbe4);
  FUN_2c606e38(uVar11,uVar7,0);
  uVar11 = *(undefined4 *)(param_1 + 0x10);
  uVar7 = registry_lookup(DAT_2c50bbe8);
  FUN_2c638730(uVar11,uVar7);
  if (*(int *)(param_1 + 0x10) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x10),1);
  }
  uVar7 = FUN_2c637344(uVar6);
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  FUN_2c6072bc(uVar7,2,0,0x1ac);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x27d1,0x18);
  FUN_2c606e20(*(undefined4 *)(param_1 + 0x18),*puVar2,0);
  FUN_2c606e5c(*(undefined4 *)(param_1 + 0x18),2,0);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = FUN_2c5e2e80(DAT_2c50bbe4);
  FUN_2c606e38(uVar11,uVar7,0);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar7 = registry_lookup(DAT_2c50bbec);
  FUN_2c638730(uVar11,uVar7);
  if (*(int *)(param_1 + 0x18) != 0) {
    lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x18),1);
  }
  uVar6 = FUN_2c606a10(uVar6);
  *(undefined4 *)(param_1 + 0x14) = uVar6;
  FUN_2c607048(uVar6,0x1e8,0x13c);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),2,0,100);
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),0x10);
  iVar12 = 0;
  FUN_2c606abc(*(undefined4 *)(param_1 + 0x14),2);
  FUN_2c606d60(*(undefined4 *)(param_1 + 0x14),0xff000000,0);
  uVar6 = DAT_2c50bbe4;
  FUN_2c606d6c(*(undefined4 *)(param_1 + 0x14),0);
  FUN_2c606d9c(*(undefined4 *)(param_1 + 0x14),0);
  uVar7 = *(undefined4 *)(param_1 + 0x14);
  FUN_2c606d30(uVar7,0);
  FUN_2c606d3c(uVar7,0);
  FUN_2c606d18(uVar7,0);
  FUN_2c606d24(uVar7,0);
  FUN_2c606e68(*(undefined4 *)(param_1 + 0x14),0);
  lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),0x10);
  FUN_2c60497c(*(undefined4 *)(param_1 + 0x14),0);
  FUN_2c627e28(*(undefined4 *)(param_1 + 0x14),1);
  FUN_2c627e50(*(undefined4 *)(param_1 + 0x14),0,2);
  FUN_2c606d48(*(undefined4 *)(param_1 + 0x14),0xc,0);
  FUN_2c606d18(*(undefined4 *)(param_1 + 0x14),0);
  FUN_2c606d24(*(undefined4 *)(param_1 + 0x14),0);
  uVar7 = DAT_2c50bbf0;
  *(undefined4 *)(param_1 + 0x30) = DAT_2c50bbf0;
  *(undefined4 *)(param_1 + 0x78) = uVar7;
  *(undefined4 *)(param_1 + 0xc0) = uVar7;
  *(undefined4 *)(param_1 + 0x108) = uVar7;
  FUN_2c50b464(param_1);
  uVar7 = registry_lookup(DAT_2c50bbf4);
  *(undefined4 *)(param_1 + 0x78) = uVar7;
  FUN_2c50b4b8(param_1);
  FUN_2c50b500(param_1);
  iVar10 = param_1;
  while( true ) {
    uVar1 = (undefined1)iVar12;
    uVar11 = FUN_2c606a10(*(undefined4 *)(param_1 + 0x14));
    uVar7 = DAT_2c50bbf8;
    *(undefined4 *)(iVar10 + 0x20) = uVar11;
    FUN_2c603a04(uVar11,0,uVar7);
    FUN_2c607048(*(undefined4 *)(iVar10 + 0x20),0x1e8,0x27d1);
    FUN_2c606d18(*(undefined4 *)(iVar10 + 0x20),10,0);
    FUN_2c606d24(*(undefined4 *)(iVar10 + 0x20),10,0);
    FUN_2c606e68(*(undefined4 *)(iVar10 + 0x20),0xc,0);
    uVar7 = *puVar2;
    FUN_2c606d60(*(undefined4 *)(iVar10 + 0x20),uVar7,0);
    FUN_2c606d6c(*(undefined4 *)(iVar10 + 0x20),0);
    FUN_2c606d9c(*(undefined4 *)(iVar10 + 0x20),1,0);
    FUN_2c606d84(*(undefined4 *)(iVar10 + 0x20),uVar7,0);
    FUN_2c606d90(*(undefined4 *)(iVar10 + 0x20),0x4c,0);
    iVar8 = FUN_2c637344(*(undefined4 *)(iVar10 + 0x20));
    FUN_2c6072bc(iVar8,7,0x14,0);
    FUN_2c607048(iVar8,0x27d1,0x1c);
    FUN_2c606e20(iVar8,uVar7,0);
    FUN_2c606e5c(iVar8,2,0);
    uVar7 = FUN_2c5e2e80(uVar6);
    FUN_2c606e38(iVar8,uVar7,0);
    local_2d = uVar1;
    puVar9 = (undefined4 *)FUN_2c50b6e8(param_1 + 0x14c,&local_2d);
    uVar7 = registry_lookup(*(undefined4 *)*puVar9);
    FUN_2c638730(iVar8,uVar7);
    if (iVar8 != 0) {
      lv_obj_add_flag_invalidate(iVar8,1);
    }
    uVar7 = FUN_2c637344(*(undefined4 *)(iVar10 + 0x20));
    *(undefined4 *)(iVar10 + 0x2c) = uVar7;
    FUN_2c6072bc(uVar7,8,0xffffffe2,0);
    FUN_2c607048(*(undefined4 *)(iVar10 + 0x2c),0x27d1,0x18);
    FUN_2c606e20(*(undefined4 *)(iVar10 + 0x2c),*puVar2,0);
    FUN_2c606e5c(*(undefined4 *)(iVar10 + 0x2c),2,0);
    uVar11 = *(undefined4 *)(iVar10 + 0x2c);
    uVar7 = FUN_2c5e2e80(uVar6);
    FUN_2c606e38(uVar11,uVar7,0);
    FUN_2c638730(*(undefined4 *)(iVar10 + 0x2c),*(undefined4 *)(iVar10 + 0x30));
    FUN_2c606e2c(*(undefined4 *)(iVar10 + 0x2c),0x66,0);
    uVar11 = FUN_2c6313f4(*(undefined4 *)(iVar10 + 0x20));
    uVar7 = DAT_2c50bbfc;
    *(undefined4 *)(iVar10 + 0x28) = uVar11;
    uVar7 = FUN_2c5e2e8c(uVar7);
    FUN_2c63140c(uVar11,uVar7);
    FUN_2c6072bc(*(undefined4 *)(iVar10 + 0x28),8,0xfffffff0,0);
    FUN_2c608c7c(*(undefined4 *)(iVar10 + 0x20));
    if (*(int *)(iVar10 + 0x2c) == 0) {
      sVar3 = 0;
    }
    else {
      sVar3 = FUN_2c6073ec();
    }
    sVar4 = FUN_2c6073ec(*(undefined4 *)(iVar10 + 0x20));
    sVar5 = FUN_2c6073ec(iVar8);
    FUN_2c6043d8(iVar8);
    iVar8 = (int)(short)(((sVar4 - sVar3) + -0x32) - sVar5);
    if (iVar8 < 0x14) break;
    uVar7 = FUN_2c637344(*(undefined4 *)(iVar10 + 0x20));
    *(undefined4 *)(iVar10 + 0x24) = uVar7;
    FUN_2c6072bc(uVar7,7,0x14,0);
    FUN_2c607048(*(undefined4 *)(iVar10 + 0x24),0x27d1,0x1c);
    iVar12 = iVar12 + 1;
    FUN_2c606e20(*(undefined4 *)(iVar10 + 0x24),*puVar2,0);
    FUN_2c606e5c(*(undefined4 *)(iVar10 + 0x24),1,0);
    uVar11 = *(undefined4 *)(iVar10 + 0x24);
    uVar7 = FUN_2c5e2e80(uVar6);
    FUN_2c606e38(uVar11,uVar7,0);
    uVar11 = *(undefined4 *)(iVar10 + 0x24);
    local_2d = uVar1;
    puVar9 = (undefined4 *)FUN_2c50b6e8(param_1 + 0x14c,&local_2d);
    uVar7 = registry_lookup(*(undefined4 *)*puVar9);
    FUN_2c638730(uVar11,uVar7);
    iVar10 = iVar10 + 0x48;
    if (iVar12 == 4) {
      if (*(int *)(param_1 + 0x14) == 0) {
        if (*DAT_2c50bd5c == local_2c) {
          return;
        }
      }
      else if (*DAT_2c50bd5c == local_2c) {
        lv_obj_add_flag_invalidate(*(int *)(param_1 + 0x14),1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c50bd54,0xba,DAT_2c50bd58,DAT_2c50bd50,iVar12,iVar8);
}

