/* FUN_2c4dfd0c @ 0x2c4dfd0c */

void FUN_2c4dfd0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = *DAT_2c4dfd5c;
  uStack_10 = param_3;
  if (param_1 == 0) {
    local_18 = 0;
    uVar2 = 0;
    uStack_14 = param_2;
  }
  else {
    pcVar1 = (char *)(param_1 + -1);
    local_18 = 0;
    uStack_14 = 0;
    iVar4 = 8;
    pcVar3 = (char *)&local_18;
    while (bVar5 = iVar4 != 0, iVar4 = iVar4 + -1, uVar2 = uStack_14, bVar5) {
      pcVar1 = pcVar1 + 1;
      if (*pcVar1 == '\0') {
        if (iVar4 != 0) {
          *pcVar3 = '\0';
          uVar2 = uStack_14;
        }
        break;
      }
      *pcVar3 = *pcVar1;
      pcVar3 = pcVar3 + 1;
    }
  }
  if ((*DAT_2c4dfd5c ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(local_18,uVar2,*DAT_2c4dfd5c ^ local_c,0);
}

