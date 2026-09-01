/* FUN_1006d0f8 @ 0x1006d0f8 */

undefined4 FUN_1006d0f8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar1 = DAT_1006d12c;
  if ((*(int *)(iVar2 + 0x14) == 0) || (uVar1 = DAT_1006d130, *(char *)(iVar2 + 0x19) == -1)) {
    FUN_10119dc2(uVar1);
    uVar1 = 0xffffffff;
  }
  else {
    (**(code **)(*(int *)(*(int *)(iVar2 + 0x14) + 8) + 0x18))();
    FUN_10119dc2(DAT_1006d134,*(undefined1 *)(iVar2 + 0x19));
    uVar1 = 0;
    *(undefined1 *)(iVar2 + 0x19) = 0xff;
  }
  return uVar1;
}

