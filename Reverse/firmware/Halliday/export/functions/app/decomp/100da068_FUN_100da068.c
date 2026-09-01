/* FUN_100da068 @ 0x100da068 */

void FUN_100da068(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int local_c;
  
  iVar3 = *param_1;
  local_c = param_1[2];
  iVar1 = FUN_1013655c(iVar3);
  if (iVar1 == 1) {
    FUN_1013653e(iVar3,0);
    iVar1 = thunk_FUN_1013650a();
    if (iVar3 == iVar1) {
      pcVar4 = *(code **)*DAT_100da0a0;
      uVar2 = FUN_10131c1c();
      (*pcVar4)(uVar2,7,&local_c);
    }
  }
  return;
}

