/* FUN_100a7ab8 @ 0x100a7ab8 */

undefined4 FUN_100a7ab8(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_100a7b18;
  iVar4 = *DAT_100a7b18;
  if (iVar4 == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    if (param_1 == *(int *)(iVar4 + 0x18)) {
      iVar3 = 0;
    }
    else {
      if (param_1 != *(int *)(iVar4 + 0x1c)) {
        return 0xfffffffa;
      }
      iVar3 = 1;
    }
    *(undefined4 *)(iVar4 + (iVar3 + 6) * 4) = 0;
    FUN_100a5b78((DAT_100a7b1c - DAT_100a7b20) * 0x20 & 0xff00U | 0x10a0032,DAT_100a7b28,
                 DAT_100a7b24,param_1,iVar3,param_2);
    uVar2 = 0;
    *(char *)(*piVar1 + 0x25) = *(char *)(*piVar1 + 0x25) + -1;
  }
  return uVar2;
}

