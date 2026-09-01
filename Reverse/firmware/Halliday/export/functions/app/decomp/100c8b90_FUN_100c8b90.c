/* FUN_100c8b90 @ 0x100c8b90 */

undefined4 FUN_100c8b90(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  puVar1 = DAT_100c8bf0;
  *DAT_100c8bf0 = param_2;
  FUN_10132e3c(DAT_100c8bf4,0x80000);
  iVar2 = FUN_100c5d4c(0x419,10);
  if (iVar2 != 0) {
    uVar3 = FUN_100c1fe4(iVar2 + 8,10);
    iVar4 = FUN_10132ec0(uVar3,param_1);
    *(undefined1 *)(iVar4 + 6) = 2;
    *(undefined1 *)(iVar4 + 7) = 0;
    *(undefined1 *)(iVar4 + 8) = 0;
    *(undefined1 *)(iVar4 + 9) = 0;
    iVar2 = FUN_100c756c(0x419,iVar2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  uVar3 = DAT_100c8bf4;
  *puVar1 = 0;
  FUN_10132e56(uVar3,0xfff7ffff);
  return 0xfffffffb;
}

