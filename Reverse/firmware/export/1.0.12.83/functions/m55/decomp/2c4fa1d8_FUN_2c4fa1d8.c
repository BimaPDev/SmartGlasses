/* FUN_2c4fa1d8 @ 0x2c4fa1d8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4fa1d8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uStack_ac;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [4];
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 uStack_89;
  undefined4 uStack_2c;
  
  uStack_2c = *_LAB_2c4fa504;
  FUN_2c673c88();
  *_LAB_2c4fa508 = 0;
  uVar1 = DAT_2c4fa550;
  *_LAB_2c4fa50c = 0;
  *_LAB_2c4fa510 = (char)param_2;
  *_LAB_2c4fa514 = param_3;
  *_LAB_2c4fa518 = 1;
  FUN_2c673cc8(6,1);
  FUN_2c4969dc(0x11,0xf);
  FUN_2c4967a0(1);
  uStack_ac = uStack_ac & 0xffffff00;
  FUN_2c496e30(uStack_ac,1,uStack_a4);
  FUN_2c674268(auStack_a0,0,0x24);
  uStack_89 = *DAT_2c4fa51c;
  uStack_98 = 6;
  uStack_94 = DAT_2c4fa524;
  uStack_9c = param_3;
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x24e,uVar1,DAT_2c4fa528,DAT_2c4fa520,param_2,param_3,uStack_89);
}

