/* FUN_2c4be268 @ 0x2c4be268 */

void FUN_2c4be268(uint param_1,undefined4 param_2)

{
  bool bVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  undefined4 uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar7;
  int iVar8;
  undefined4 unaff_lr;
  ushort local_24;
  ushort local_22;
  ushort local_20;
  ushort local_1e;
  uint local_1c;
  
  puVar3 = DAT_2c4be3c0;
  local_1c = *DAT_2c4be3bc;
  if (param_1 < 8) {
    iVar7 = ((int)(uint)*DAT_2c4be3c0 >> (param_1 & 0xff)) << 0x1f;
    if (iVar7 < 0) {
      if (param_1 != 7) {
        iVar7 = 0;
        *(undefined4 *)(DAT_2c4be3c4 + param_1 * 4) = 0;
      }
      puVar4 = DAT_2c4be3c8;
      iVar8 = 0;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        iVar8 = getBasePriority();
      }
      if (iVar8 != 0x40) {
        iVar7 = 0x2c4be2a4;
        *DAT_2c4be3c8 = 0x2c4be2a4;
        puVar4[1] = unaff_lr;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x40);
      }
      if (param_1 != 1) {
        FUN_2c673f18(param_1,0,iVar7,0x40);
      }
      puVar5 = DAT_2c4be3d0;
      FUN_2c673e88(0x26,&local_24);
      uVar2 = ~(ushort)(1 << (param_1 & 0xff));
      local_24 = local_24 & uVar2;
      FUN_2c673d68(0x26);
      *puVar5 = local_24;
      FUN_2c673e88(0x27,&local_22);
      local_22 = local_22 & uVar2;
      FUN_2c673d68(0x27);
      FUN_2c4bd788(param_1,0);
      FUN_2c673e88(0x4f,&local_20);
      if (param_1 == 7) {
        local_20 = local_20 & 0xffef;
      }
      else if ((*puVar3 & 0x7f) == 0) {
        local_20 = local_20 & 0xffdf;
      }
      else {
        FUN_2c673e88(0x1f,&local_1e);
        local_1e = local_1e | 0x1000;
        FUN_2c673d68(0x1f);
        local_1e = 0x7a;
        FUN_2c673d68(0x23);
      }
      FUN_2c673d68(0x4f,local_20);
      param_2 = extraout_r1;
      if ((local_20 & 0x20) == 0) {
        FUN_2c673bf8();
        param_2 = extraout_r1_01;
      }
      if ((char)*puVar5 == '\0') {
        *DAT_2c4be3cc = 0;
        FUN_2c4bd830();
        param_2 = extraout_r1_00;
      }
      if (iVar8 == 0) {
        *DAT_2c4be3c8 = 0xffffffff;
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(iVar8);
      }
      uVar6 = 0;
      goto LAB_2c4be34e;
    }
  }
  uVar6 = 0xffffffff;
LAB_2c4be34e:
  if ((*DAT_2c4be3bc ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar6,param_2,*DAT_2c4be3bc ^ local_1c,0);
}

