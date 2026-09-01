/* FUN_1007a604 @ 0x1007a604 */

void FUN_1007a604(uint param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar4 = FUN_1007a5c8();
  iVar2 = DAT_1007a690;
  if (iVar4 == 0) {
    iVar4 = *(byte *)(DAT_1007a690 + 0xd) + 0xd;
    if (param_2 - 4U < 2) {
      iVar5 = FUN_1007a4b0(param_1);
      uVar6 = (uint)*(byte *)(iVar2 + ((iVar4 - iVar5) % 0xd & 0xffU));
      if ((0 < (int)(param_1 - uVar6)) && (param_1 = uVar6 + 1 & 0xff, 99 < param_1)) {
        param_1 = 100;
      }
      if (param_1 < *(byte *)(iVar2 + 0x10)) {
        param_1 = (uint)*(byte *)(iVar2 + 0x10);
      }
    }
    else {
      iVar5 = FUN_1007a4dc();
      bVar1 = *(byte *)(iVar2 + ((iVar4 - iVar5) % 0xd & 0xffU));
      if (0 < (int)(bVar1 - param_1)) {
        param_1 = (uint)(byte)(bVar1 - 1);
      }
      if (*(byte *)(iVar2 + 0x10) <= param_1) {
        param_1 = (uint)*(byte *)(iVar2 + 0x10);
      }
    }
    bVar1 = *(byte *)(iVar2 + 0xd);
    *(char *)(iVar2 + (uint)bVar1) = (char)param_1;
    *(char *)(iVar2 + 0xd) = (char)((bVar1 + 1) % 0xd);
    uVar3 = FUN_1007a568();
    *(undefined1 *)(iVar2 + 0x10) = uVar3;
  }
  return;
}

