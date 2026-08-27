/* FUN_2c5b7774 @ 0x2c5b7774 */

void FUN_2c5b7774(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *local_2c [2];
  undefined1 auStack_24 [16];
  int local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  uVar4 = FUN_2c606a10(param_2);
  FUN_2c5b725c(param_1,uVar4);
  FUN_2c607048(uVar4,0x27d1,0x52);
  FUN_2c627e28(uVar4,0);
  FUN_2c627e50(uVar4,2,2);
  FUN_2c606d54(uVar4,0x20,0);
  FUN_2c5b7350(param_1,uVar4);
  FUN_2c5b7574(param_1,uVar4);
  local_14 = *DAT_2c5b7760;
  uVar4 = FUN_2c606a10(uVar4);
  FUN_2c5b725c(param_1,uVar4);
  FUN_2c607048(uVar4,0x27d1,0x52);
  uVar2 = FUN_2c637344(uVar4);
  FUN_2c5c562c(local_2c);
  FUN_2c638730(uVar2,local_2c[0]);
  if (local_2c[0] != auStack_24) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  uVar3 = FUN_2c5e2e80(DAT_2c5b7764);
  FUN_2c606e38(uVar2,uVar3,0);
  FUN_2c606e20(uVar2,0xff00ff00,0);
  FUN_2c606e2c(uVar2,0xff,0);
  FUN_2c607048(uVar2,0x27d1,0x22);
  FUN_2c6072b4(uVar2,2);
  FUN_2c602454(uVar2,DAT_2c5b776c,*DAT_2c5b7768,0);
  uVar3 = FUN_2c620f3c(0x3e9,uVar2,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar4 = FUN_2c637344(uVar4);
  uVar3 = registry_lookup(0x4043);
  FUN_2c638730(uVar4,uVar3);
  uVar3 = FUN_2c5e2e80(DAT_2c5b7770);
  FUN_2c606e38(uVar4,uVar3,0);
  FUN_2c606e20(uVar4,0xff00ff00,0);
  FUN_2c606e2c(uVar4,0x99,0);
  FUN_2c607048(uVar4,0x27d1,0x18);
  FUN_2c608808(uVar4,uVar2,0xe,0,0);
  piVar1 = DAT_2c5b7760;
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  if (*piVar1 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

