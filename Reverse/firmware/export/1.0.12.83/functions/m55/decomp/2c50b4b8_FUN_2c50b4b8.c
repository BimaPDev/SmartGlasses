/* FUN_2c50b4b8 @ 0x2c50b4b8 */

void FUN_2c50b4b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1 + 0x10c;
  FUN_2c674268(iVar3,0,0x32);
  FUN_2c504998();
  iVar1 = FUN_2c504b5c();
  uVar2 = DAT_2c50b4f4;
  if (iVar1 < 2) {
    uVar2 = DAT_2c50b4f8;
  }
  uVar2 = registry_lookup(uVar2);
  FUN_2c66b4b8(iVar3,DAT_2c50b4fc,iVar1,uVar2);
  *(int *)(param_1 + 0x108) = iVar3;
  return;
}

