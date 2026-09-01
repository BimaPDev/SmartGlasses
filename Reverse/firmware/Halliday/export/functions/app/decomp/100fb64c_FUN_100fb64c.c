/* FUN_100fb64c @ 0x100fb64c */

int FUN_100fb64c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_100f5ea4();
  if (iVar1 == 0) {
    return 7;
  }
  iVar2 = FUN_100fa1e4(iVar1,param_1);
  if (iVar2 == 0) {
    uVar4 = *param_1;
    iVar1 = DAT_100fb68c;
    piVar3 = DAT_100fb690;
    do {
      FUN_100f9ffc(uVar4,iVar1);
      piVar3 = piVar3 + 1;
      iVar1 = *piVar3;
    } while (iVar1 != 0);
    return 0;
  }
  thunk_FUN_100e833c(iVar1);
  return iVar2;
}

