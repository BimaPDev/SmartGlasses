/* FUN_100a58ac @ 0x100a58ac */

undefined4 FUN_100a58ac(byte param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_100a58d0;
  if ((param_1 & *(byte *)(DAT_100a58d0 + 2)) == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    FUN_100a6128();
    uVar2 = 0;
    *(byte *)(iVar1 + 2) = *(byte *)(iVar1 + 2) & ~param_1;
  }
  return uVar2;
}

