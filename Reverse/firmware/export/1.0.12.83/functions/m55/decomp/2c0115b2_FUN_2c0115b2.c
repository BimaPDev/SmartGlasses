/* FUN_2c0115b2 @ 0x2c0115b2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0115b2(uint param_1,int param_2,int param_3,char *param_4)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ushort uStack_26;
  int iStack_24;
  
  iStack_24 = *_DAT_2c01175c;
  if (*param_4 != '\x02') goto LAB_2c011630;
  if (param_1 < 0x5b) {
    uVar4 = 299;
    uVar7 = 300;
    uVar1 = 1 << (param_1 - 0x53 & 0xff);
    uVar3 = uVar1 & 0xffff;
    uVar2 = (ushort)uVar1;
    uVar6 = uVar2;
LAB_2c0115e4:
    uVar5 = uVar4;
    uVar8 = uVar7;
    if (param_2 != 1) goto LAB_2c0115ee;
LAB_2c01168a:
    FUN_2c008e4c(uVar7,&uStack_26);
    uStack_26 = uStack_26 & ~uVar2;
    FUN_2c008f74(uVar7);
    FUN_2c008e4c(uVar4,&uStack_26);
    uStack_26 = uStack_26 & ~(uVar6 | (ushort)(uVar3 << 8));
  }
  else {
    if (0x62 < param_1) {
      if (param_1 < 0x6b) {
        uVar4 = 0x133;
        uVar7 = 0x134;
        uVar3 = 1 << (param_1 - 99 & 0xff);
        uVar2 = (ushort)uVar3;
        uVar6 = uVar2;
      }
      else if (param_1 < 0x73) {
        uVar4 = 0x137;
        uVar7 = 0x134;
        uVar3 = 1 << (param_1 - 0x6b & 0xff);
        uVar2 = (ushort)(1 << (param_1 - 99 & 0xff));
        uVar6 = (ushort)uVar3;
      }
      else if (param_1 < 0x7b) {
        uVar4 = 0x13a;
        uVar7 = 0x13b;
        uVar3 = 1 << (param_1 - 0x73 & 0xff);
        uVar2 = (ushort)uVar3;
        uVar6 = uVar2;
      }
      else if (param_1 < 0x83) {
        uVar4 = 0x13e;
        uVar7 = 0x13b;
        uVar3 = 1 << (param_1 - 0x7b & 0xff);
        uVar2 = (ushort)(1 << (param_1 - 0x73 & 0xff));
        uVar6 = (ushort)uVar3;
      }
      else if (param_1 < 0x8b) {
        uVar4 = 0x141;
        uVar7 = 0x142;
        uVar3 = 1 << (param_1 - 0x83 & 0xff);
        uVar2 = (ushort)uVar3;
        uVar6 = uVar2;
      }
      else {
        uVar4 = 0x144;
        uVar7 = 0x142;
        uVar1 = 1 << (param_1 - 0x8b & 0xff);
        uVar2 = (ushort)(1 << (param_1 - 0x83 & 0xff));
        uVar3 = uVar1 & 0xffff;
        uVar6 = (ushort)uVar1;
      }
      goto LAB_2c0115e4;
    }
    uVar8 = 300;
    uVar7 = 300;
    uVar3 = 1 << (param_1 - 0x5b & 0xff);
    uVar5 = 0x130;
    uVar4 = 0x130;
    uVar2 = (ushort)(1 << (param_1 - 0x53 & 0xff));
    uVar6 = (ushort)uVar3;
    if (param_2 == 1) goto LAB_2c01168a;
LAB_2c0115ee:
    FUN_2c008e4c(uVar8,&uStack_26);
    uStack_26 = uStack_26 | uVar2;
    FUN_2c008f74(uVar8);
    FUN_2c008e4c(uVar5,&uStack_26);
    uVar2 = (ushort)(uVar3 << 8);
    uStack_26 = uStack_26 & ~(uVar2 | uVar6) | uVar2;
    uVar4 = uVar5;
  }
  if (param_3 != 0) {
    uStack_26 = uStack_26 | uVar6;
  }
  FUN_2c008f74(uVar4);
LAB_2c011630:
  if (*_DAT_2c01175c == iStack_24) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c0084a8();
}

