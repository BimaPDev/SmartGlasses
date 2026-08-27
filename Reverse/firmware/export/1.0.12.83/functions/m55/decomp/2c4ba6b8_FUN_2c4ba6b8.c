/* FUN_2c4ba6b8 @ 0x2c4ba6b8 */

undefined4 FUN_2c4ba6b8(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = DAT_2c4ba778;
  if (*DAT_2c4ba774 != '\0') {
    if (*(int *)(DAT_2c4ba778 + 0x154) << 0x13 < 0) {
      *(uint *)(DAT_2c4ba778 + 0x154) = *(uint *)(DAT_2c4ba778 + 0x154) & 0xffffefff;
      FUN_2c673b08(2);
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & 0xffdfffff;
      FUN_2c673b08(2);
      uVar2 = DAT_2c4ba77c;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & DAT_2c4ba77c;
      *(uint *)(iVar1 + 0xb8) = *(uint *)(iVar1 + 0xb8) & uVar2;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) | 0x200000;
      FUN_2c673b08(2);
      *(uint *)(iVar1 + 0x154) = *(uint *)(iVar1 + 0x154) | 0x1000;
    }
    else {
      *(uint *)(DAT_2c4ba778 + 0xb4) = *(uint *)(DAT_2c4ba778 + 0xb4) & 0xffdfffff;
      FUN_2c673b08(2);
      uVar2 = DAT_2c4ba77c;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) & DAT_2c4ba77c;
      *(uint *)(iVar1 + 0xb8) = *(uint *)(iVar1 + 0xb8) & uVar2;
      *(uint *)(iVar1 + 0xb4) = *(uint *)(iVar1 + 0xb4) | 0x200000;
    }
    *(uint *)(DAT_2c4ba778 + 0xbc) = *(uint *)(DAT_2c4ba778 + 0xbc) | 0x10;
    FUN_2c6444fc(1);
    return 0;
  }
  return 0;
}

