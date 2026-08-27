/* FUN_2c5cdb48 @ 0x2c5cdb48 */

void FUN_2c5cdb48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  short *psVar2;
  undefined4 *puVar3;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  short *psStack_54;
  undefined1 auStack_50 [60];
  int local_14;
  
  local_14 = *DAT_2c5cdbcc;
  local_60 = param_3;
  uStack_5c = param_4;
  uVar1 = FUN_2c668f08(&local_60,param_2,param_3,0);
  *(undefined4 *)(param_1 + 4) = uVar1;
  psVar2 = (short *)FUN_2c47245c(0,8);
  puVar3 = *(undefined4 **)(param_1 + 4);
  *psVar2 = (short)puVar3[5] + 0x76c;
  *(char *)(psVar2 + 1) = (char)puVar3[4] + '\x01';
  *(char *)((int)psVar2 + 3) = (char)puVar3[3];
  *(char *)((int)psVar2 + 5) = (char)puVar3[2];
  *(char *)(psVar2 + 3) = (char)puVar3[1];
  *(char *)((int)psVar2 + 7) = (char)*puVar3;
  *(char *)(psVar2 + 2) = (char)puVar3[6] + '\x01';
  FUN_2c674268(auStack_50,0,0x3c);
  uStack_58 = 1;
  psStack_54 = psVar2;
  FUN_2c62ef08(&uStack_58);
  FUN_2c6743d8(local_60,uStack_5c);
  if (*DAT_2c5cdbcc == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

