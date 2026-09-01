/* FUN_101243ba @ 0x101243ba */

int FUN_101243ba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  undefined4 extraout_r2_00;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_10093034(0);
  iVar5 = 0;
  iVar4 = 0;
  uVar2 = extraout_r2;
  while( true ) {
    iVar3 = (int)uVar6;
    if (iVar3 == 0) break;
    iVar1 = FUN_1012468a(iVar3);
    if (*(int *)(iVar3 + 0x80) == param_1) {
      if (iVar1 == 2) {
        return iVar3;
      }
      iVar5 = iVar3;
      if (iVar1 == 4) {
        iVar4 = iVar3;
      }
    }
    uVar6 = FUN_10093034(iVar3);
    uVar2 = extraout_r2_00;
  }
  if ((iVar4 == 0) && (iVar4 = iVar5, iVar5 == 0)) {
    iVar4 = FUN_10093034(0,(int)((ulonglong)uVar6 >> 0x20),uVar2,param_4);
    return iVar4;
  }
  return iVar4;
}

