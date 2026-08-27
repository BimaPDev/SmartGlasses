/* FUN_14067b54 @ 0x14067b54 */

undefined4 FUN_14067b54(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short sVar5;
  
  if (param_4 == 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(param_4 + 4);
  }
  if (((*(short *)(param_3 + 2) == *(short *)(param_2 + 0x28)) &&
      (*(short *)(param_3 + 4) == *(short *)(param_2 + 0x2a))) &&
     (*(short *)(param_2 + 0x30) == sVar5)) {
    if (param_4 == 0) {
      iVar4 = *(int *)(param_2 + 0x24);
      iVar2 = 0;
      if (iVar4 != 0) goto LAB_14067b90;
    }
    else {
      iVar4 = *(int *)(param_2 + 0x24);
      iVar2 = param_4 + *(ushort *)(param_4 + 6) + 0x30;
      if (iVar4 == 0) {
        iVar1 = 0;
      }
      else {
LAB_14067b90:
        iVar1 = *(ushort *)(iVar4 + 6) + 0x30 + iVar4;
      }
      iVar2 = FUN_140db784(iVar2,iVar1,sVar5,iVar2,param_4);
      if (iVar2 != 0) goto LAB_14067b68;
    }
    FUN_140736fc(iVar4,sVar5);
    uVar3 = 0;
    *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) + sVar5;
  }
  else {
LAB_14067b68:
    uVar3 = 0x4c;
  }
  FUN_1406d250(param_1,param_2);
  return uVar3;
}

