/* FUN_1005d448 @ 0x1005d448 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1005d448(int param_1,undefined4 param_2,undefined1 param_3,byte param_4)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_20 [2];
  
  iVar1 = DAT_1005d4c4;
  uVar4 = (uint)*(byte *)(DAT_1005d4c4 + 3);
  local_20[0] = 0;
  local_20[1] = 0;
  if (uVar4 < 0x20) {
    iVar5 = uVar4 * 0x6c;
    iVar3 = DAT_1005d4c4 + iVar5;
    *(undefined1 *)(iVar3 + 8) = 0x68;
    *(undefined1 *)(iVar3 + 9) = param_3;
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 0xfe | param_4 & 1;
    uVar2 = 0;
    if (param_1 != 0) {
      uVar2 = FUN_1011bade(param_1,iVar5 + 0xc + iVar1);
    }
    iVar3 = uVar4 * 0x6c + iVar1;
    *(undefined1 *)(iVar3 + 0xb) = uVar2;
    FUN_1005d3f0(param_1,local_20,local_20 + 1);
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) & 0xff000000 | local_20[0] & 0xffffff;
    *(char *)(iVar3 + 0x13) = (char)local_20[1];
    FUN_1011e9f8(iVar5 + 0x14 + iVar1,param_2,0x20);
    *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) & 1;
  }
  return;
}

