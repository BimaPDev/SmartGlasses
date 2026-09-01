/* FUN_100a7040 @ 0x100a7040 */

void FUN_100a7040(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = thunk_FUN_10115958();
  iVar3 = DAT_100a7074;
  piVar2 = DAT_100a7070;
  if ((uint)*(byte *)(DAT_100a7074 + 8) <= (uint)(iVar4 - *DAT_100a7070)) {
    iVar4 = thunk_FUN_10115958();
    uVar1 = *(undefined1 *)(iVar3 + 6);
    *piVar2 = iVar4;
    FUN_1012ddf0(iVar3,param_1,*(undefined1 *)(iVar3 + 5),*(undefined1 *)(iVar3 + 4),uVar1,param_2);
  }
  return;
}

