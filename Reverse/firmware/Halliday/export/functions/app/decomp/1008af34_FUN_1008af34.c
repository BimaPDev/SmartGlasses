/* FUN_1008af34 @ 0x1008af34 */

int FUN_1008af34(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 4) != 0) {
    param_1 = FUN_10126fa2();
  }
  iVar2 = FUN_1012b06a(DAT_1008af88);
  uVar1 = DAT_1008af88;
  do {
    if (iVar2 == 0) {
      FUN_10094174(2,DAT_1008af94,0x119,DAT_1008af90,DAT_1008af8c,param_2);
      return 0;
    }
    for (iVar3 = 0; *(int *)(iVar2 + 0x24) != iVar3; iVar3 = iVar3 + 1) {
      if (*(int *)(*(int *)(iVar2 + 0xc) + iVar3 * 4) == param_1) {
        return iVar2;
      }
    }
    iVar2 = FUN_1012b076(uVar1,iVar2,*(int *)(iVar2 + 0x24),iVar3,iVar4);
  } while( true );
}

