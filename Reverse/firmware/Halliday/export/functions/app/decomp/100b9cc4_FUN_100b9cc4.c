/* FUN_100b9cc4 @ 0x100b9cc4 */

uint FUN_100b9cc4(char param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte local_11;
  
  iVar1 = DAT_100b9d1c;
  uVar4 = 0;
  uVar3 = *(uint *)(DAT_100b9d1c + 8);
  uVar2 = *(uint *)(DAT_100b9d1c + 0xc);
  do {
    uVar4 = uVar4 << 1;
    if (uVar3 < 0x1000000) {
      *(uint *)(iVar1 + 8) = uVar3 << 8;
      *(uint *)(iVar1 + 0xc) = uVar2 << 8;
      FUN_100b940c(&local_11);
      uVar3 = *(uint *)(iVar1 + 8);
      uVar2 = (uint)local_11 | *(uint *)(iVar1 + 0xc);
      *(uint *)(iVar1 + 0xc) = uVar2;
    }
    uVar3 = uVar3 >> 1;
    param_1 = param_1 + -1;
    *(uint *)(iVar1 + 8) = uVar3;
    if (uVar3 <= uVar2) {
      uVar2 = uVar2 - uVar3;
      *(uint *)(iVar1 + 0xc) = uVar2;
      uVar4 = uVar4 | 1;
    }
  } while (param_1 != '\0');
  return uVar4;
}

