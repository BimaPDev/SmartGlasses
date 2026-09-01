/* FUN_100595d4 @ 0x100595d4 */

void FUN_100595d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = FUN_1011acf2();
  iVar2 = DAT_10059640;
  if (param_1 != 0) {
    uVar7 = 0;
    for (uVar6 = uVar7; uVar4 = uVar6 & 0xffff, (int)uVar4 < (int)(uVar3 - 1); uVar6 = uVar6 + 1) {
      if ((int)((uint)*(byte *)((uint)*(byte *)(param_1 + uVar4) + iVar2) << 0x1c) < 0) {
        uVar5 = uVar4 + 1 & 0xffff;
        while ((uVar5 & 0xffff) < uVar3) {
          bVar1 = *(byte *)(iVar2 + (uint)*(byte *)(param_1 + uVar5));
          if ((bVar1 & 8) == 0) {
            if (uVar7 != 0) {
              FUN_1011ea38(uVar4 + 1 + param_1,param_1 + uVar5,(uVar3 + 1) - (uVar5 & 0xffff),
                           uVar5 & 0xffff,param_4);
              uVar3 = uVar3 - uVar7 & 0xffff;
              uVar7 = bVar1 & 8;
            }
            break;
          }
          uVar7 = uVar7 + 1 & 0xffff;
          uVar5 = uVar5 + 1;
        }
      }
    }
  }
  return;
}

