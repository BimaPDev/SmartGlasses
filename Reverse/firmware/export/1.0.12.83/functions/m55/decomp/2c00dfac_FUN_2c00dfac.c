/* FUN_2c00dfac @ 0x2c00dfac */

void FUN_2c00dfac(undefined4 param_1,ushort param_2,undefined4 param_3,undefined4 param_4,
                 ushort param_5,short param_6,ushort param_7,short param_8,ushort param_9,
                 short param_10,int param_11,undefined4 param_12,undefined4 param_13,uint param_14)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 uVar3;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  int unaff_r5;
  int iVar4;
  ushort unaff_r6;
  ushort unaff_r7;
  ushort unaff_r8;
  ushort unaff_r9;
  int unaff_r10;
  ushort unaff_r11;
  
  param_13._0_2_ = param_2 & 0xfff0 | unaff_r11;
  FUN_2c008f74();
  FUN_2c008e4c(0x31,&param_13);
  iVar4 = unaff_r5 + param_11 * 8;
  if (((iVar4 * 5 & 0xffU) >> 1 | iVar4 * 0x280 & 0xffU) < 0x1a) {
    param_13._0_2_ = (ushort)param_13 & 0xefff;
  }
  else {
    param_13._0_2_ = (ushort)param_13 | 0x1000;
  }
  param_13._0_2_ =
       ((ushort)param_13 & 0xf0c0 | param_10 << 8 | (unaff_r9 & 3) << 4 | param_5) & 0x1fff |
       param_6 << 0xd;
  FUN_2c008f74(0x31);
  FUN_2c008e4c(0x30,&param_13);
  param_13._0_2_ = (ushort)param_13 & 0xffc0 | (unaff_r8 & 3) << 4 | param_7;
  FUN_2c008f74(0x30);
  FUN_2c008e4c(0x2f,&param_13);
  param_13._0_2_ =
       (ushort)param_13 & 0x8080 | (unaff_r7 & 7) << 0xc | param_8 << 8 | (unaff_r6 & 7) << 4 |
       param_9;
  FUN_2c008f74(0x2f);
  puVar2 = DAT_2c00e114;
  uVar3 = extraout_r1;
  if (*DAT_2c00e110 - 1 < 2) {
    iVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      iVar4 = getBasePriority();
    }
    uVar3 = extraout_r2;
    if (iVar4 != 0x40) {
      *DAT_2c00e114 = 0x2c00e0ca;
      puVar2[1] = param_12;
      uVar3 = param_12;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x40);
    }
    FUN_2c008e4c(0x27,(int)&param_13 + 2,uVar3,0x40);
    param_13._2_2_ = param_13._2_2_ | 0x2000;
    FUN_2c008f74(0x27);
    if (iVar4 == 0) {
      *DAT_2c00e114 = 0xffffffff;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    uVar3 = extraout_r1_00;
    if (bVar1) {
      setBasePriority(iVar4);
    }
  }
  if (unaff_r10 == 0) {
    *DAT_2c00e114 = 0xffffffff;
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(unaff_r10);
  }
  if ((*DAT_2c00e10c ^ param_14) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c0084a8(0,uVar3,*DAT_2c00e10c ^ param_14,0);
  }
  return;
}

