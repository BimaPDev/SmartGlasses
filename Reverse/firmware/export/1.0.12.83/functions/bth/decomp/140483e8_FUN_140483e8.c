/* FUN_140483e8 @ 0x140483e8 */

void FUN_140483e8(void)

{
  undefined2 uVar1;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = DAT_1404849c;
  uVar4 = DAT_14048498;
  iVar3 = DAT_1404848c;
  pbVar2 = DAT_14048488;
  uVar9 = (uint)*DAT_14048488;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      while (-1 < ((int)uVar9 >> (uVar10 & 0xff)) << 0x1f) {
        uVar10 = uVar10 + 1;
        if (uVar10 == 8) goto joined_r0x14048484;
      }
      uVar1 = *(undefined2 *)(iVar3 + uVar10 * 2);
      iVar6 = FUN_14096b4c(uVar1);
      if ((iVar6 != 0) && (iVar7 = FUN_140959dc(), iVar7 == 2)) {
        uVar8 = FUN_140959dc(iVar6);
        FUN_1402a6e8(4,0xd0,DAT_14048490,uVar5,uVar4,uVar8);
        iVar6 = FUN_140959e4(uVar1);
        FUN_1402a6e8(4,0xd2,DAT_14048490,uVar5,DAT_14048494,iVar6);
        if (iVar6 != 0x13) {
          uVar9 = (uint)*pbVar2 & ~(1 << (uVar10 & 0xff));
          *pbVar2 = (byte)uVar9;
          break;
        }
      }
      uVar10 = uVar10 + 1;
      uVar9 = (uint)*pbVar2;
    } while (uVar10 != 8);
joined_r0x14048484:
    if (uVar9 != 0) {
      thunk_FUN_140a20f4();
      return;
    }
  }
  return;
}

