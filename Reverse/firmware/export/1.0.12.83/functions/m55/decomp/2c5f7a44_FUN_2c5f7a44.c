/* FUN_2c5f7a44 @ 0x2c5f7a44 */

void FUN_2c5f7a44(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = *DAT_2c5f7ad0;
  uStack_18 = DAT_2c5f7acc;
  iVar5 = param_2[1];
  local_14 = 0;
  uStack_10 = 0;
  local_1c = param_1;
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  else {
    pcVar4 = (char *)*param_2;
    cVar1 = *pcVar4;
    cVar2 = pcVar4[iVar5 + -1];
    if ((((cVar1 == '\'') && (cVar2 == '\'')) || ((cVar1 == '(' && (cVar2 == ')')))) ||
       ((cVar1 == '\"' && (cVar2 == '\"')))) {
      FUN_2c5f50c4(&local_1c,pcVar4 + 1,iVar5 + -2);
    }
    else {
      FUN_2c5f50c4();
    }
    FUN_2c5f6cec();
    uVar6 = FUN_2c5f6ba8(&local_1c);
    param_2 = (undefined4 *)((ulonglong)uVar6 >> 0x20);
    uVar3 = (undefined4)uVar6;
  }
  if ((*DAT_2c5f7ad0 ^ local_c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar3,param_2,*DAT_2c5f7ad0 ^ local_c,0);
}

