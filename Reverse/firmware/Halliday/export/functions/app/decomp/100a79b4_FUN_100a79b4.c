/* FUN_100a79b4 @ 0x100a79b4 */

undefined4 FUN_100a79b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = DAT_100a79fc;
  iVar4 = *DAT_100a79f8;
  if (iVar4 == 0) {
    uVar3 = 0xfffffffd;
  }
  else {
    if (*(int *)(iVar4 + 0x14) == 0) {
      *(char *)(iVar4 + 0x24) = *(char *)(iVar4 + 0x24) + '\x01';
      iVar2 = DAT_100a7a00;
      *(undefined4 *)(iVar4 + 0x14) = param_1;
      FUN_100a5b78((iVar1 - iVar2) * 0x20 & 0xff00U | 0xa90032,DAT_100a7a08,DAT_100a7a04,param_1,0,
                   param_2,param_3);
    }
    uVar3 = 0;
  }
  return uVar3;
}

