/* FUN_2c52f780 @ 0x2c52f780 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c52f780(void)

{
  undefined4 uVar1;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined4 uStack_b0;
  undefined1 auStack_ac [16];
  undefined1 *puStack_9c;
  undefined4 uStack_98;
  undefined1 auStack_94 [16];
  undefined1 *puStack_84;
  undefined4 uStack_80;
  undefined1 auStack_7c [16];
  undefined1 *puStack_6c;
  undefined4 uStack_68;
  undefined1 auStack_64 [16];
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 uStack_30;
  undefined4 uStack_2c;
  int iStack_24;
  
  uVar1 = _LAB_2c52f850;
  iStack_24 = *DAT_2c52f848;
  uStack_b0 = 0;
  auStack_ac[0] = 0;
  auStack_94[0] = 0;
  auStack_7c[0] = 0;
  uStack_68 = 0;
  auStack_64[0] = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  auStack_48[0] = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_b8 = _LAB_2c52f850;
  uStack_98 = 0;
  uStack_80 = 0;
  puStack_b4 = auStack_ac;
  puStack_9c = auStack_94;
  puStack_84 = auStack_7c;
  puStack_6c = auStack_64;
  puStack_50 = auStack_48;
  FUN_2c52f5f4(&puStack_6c,_LAB_2c52f84c);
  FUN_2c57c1bc(&uStack_b8);
  uStack_b8 = uVar1;
  if (puStack_50 != auStack_48) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_6c != auStack_64) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_84 != auStack_7c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_9c != auStack_94) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_b4 != auStack_ac) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (*DAT_2c52f848 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

