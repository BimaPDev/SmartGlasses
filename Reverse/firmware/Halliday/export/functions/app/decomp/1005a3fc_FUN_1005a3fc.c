/* FUN_1005a3fc @ 0x1005a3fc */

undefined4 FUN_1005a3fc(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_3c [24];
  
  if ((param_2 == 0) || (iVar2 = FUN_1011b2c8(param_3), iVar2 == 0)) {
    uVar7 = 3;
  }
  else {
    iVar9 = 0;
    uVar7 = 2;
    iVar2 = 0;
    while( true ) {
      iVar6 = iVar2 + 1;
      piVar4 = (int *)FUN_1005955c(param_2,iVar2,auStack_3c);
      if (piVar4 == (int *)0x0) break;
      iVar5 = FUN_1011a45e(param_3,*piVar4,0);
      iVar2 = iVar6;
      if (iVar5 == 0) {
        iVar5 = *piVar4;
        iVar6 = *(int *)(param_1 + 8);
        if (iVar5 == 0) {
          uVar8 = 0;
        }
        else {
          uVar1 = FUN_1011ea10(iVar5);
          uVar8 = (uint)uVar1;
        }
        if (0x100 < *(ushort *)(iVar6 + 0x40) + 1 + uVar8) {
          FUN_10059990(param_1,4,DAT_1005a4e4,param_3);
          uVar7 = 1;
          break;
        }
        iVar3 = FUN_1013d44e(iVar6 + 0x142,param_3);
        if (iVar3 == 0) {
          uVar7 = 2;
          break;
        }
        uVar1 = FUN_1011ea10();
        FUN_1011ea38(iVar3 + uVar8 + 1,iVar3,uVar1 + 1);
        FUN_1011ea40(iVar3,iVar5,uVar8);
        *(undefined1 *)(iVar3 + uVar8) = 0x20;
        iVar9 = iVar9 + 1;
        *(short *)(iVar6 + 0x40) = (short)uVar8 + *(short *)(iVar6 + 0x40) + 1;
        uVar7 = 0;
      }
    }
    if (iVar9 != 0) {
      FUN_1011ad5e(*(int *)(param_1 + 8) + 0x142,*(int *)(param_1 + 8) + 0x40,param_3);
    }
  }
  return uVar7;
}

