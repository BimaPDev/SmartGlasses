/* FUN_2c47ff3c @ 0x2c47ff3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c47ff3c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char *param_5
                 )

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uStack_48;
  undefined4 auStack_44 [8];
  int iStack_24;
  
  puVar4 = &uStack_48;
  iStack_24 = *_LAB_2c4800ac;
  pcVar3 = param_5 + 4;
  iVar2 = (int)*param_5;
  iVar1 = FUN_2c47f470(auStack_44,param_3,param_1,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_44,auStack_44,pcVar3,iVar2);
  }
  FUN_2c47f554(auStack_44,auStack_44,auStack_44,param_5);
  FUN_2c47f554(param_1,param_1,auStack_44,param_5);
  FUN_2c47f554(param_3,param_3,auStack_44,param_5);
  iVar1 = FUN_2c47f470(param_4,param_4,param_2,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_4,param_4,pcVar3,iVar2);
  }
  FUN_2c47f554(auStack_44,param_4,param_4,param_5);
  iVar1 = FUN_2c47f470(auStack_44,auStack_44,param_1,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_44,auStack_44,pcVar3,iVar2);
  }
  iVar1 = FUN_2c47f470(auStack_44,auStack_44,param_3,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(auStack_44,auStack_44,pcVar3,iVar2);
  }
  iVar1 = FUN_2c47f470(param_3,param_3,param_1,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_3,param_3,pcVar3,iVar2);
  }
  FUN_2c47f554(param_2,param_2,param_3,param_5);
  iVar1 = FUN_2c47f470(param_3,param_1,auStack_44,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_3,param_3,pcVar3,iVar2);
  }
  FUN_2c47f554(param_4,param_4,param_3,param_5);
  iVar1 = FUN_2c47f470(param_4,param_4,param_2,iVar2);
  if (iVar1 != 0) {
    FUN_2c47f410(param_4,param_4,pcVar3,iVar2);
  }
  if (0 < iVar2) {
    puVar5 = (undefined4 *)(param_3 + -4);
    do {
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar4;
    } while (puVar5 != (undefined4 *)(param_3 + (iVar2 - 1U & 0xff) * 4));
  }
  if (*_LAB_2c4800ac == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

