/* FUN_2c4fd558 @ 0x2c4fd558 */

void FUN_2c4fd558(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_r1;
  uint uVar4;
  char local_15;
  uint local_14;
  
  uVar4 = 0;
  local_14 = *DAT_2c4fd5d4;
  uVar2 = FUN_2c63f8e4(3,param_2,param_3,0);
  local_15 = '\0';
  iVar3 = FUN_2c640164(3,&local_15);
  if ((iVar3 == 0) || (local_15 == '\0')) {
    uVar4 = uVar2 & 0xff;
  }
  uVar2 = FUN_2c63f86c(3);
  iVar3 = FUN_2c63f82c();
  uVar2 = uVar2 & 0xff;
  if ((iVar3 == 2) && (uVar2 == 1)) {
    uVar2 = 0;
  }
  else {
    uVar4 = uVar4 - uVar2;
  }
  bVar1 = FUN_2c63f8a8(3);
  if ((*DAT_2c4fd5d4 ^ local_14) != 0) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail((int)(uVar4 * 100) / (int)(bVar1 - uVar2) & 0xff,extraout_r1,
                   *DAT_2c4fd5d4 ^ local_14,0);
  }
  return;
}

