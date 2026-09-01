/* FUN_1005d5cc @ 0x1005d5cc */

void FUN_1005d5cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  if (param_1 == 0) {
    param_1 = FUN_10115464();
  }
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  FUN_1005d3f0(param_1,&local_24,&local_20);
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1011bade(param_1,&local_1c);
  }
  uVar8 = local_24 * local_20;
  iVar2 = FUN_1013c71a(param_1);
  iVar3 = FUN_10115464();
  uVar6 = DAT_1005d6d4;
  if (param_1 == iVar3) {
    uVar6 = DAT_1005d6d0;
  }
  if (iVar2 == 0) {
    iVar2 = DAT_1005d6d8;
  }
  uVar4 = FUN_10113584(param_1);
  FUN_10119dc2(DAT_1005d6dc,uVar6,param_1,iVar2,uVar4,local_24,uVar8 / 100,local_20,local_1c,uVar1);
  FUN_1005d448(param_1,iVar2,*(undefined1 *)(param_1 + 0xd),param_1 == iVar3);
  iVar2 = *(int *)(param_1 + 0xa0) + *(int *)(param_1 + 0x9c);
  uVar9 = FUN_10115464();
  if (param_1 == (int)uVar9) {
    iVar3 = getProcessStackPointer();
    iVar5 = FUN_1013c70e((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),iVar2);
    if (iVar5 == 0) {
      iVar3 = getProcessStackPointer();
      iVar5 = 0;
      iVar7 = iVar3;
      goto LAB_1005d6a4;
    }
    if ((*(byte *)(param_1 + 0x111) & 0x10) == 0) {
      iVar5 = 0x48;
    }
    else {
      iVar5 = 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x50);
    if ((*(byte *)(param_1 + 0x111) & 0x10) == 0) {
      iVar5 = 0x48;
    }
    else {
      iVar5 = 0;
    }
  }
  iVar7 = iVar5 + iVar3 + 0x20;
  iVar5 = iVar3;
LAB_1005d6a4:
  FUN_1005d500(iVar3,iVar7,iVar2,iVar5);
  if (*(byte *)(DAT_1005d6e0 + 3) < 0x20) {
    *(byte *)(DAT_1005d6e0 + 3) = *(byte *)(DAT_1005d6e0 + 3) + 1;
  }
  return;
}

