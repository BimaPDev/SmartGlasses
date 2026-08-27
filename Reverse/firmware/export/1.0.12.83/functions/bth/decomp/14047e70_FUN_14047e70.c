/* FUN_14047e70 @ 0x14047e70 */

void FUN_14047e70(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  
  FUN_1402a6e8(4,0x74,DAT_14047ee0,DAT_14047edc,DAT_14047ed8);
  uVar5 = DAT_14047ef0;
  iVar4 = DAT_14047eec;
  pbVar3 = DAT_14047ee4;
  uVar2 = DAT_14047ee0;
  uVar1 = DAT_14047edc;
  uVar6 = (uint)*DAT_14047ee8;
  if (*DAT_14047ee4 != uVar6) {
    do {
      uVar7 = uVar6 + 1 & 0xff;
      FUN_1402a6e8(4,0x78,uVar2,uVar1,uVar5,uVar6,*(undefined2 *)(iVar4 + uVar6 * 4),
                   *(undefined2 *)(iVar4 + uVar6 * 4 + 2));
      if (uVar7 == 5) {
        uVar7 = 0;
      }
      uVar6 = uVar7;
    } while (*pbVar3 != uVar7);
  }
  return;
}

