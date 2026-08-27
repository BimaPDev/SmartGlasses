/* FUN_2c4b8340 @ 0x2c4b8340 */

undefined4 FUN_2c4b8340(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = DAT_2c4b8390;
  if (param_2 != 0) {
    *(uint *)(DAT_2c4b8390 + 100) = *(uint *)(DAT_2c4b8390 + 100) & 0xffffffc0;
    *(uint *)(iVar1 + 100) = *(uint *)(iVar1 + 100) | 0x3f;
    *(uint *)(iVar1 + 0x80) = *(uint *)(iVar1 + 0x80) | 1;
    return 0;
  }
  *(uint *)(DAT_2c4b8390 + 0x60) = *(uint *)(DAT_2c4b8390 + 0x60) | 0x8000;
  *(uint *)(iVar1 + 0xb0) = *(uint *)(iVar1 + 0xb0) | 6;
  *(uint *)(iVar1 + 0xbc) = *(uint *)(iVar1 + 0xbc) | 1;
  FUN_2c4b6bbc();
  return 0;
}

