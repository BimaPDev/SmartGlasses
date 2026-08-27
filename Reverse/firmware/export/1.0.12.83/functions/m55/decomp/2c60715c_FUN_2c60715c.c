/* FUN_2c60715c @ 0x2c60715c */

void FUN_2c60715c(undefined4 param_1,short param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int local_20;
  int local_1c;
  
  local_1c = *DAT_2c6071d4;
  sVar1 = FUN_2c6033b4(param_1,0,0x10,0);
  sVar2 = FUN_2c6033b4(param_1,0,0x11);
  sVar3 = FUN_2c6033b4(param_1,0,0x32);
  iVar4 = FUN_2c603c78(param_1,4,&local_20,0);
  iVar5 = (int)(short)(sVar1 + sVar2 + sVar3 * 2 + param_2);
  if (iVar4 == 1) {
    if (local_20 == iVar5) goto LAB_2c6071b4;
  }
  else if (iVar4 != 0) goto LAB_2c6071b4;
  FUN_2c606ca0(param_1,iVar5,0);
LAB_2c6071b4:
  if (*DAT_2c6071d4 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

