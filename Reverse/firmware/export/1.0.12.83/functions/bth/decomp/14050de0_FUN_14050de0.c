/* FUN_14050de0 @ 0x14050de0 */

void FUN_14050de0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = FUN_1404a1b4();
  uVar3 = DAT_14050e30;
  uVar2 = DAT_14050e28;
  uVar1 = DAT_14050e24;
  if (iVar4 != 0) {
    *(char *)(DAT_14050e2c + 0x143) = (char)param_1;
    FUN_1402a6e8(4,0x352,DAT_14050e34,uVar3,uVar2,uVar1,param_1);
    FUN_1404890c(*(undefined4 *)(iVar4 + 0xd4));
    iVar4 = FUN_1404a1b4(param_1);
    *(undefined1 *)(iVar4 + 0xfd) = 0xfe;
  }
  return;
}

