/* FUN_2c50820c @ 0x2c50820c */

undefined4 FUN_2c50820c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c63f82c();
  uVar2 = DAT_2c508260;
  if (iVar1 == 1) {
    uVar2 = registry_lookup(DAT_2c508264);
    iVar1 = FUN_2c5e33e4();
    if (iVar1 == 0xd) {
      uVar2 = registry_lookup(DAT_2c508268);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = DAT_2c508264;
    return uVar2;
  }
  if (iVar1 != 2) {
    uVar2 = registry_lookup(DAT_2c50825c);
    return uVar2;
  }
  uVar3 = registry_lookup(DAT_2c508260);
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = uVar2;
  return uVar3;
}

