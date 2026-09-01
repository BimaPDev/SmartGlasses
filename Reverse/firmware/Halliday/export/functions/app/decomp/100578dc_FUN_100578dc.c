/* FUN_100578dc @ 0x100578dc */

undefined4 FUN_100578dc(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = DAT_1005791c;
  iVar4 = *DAT_1005791c;
  if (iVar4 < 2) {
    iVar3 = 0;
    do {
      iVar5 = *param_1;
      do {
        if (iVar4 <= iVar3) {
          DAT_1005791c[iVar4 * 2 + 2] = param_1[1];
          piVar1[iVar4 * 2 + 1] = iVar5;
          *piVar1 = iVar4 + 1;
          return 1;
        }
        iVar3 = 1;
      } while (DAT_1005791c[1] != iVar5);
    } while (DAT_1005791c[2] != param_1[1]);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff4;
  }
  return uVar2;
}

