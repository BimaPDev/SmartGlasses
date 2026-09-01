/* FUN_100bb038 @ 0x100bb038 */

int FUN_100bb038(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = DAT_100bb0d0;
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    FUN_1011ea48(param_1,0,param_2 * 0x28,param_4,param_4);
    iVar7 = 0;
    iVar6 = iVar1;
    do {
      iVar3 = iVar7 * 0x48 + iVar1;
      uVar4 = (uint)*(byte *)(iVar3 + 0x10);
      if (((int)(uVar4 << 0x1f) < 0) && ((int)(uVar4 << 0x1e) < 0)) {
        iVar8 = param_1 + iVar5 * 0x28;
        *(undefined4 *)(param_1 + iVar5 * 0x28) = *(undefined4 *)(iVar6 + 8);
        *(undefined2 *)(iVar8 + 4) = *(undefined2 *)(iVar6 + 0xc);
        uVar2 = *(undefined4 *)(iVar6 + 0x14);
        *(byte *)(iVar8 + 6) =
             *(byte *)(iVar8 + 6) & 0xfe | (byte)((*(byte *)(iVar3 + 0x10) & 0xf) >> 3);
        uVar4 = FUN_1011ea10(uVar2);
        if (uVar4 < 0x21) {
          uVar2 = FUN_1011ea10(*(undefined4 *)(iVar6 + 0x14));
        }
        else {
          uVar2 = 0x20;
        }
        iVar5 = iVar5 + 1;
        FUN_1011ea40(iVar8 + 7,*(undefined4 *)(iVar6 + 0x14),uVar2);
        if (param_2 <= iVar5) {
          return iVar5;
        }
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x48;
    } while (iVar7 != 5);
  }
  return iVar5;
}

