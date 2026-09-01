/* FUN_10016690 @ 0x10016690 */

void FUN_10016690(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = *DAT_10016704;
  uVar5 = (uint)*(byte *)(param_1 + 0x3b);
  iVar2 = param_1;
  if (param_2 == 0) goto LAB_100166d2;
  iVar2 = FUN_100831e8(*(byte *)(param_1 + 0x3c) - 1,*(ushort *)(param_1 + 0x3e) - 0x76c,param_3,0,
                       param_1,iVar4,param_3);
  if ((int)uVar5 < iVar2) {
    cVar3 = *(char *)(param_1 + 0x3b) + '\x01';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0x3b) = cVar3;
  while (*DAT_10016704 != iVar4) {
    iVar2 = FUN_1013cdc0();
LAB_100166d2:
    if (uVar5 < 2) {
      uVar1 = FUN_100831e8(*(byte *)(iVar2 + 0x3c) - 1,*(ushort *)(iVar2 + 0x3e) - 0x76c);
      *(undefined1 *)(param_1 + 0x3b) = uVar1;
    }
    else {
      uVar5 = uVar5 - 1;
      *(char *)(iVar2 + 0x3b) = (char)uVar5;
    }
  }
  FUN_100173e4(param_1,1);
  return;
}

