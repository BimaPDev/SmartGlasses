/* FUN_2c59bb40 @ 0x2c59bb40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59bb40(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar4 = _LAB_2c59bc30;
  uVar3 = FUN_2c606a10(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  FUN_2c627e28(uVar3,0);
  lv_style_init_or_reset(uVar4);
  lv_obj_set_style_bg_opa(uVar4,0);
  lv_obj_set_style_prop_0x32(uVar4,0);
  FUN_2c62c6f0(uVar4,4);
  FUN_2c62c6f8(uVar4,4);
  FUN_2c607048(*(undefined4 *)(param_1 + 0x10),0x27d1);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x10),uVar4,0);
  uVar4 = _LAB_2c59bc34;
  FUN_2c627e50(*(undefined4 *)(param_1 + 0x10),3,1);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0x10),9,0,0xffffffdc);
  lv_style_init_or_reset(uVar4);
  uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_2c62c7c0(uVar4,0xff00ff00);
  uVar11 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = FUN_2c5e2e80(_LAB_2c59bc38);
  FUN_2c606e38(uVar11,uVar3,0);
  FUN_2c638730(*(undefined4 *)(param_1 + 0x18),_LAB_2c59bc3c);
  uVar3 = _LAB_2c59bc40;
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0x18),uVar4,0);
  lv_style_init_or_reset(uVar3);
  FUN_2c62c7c0(uVar3,0xff00ff00);
  lv_obj_set_style_pad_bottom(uVar3,6);
  uVar11 = FUN_2c637344(*(undefined4 *)(param_1 + 0x10));
  uVar4 = _LAB_2c59bc44;
  *(undefined4 *)(param_1 + 0x14) = uVar11;
  FUN_2c638730(uVar11,uVar4);
  uVar11 = *(undefined4 *)(param_1 + 0x14);
  uVar4 = FUN_2c5e2e80(_LAB_2c59bc48);
  FUN_2c606e38(uVar11,uVar4,0);
  iVar5 = *(int *)(param_1 + 0x14);
  FUN_2c6032d4(iVar5,0,0xffff,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7);
  uVar9 = (*(ushort *)(iVar5 + 0x22) & 0x1ff) >> 3;
  if ((*(ushort *)(iVar5 + 0x22) & 0x1f8) == 0) {
    iVar6 = *(int *)(iVar5 + 0xc);
    iVar8 = 8;
    uVar7 = 1;
    uVar13 = uVar9;
  }
  else {
    iVar6 = *(int *)(iVar5 + 0xc);
    iVar8 = iVar6;
    uVar13 = 0;
    do {
      uVar12 = uVar13;
      pbVar1 = (byte *)(iVar8 + 7);
      iVar8 = iVar8 + 8;
      if ((*pbVar1 & 3) == 0) {
        uVar7 = uVar9 + 1 & 0x3f;
        iVar8 = uVar7 << 3;
        uVar9 = uVar12;
        uVar13 = uVar12 << 3;
        goto LAB_2c603734;
      }
      uVar13 = uVar12 + 1;
    } while (uVar13 != uVar9);
    uVar7 = uVar12 + 2 & 0x3f;
    iVar8 = uVar7 << 3;
    uVar9 = uVar13;
    uVar13 = (int)(short)uVar13 << 3;
  }
LAB_2c603734:
  *(ushort *)(iVar5 + 0x22) = *(ushort *)(iVar5 + 0x22) & 0xfe07 | (ushort)(uVar7 << 3);
  iVar6 = FUN_2c62bebc(iVar6,iVar8);
  *(int *)(iVar5 + 0xc) = iVar6;
  uVar7 = (*(ushort *)(iVar5 + 0x22) & 0x1ff) >> 3;
  while (uVar7 = uVar7 - 1, uVar9 < uVar7) {
    puVar10 = (undefined4 *)(iVar6 + uVar7 * 8);
    *puVar10 = puVar10[-2];
    puVar10[1] = puVar10[-1];
    iVar6 = *(int *)(iVar5 + 0xc);
  }
  FUN_2c62c3b0(iVar6 + uVar13,8);
  pcVar2 = DAT_2c6037ac;
  *(undefined4 *)(*(int *)(iVar5 + 0xc) + uVar13) = uVar3;
  iVar6 = uVar13 + *(int *)(iVar5 + 0xc);
  *(uint *)(iVar6 + 4) = *(uint *)(iVar6 + 4) & 0xff000000;
  if (*pcVar2 != '\0') {
    FUN_2c603540(iVar5,0,0xffff);
    return;
  }
  return;
}

