/* FUN_100a7a50 @ 0x100a7a50 */

undefined4 FUN_100a7a50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *DAT_100a7aa4;
  if (iVar3 == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    iVar4 = 0;
    if (*(int *)(iVar3 + 0x18) != 0) {
      if (*(int *)(iVar3 + 0x1c) != 0) {
        return 0xfffffff5;
      }
      iVar4 = 1;
    }
    *(undefined4 *)(iVar3 + (iVar4 + 6) * 4) = param_1;
    iVar1 = DAT_100a7aa8;
    *(char *)(iVar3 + 0x25) = *(char *)(iVar3 + 0x25) + '\x01';
    FUN_100a5b78((iVar1 - DAT_100a7aac) * 0x20 & 0xff00U | 0xf70032,DAT_100a7ab4,DAT_100a7ab0,
                 param_1,iVar4,param_2);
    uVar2 = 0;
  }
  return uVar2;
}

