/* FUN_2c5ae5d4 @ 0x2c5ae5d4 */

void FUN_2c5ae5d4(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  int iVar3;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 local_24 [16];
  int local_14;
  
  local_14 = *DAT_2c5ae690;
  FUN_2c5abf68();
  FUN_2c5acf1c();
  uVar1 = FUN_2c48e424(param_2,DAT_2c5ae694);
  uVar2 = FUN_2c48de20();
  if (NAN((double)CONCAT44(extraout_s1,uVar2))) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(4,DAT_2c5ae6a4,0x2e5,DAT_2c5ae6a0,DAT_2c5ae69c,DAT_2c5ae698);
  }
  uVar1 = FUN_2c48de20(uVar1);
  iVar3 = VectorFloatToSigned(CONCAT44(extraout_s1_00,uVar1),3);
  local_28 = 0;
  local_24[0] = 0;
  if (iVar3 == 2) {
    uVar1 = 0x4004;
  }
  else if (iVar3 == 1) {
    uVar1 = 0x4005;
  }
  else {
    uVar1 = 0x4006;
  }
  local_2c = local_24;
  uVar1 = registry_lookup(uVar1);
  uVar2 = FUN_2c66c4ec();
  FUN_2c5ae440(&local_2c,0,local_28,uVar1,uVar2);
  uVar1 = FUN_2c5abf68();
  FUN_2c5aceac(uVar1,&local_2c);
  if (local_2c == local_24) {
    if (*DAT_2c5ae690 != local_14) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

