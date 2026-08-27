/* FUN_2c5b1e68 @ 0x2c5b1e68 */

void FUN_2c5b1e68(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5b2154,0x8d,DAT_2c5b2150,DAT_2c5b217c);
  }
  FUN_2c5abf68();
  iVar1 = FUN_2c5ac3d0();
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,DAT_2c5b2154,0x95,DAT_2c5b2150,DAT_2c5b214c);
    }
    *DAT_2c5b2158 = 0;
    *DAT_2c5b215c = 0;
    *DAT_2c5b2160 = 0;
    *DAT_2c5b2164 = 0;
    uVar2 = FUN_2c606a10(param_2);
    *(undefined4 *)(param_1 + 4) = uVar2;
    FUN_2c62a470();
    uVar3 = FUN_2c62a47c();
    FUN_2c62a470();
    uVar4 = FUN_2c62a4a0();
    FUN_2c607048(uVar2,uVar3,uVar4);
    FUN_2c6072b4(*(undefined4 *)(param_1 + 4),5);
    FUN_2c5afd38(param_1,*(undefined4 *)(param_1 + 4));
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 4),1);
    uVar2 = FUN_2c606a10(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x14) = uVar2;
    FUN_2c5afd38(param_1,uVar2);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x14),0x27d1,0x3a);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x14),1,0x18);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x14),1);
    uVar2 = FUN_2c6313f4(*(undefined4 *)(param_1 + 0x14));
    uVar3 = FUN_2c5e2e8c(DAT_2c5b2168);
    FUN_2c63140c(uVar2,uVar3);
    FUN_2c6072b4(uVar2,7);
    uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x14));
    uVar2 = DAT_2c5b216c;
    *(undefined4 *)(param_1 + 0x18) = uVar3;
    FUN_2c638730(uVar3,uVar2);
    FUN_2c6388dc(*(undefined4 *)(param_1 + 0x18),1);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x18),0x228,0x1c);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x18),1,0x28,0);
    FUN_2c606d18(*(undefined4 *)(param_1 + 0x18),4,0);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
    uVar2 = FUN_2c5e2e80(DAT_2c5b2170);
    FUN_2c606e38(uVar3,uVar2,0);
    FUN_2c606e20(*(undefined4 *)(param_1 + 0x18),0xff00ff00,0);
    uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 0x14));
    uVar2 = DAT_2c5b216c;
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    FUN_2c638730(uVar3,uVar2);
    FUN_2c6388dc(*(undefined4 *)(param_1 + 0x1c),1);
    FUN_2c607048(*(undefined4 *)(param_1 + 0x1c),0x228,0x1c);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x1c),4,0x28,0);
    FUN_2c606d18(*(undefined4 *)(param_1 + 0x1c),4,0);
    uVar3 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = FUN_2c5e2e80(DAT_2c5b2170);
    FUN_2c606e38(uVar3,uVar2,0);
    FUN_2c606e20(*(undefined4 *)(param_1 + 0x1c),0xff00ff00,0);
    FUN_2c5b10b8(param_1,param_3);
    uVar2 = FUN_2c6313f4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    FUN_2c607048(uVar2,10,0x6a);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x24),4,0,0xffffff98);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    uVar2 = FUN_2c5e2e8c(DAT_2c5b2174);
    FUN_2c63140c(uVar3,uVar2);
    FUN_2c606d60(*(undefined4 *)(param_1 + 0x24),0xff000000,0);
    FUN_2c606d6c(*(undefined4 *)(param_1 + 0x24),0xff,0);
    lv_obj_add_flag_invalidate(*(undefined4 *)(param_1 + 0x24),1);
    uVar2 = FUN_2c6313f4(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 0x28) = uVar2;
    FUN_2c607048(uVar2,10,0x6a);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 0x28),6,0,0xffffff98);
    uVar3 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = FUN_2c5e2e8c(DAT_2c5b2174);
    FUN_2c63140c(uVar3,uVar2);
    FUN_2c606d6c(*(undefined4 *)(param_1 + 0x28),0xff,0);
    FUN_2c606d60(*(undefined4 *)(param_1 + 0x28),0xff000000,0);
    uVar5 = FUN_2c6041fc(*(undefined4 *)(param_1 + 0x20));
    if (uVar5 < 4) {
      lv_obj_add_flag_invalidate();
    }
    else {
      FUN_2c606abc(*(undefined4 *)(param_1 + 0x28),1);
    }
    uVar3 = FUN_2c637344(*(undefined4 *)(param_1 + 4));
    uVar2 = DAT_2c5b216c;
    *(undefined4 *)(param_1 + 8) = uVar3;
    FUN_2c638730(uVar3,uVar2);
    FUN_2c606e20(*(undefined4 *)(param_1 + 8),0xff00ff00,0);
    FUN_2c606e2c(*(undefined4 *)(param_1 + 8),0x99,0);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar2 = FUN_2c5e2e80(DAT_2c5b2178);
    FUN_2c606e38(uVar3,uVar2,0);
    FUN_2c606e5c(*(undefined4 *)(param_1 + 8),2,0);
    uVar3 = *(undefined4 *)(param_1 + 8);
    FUN_2c62a470();
    uVar2 = FUN_2c62a47c();
    FUN_2c607048(uVar3,uVar2,0x27d1);
    FUN_2c6072bc(*(undefined4 *)(param_1 + 8),2,0,0x188);
    FUN_2c606d18(*(undefined4 *)(param_1 + 8),6,0);
    uVar3 = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0x30) = 0x4035;
    uVar2 = registry_lookup();
    FUN_2c638730(uVar3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,DAT_2c5b2154,0x91,DAT_2c5b2150,DAT_2c5b2180,DAT_2c5b2150);
}

