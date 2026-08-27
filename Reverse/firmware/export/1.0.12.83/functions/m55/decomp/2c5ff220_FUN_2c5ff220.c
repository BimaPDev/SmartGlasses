/* FUN_2c5ff220 @ 0x2c5ff220 */

void FUN_2c5ff220(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = *DAT_2c5ff27c;
  local_20 = *param_1;
  uStack_1c = param_1[1];
  uStack_18 = param_1[2];
  uVar4 = FUN_2c62ca18(&local_20,uStack_1c,uStack_18,0);
  uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar3 = (undefined4 *)uVar4;
  if (puVar3 != (undefined4 *)0x0) {
    do {
      uVar4 = FUN_2c602340(*puVar3,0xd,param_2 + 4);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((int)uVar4 == 2) {
        uVar1 = 1;
        goto LAB_2c5ff266;
      }
      uVar4 = FUN_2c62ca28(&local_20,puVar3);
      uVar2 = (undefined4)((ulonglong)uVar4 >> 0x20);
      puVar3 = (undefined4 *)uVar4;
    } while (puVar3 != (undefined4 *)0x0);
  }
  uVar1 = 0;
LAB_2c5ff266:
  if ((*DAT_2c5ff27c ^ local_14) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar1,uVar2,*DAT_2c5ff27c ^ local_14,0);
}

