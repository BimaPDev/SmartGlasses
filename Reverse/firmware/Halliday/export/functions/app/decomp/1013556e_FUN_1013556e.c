/* FUN_1013556e @ 0x1013556e */

ushort FUN_1013556e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  
  if (*(int *)(param_1 + 0xbc) == 0) {
    iVar1 = FUN_100e09f8(0x20,*(undefined1 *)(param_1 + 8),param_1 + 0x90,0,param_1);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (iVar1 == 0) {
      uVar2 = FUN_100e09f8(4,*(undefined1 *)(param_1 + 8),param_1 + 0x90);
      *(undefined4 *)(param_1 + 0xbc) = uVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 0xbc);
  uVar3 = 0;
  if ((iVar1 != 0) &&
     (uVar3 = *(ushort *)(iVar1 + 0xe) & 0x24, (*(ushort *)(iVar1 + 0xe) & 0x24) != 0)) {
    if (*(byte *)(param_1 + 10) < 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = *(byte *)(iVar1 + 0xd) & 1;
    }
  }
  return uVar3;
}

