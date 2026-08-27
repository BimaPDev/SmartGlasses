/* FUN_2c593890 @ 0x2c593890 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c593890(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uStack_ec;
  undefined1 *puStack_e8;
  undefined4 uStack_e4;
  undefined1 auStack_e0 [16];
  undefined1 *puStack_d0;
  undefined4 uStack_cc;
  undefined1 auStack_c8 [16];
  undefined1 *puStack_b8;
  undefined4 uStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 *puStack_a0;
  undefined4 uStack_9c;
  undefined1 auStack_98 [16];
  undefined1 *puStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined4 *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [20];
  int iStack_34;
  
  uVar2 = *(undefined4 *)(param_2 + 4);
  iStack_34 = *DAT_2c5939c0;
  uStack_60 = 0x3f800000;
  uStack_ec = _LAB_2c5939c4;
  uStack_e4 = 0;
  auStack_e0[0] = 0;
  uStack_cc = 0;
  auStack_c8[0] = 0;
  uStack_b4 = 0;
  auStack_b0[0] = 0;
  uStack_9c = 0;
  auStack_98[0] = 0;
  uStack_84 = 0;
  auStack_80[0] = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  auStack_48[0] = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_6c = 1;
  puStack_e8 = auStack_e0;
  puStack_d0 = auStack_c8;
  puStack_b8 = auStack_b0;
  puStack_a0 = auStack_98;
  puStack_88 = auStack_80;
  puStack_70 = &uStack_58;
  puStack_50 = auStack_48;
  uVar1 = FUN_2c66c4ec(uVar2);
  FUN_2c591ec8(&puStack_88,0,0,uVar2,uVar1);
  FUN_2c52f5f4(&puStack_d0,param_3 + 4);
  FUN_2c593300(param_1,0,&uStack_ec);
  uStack_ec = _LAB_2c5939c4;
  if (puStack_50 != auStack_48) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  FUN_2c5561f0(&puStack_70);
  if (puStack_70 != &uStack_58) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_88 != auStack_80) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_a0 != auStack_98) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_b8 != auStack_b0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_d0 != auStack_c8) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_e8 != auStack_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c5939c0 == iStack_34) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

