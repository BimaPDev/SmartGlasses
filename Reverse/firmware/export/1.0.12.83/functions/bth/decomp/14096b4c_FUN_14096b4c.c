/* FUN_14096b4c @ 0x14096b4c */

undefined4 FUN_14096b4c(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_14096b7c;
  FUN_140e5148(*DAT_14096b7c,0xffffffff);
  iVar2 = FUN_1404a1b4(0);
  uVar3 = 0;
  if (*(char *)(iVar2 + 6) != '\0') {
    if (*(ushort *)(iVar2 + 8) == param_1) {
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
    }
    else {
      uVar3 = 0;
    }
  }
  FUN_140e52d8(*puVar1);
  return uVar3;
}

