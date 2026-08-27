/* FUN_2c4800b0 @ 0x2c4800b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4800b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char *param_5
                 )

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_84 [32];
  undefined1 auStack_64 [32];
  undefined4 auStack_44 [8];
  int iStack_24;
  
  iStack_24 = *_LAB_2c480298;
  pcVar3 = param_5 + 4;
  iVar2 = (int)*param_5;
  iVar1 = FUN_2c47f470(auStack_84,param_3,param_1,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_84,auStack_84,pcVar3,iVar2);
  }
  FUN_2c47f554(auStack_84,auStack_84,auStack_84,param_5);
  FUN_2c47f554(param_1,param_1,auStack_84,param_5);
  FUN_2c47f554(param_3,param_3,auStack_84,param_5);
  FUN_2c47fbb8(auStack_84,param_4,param_2,pcVar3,iVar2);
  iVar1 = FUN_2c47f470(param_4,param_4,param_2,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_4,param_4,pcVar3,iVar2);
  }
  iVar1 = FUN_2c47f470(auStack_64,param_3,param_1,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_64,auStack_64,pcVar3,iVar2);
  }
  FUN_2c47f554(param_2,param_2,auStack_64,param_5);
  FUN_2c47fbb8(auStack_64,param_1,param_3,pcVar3,iVar2);
  FUN_2c47f554(param_3,param_4,param_4,param_5);
  iVar1 = FUN_2c47f470(param_3,param_3,auStack_64,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_3,param_3,pcVar3,iVar2);
  }
  iVar1 = FUN_2c47f470(auStack_44,param_1,param_3,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_44,auStack_44,pcVar3,iVar2);
  }
  FUN_2c47f554(param_4,param_4,auStack_44,param_5);
  iVar1 = FUN_2c47f470(param_4,param_4,param_2,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_4,param_4,pcVar3,iVar2);
  }
  FUN_2c47f554(auStack_44,auStack_84,auStack_84,param_5);
  iVar1 = FUN_2c47f470(auStack_44,auStack_44,auStack_64,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_44,auStack_44,pcVar3,iVar2);
  }
  iVar1 = FUN_2c47f470(auStack_64,auStack_44,param_1,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_64,auStack_64,pcVar3,iVar2);
  }
  FUN_2c47f554(auStack_64,auStack_64,auStack_84,param_5);
  iVar1 = FUN_2c47f470(param_2,auStack_64,param_2,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_2,param_2,pcVar3,iVar2);
  }
  if (0 < iVar2) {
    puVar5 = (undefined4 *)(param_1 + -4);
    puVar4 = auStack_44;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
    } while (puVar5 != (undefined4 *)(param_1 + (iVar2 - 1U & 0xff) * 4));
  }
  if (*_LAB_2c480298 == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

