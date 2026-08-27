/* FUN_2c63339c @ 0x2c63339c */

void FUN_2c63339c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  short local_20;
  short local_1e;
  int local_1c;
  
  local_1c = *DAT_2c6334c4;
  if (*(int *)(param_1 + 0x44) == param_2) goto LAB_2c63345c;
  pcVar5 = (code *)*DAT_2c6334c8;
  FUN_2c63736c(*(undefined4 *)(param_1 + 0x24));
  iVar2 = (*pcVar5)();
  if (param_2 < 0) {
    param_2 = param_2 + iVar2;
  }
  if ((param_2 <= iVar2) && (param_2 != 0x7fff)) {
    iVar2 = param_2;
  }
  *(int *)(param_1 + 0x44) = iVar2;
  FUN_2c608c7c(param_1);
  iVar3 = FUN_2c6033b4(param_1,0,0x57);
  FUN_2c637370(*(undefined4 *)(param_1 + 0x24),iVar2,&local_20);
  sVar1 = *(short *)(iVar3 + 8);
  iVar3 = (int)local_1e;
  iVar2 = FUN_2c604a44(param_1);
  if (iVar3 < iVar2) {
    FUN_2c6051c4(param_1,(int)local_1e,1);
  }
  iVar2 = FUN_2c607440(param_1);
  iVar4 = (int)local_1e;
  iVar3 = FUN_2c604a44(param_1);
  if (iVar2 < (iVar4 + sVar1) - iVar3) {
    FUN_2c6051c4(param_1,(int)(short)((local_1e + sVar1) - (short)iVar2),1);
    iVar3 = (int)local_20;
    iVar2 = FUN_2c605068(param_1);
    if (iVar3 < iVar2) goto LAB_2c633482;
  }
  else {
    iVar3 = (int)local_20;
    iVar2 = FUN_2c605068(param_1);
    if (iVar3 < iVar2) {
LAB_2c633482:
      FUN_2c60518c(param_1,(int)local_20,1);
    }
  }
  iVar2 = FUN_2c607404(param_1);
  iVar4 = (int)local_20;
  iVar3 = FUN_2c605068(param_1);
  if (iVar2 < (iVar4 + sVar1) - iVar3) {
    FUN_2c60518c(param_1,(int)(short)((sVar1 + local_20) - (short)iVar2),1);
  }
  *(short *)(param_1 + 0x40) = local_20;
  FUN_2c632e9c(param_1);
  FUN_2c632f4c(param_1);
LAB_2c63345c:
  if (*DAT_2c6334c4 != local_1c) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

