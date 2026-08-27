/* FUN_2c59bc4c @ 0x2c59bc4c */

/* WARNING: Removing unreachable block (ram,0x2c637060) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c59bc4c(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;
  
  uVar5 = FUN_2c636670(param_2);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  uVar3 = _LAB_2c59bcd4;
  FUN_2c63703c(uVar5,0);
  FUN_2c607048(*(undefined4 *)(param_1 + 0xc),0x95);
  FUN_2c6072bc(*(undefined4 *)(param_1 + 0xc),9,0,0xffffffeb);
  FUN_2c603a04(*(undefined4 *)(param_1 + 0xc),0,0x30000);
  lv_style_init_or_reset(uVar3);
  FUN_2c62c798(uVar3,0xff00ff00);
  lv_obj_set_style_bg_color(uVar3,0xff00ff00);
  FUN_2c62c7b8(uVar3,0xff);
  FUN_2c62c7b0(uVar3,0xff00ff00);
  FUN_2c62c7a0(uVar3,4);
  FUN_2c6036dc(*(undefined4 *)(param_1 + 0xc),uVar3,0x20000);
  iVar6 = *(int *)(param_1 + 0xc);
  FUN_2c637114(iVar6,0);
  sVar1 = *(short *)(iVar6 + 0x2c);
  sVar2 = *(short *)(iVar6 + 0x2a);
  iVar7 = (int)(short)(sVar1 - sVar2);
  iVar9 = (int)sVar1;
  if (iVar7 < 0) {
    iVar7 = (int)(short)((sVar1 - sVar2) + 0x168);
  }
  if (iVar9 < 0) {
    iVar9 = (int)(short)(sVar1 + 0x168);
  }
  iVar8 = iVar9 - iVar7;
  if (iVar8 < 0) {
    iVar8 = -iVar8;
  }
  if (0xb4 < iVar8) {
    FUN_2c607df0(iVar6);
    *(undefined2 *)(iVar6 + 0x2a) = 0;
    FUN_2c636890(iVar6);
    return;
  }
  if (iVar9 < iVar7) {
    cVar4 = FUN_2c607e50(iVar6);
    if ((cVar4 == '\x01') && (sVar2 != 0)) {
      FUN_2c6365bc(iVar6,sVar2,0);
      *(undefined2 *)(iVar6 + 0x2a) = 0;
      FUN_2c636890(iVar6);
      return;
    }
  }
  else if (((iVar7 < iVar9) && (cVar4 = FUN_2c607e50(iVar6), cVar4 == '\x01')) && (sVar2 != 0)) {
    FUN_2c6365bc(iVar6,0,sVar2,0,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  }
  *(undefined2 *)(iVar6 + 0x2a) = 0;
  FUN_2c636890(iVar6);
  return;
}

