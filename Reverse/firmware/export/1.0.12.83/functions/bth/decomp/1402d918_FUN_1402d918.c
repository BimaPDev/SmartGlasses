/* FUN_1402d918 @ 0x1402d918 */

undefined4 FUN_1402d918(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_1402d9d8;
  if (*DAT_1402d9d4 != '\0') {
    if (*(int *)(DAT_1402d9d8 + 0x154) << 0x13 < 0) {
      *(uint *)(DAT_1402d9d8 + 0x154) = *(uint *)(DAT_1402d9d8 + 0x154) & 0xffffefff;
      FUN_140e5908(2);
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xffdfffff;
      FUN_140e5908(2);
      uVar2 = DAT_1402d9dc;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & DAT_1402d9dc;
      *(uint *)(iVar1 + 0xb8) = *(uint *)(iVar1 + 0xb8) & uVar2;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) | 0x200000;
      FUN_140e5908(2);
      *(uint *)(iVar1 + 0x154) = *(uint *)(iVar1 + 0x154) | 0x1000;
    }
    else {
      *(uint *)(DAT_1402d9d8 + 0xb4) = *(uint *)(DAT_1402d9d8 + 0xb4) & 0xffdfffff;
      FUN_140e5908(2);
      uVar2 = DAT_1402d9dc;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & DAT_1402d9dc;
      *(uint *)(iVar1 + 0xb8) = *(uint *)(iVar1 + 0xb8) & uVar2;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) | 0x200000;
    }
    *(uint *)(DAT_1402d9d8 + 0xbc) = *(uint *)(DAT_1402d9d8 + 0xbc) | 0x10;
    FUN_140e5818(1);
    return 0;
  }
  return 0;
}

