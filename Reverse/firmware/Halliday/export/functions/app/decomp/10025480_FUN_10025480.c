/* FUN_10025480 @ 0x10025480 */

void FUN_10025480(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 local_170 [3];
  undefined1 local_16d;
  undefined1 local_16c;
  byte local_16b;
  undefined4 local_168;
  undefined2 local_164;
  short local_162;
  undefined2 local_160;
  undefined1 auStack_15c [256];
  undefined4 local_5c;
  undefined1 auStack_58 [60];
  int local_1c;
  
  local_1c = *DAT_100255ac;
  iVar2 = FUN_10124372();
  iVar3 = FUN_1012437a(param_1);
  uVar7 = *(uint *)(iVar2 + 0x10);
  if (iVar3 != 7) goto LAB_10025580;
  do {
    iVar3 = *(int *)(iVar2 + 0x10);
    param_1 = &local_17c;
    uVar6 = iVar3 << 1;
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    FUN_1004337c(param_1);
    FUN_100251bc(param_1,uVar6 & 0xffff);
    iVar4 = (**(code **)(DAT_100255b0 + 0x10))(uVar7 & 0xff);
    *(undefined1 *)(iVar4 + 0x17c) = 1;
    FUN_1011ea48(local_170,0,0x114);
    local_16b = FUN_1011ea10(iVar4 + 0x38);
    if (0x7e < local_16b) {
      local_16b = 0x7e;
    }
    iVar2 = 2;
    FUN_1013d03e(auStack_15c,iVar4 + 0x38,local_16b,0x100);
    local_168 = local_17c;
    local_160 = (undefined2)uStack_174;
    local_162 = (short)((uint)uStack_178 >> 0x10);
    local_170[0] = 2;
    _local_164 = CONCAT22(local_162 + 0x76c,(short)uStack_178);
    uVar5 = _local_164;
    local_164._0_1_ = (char)uStack_178;
    _local_164 = CONCAT31(SUB43(uVar5,1),(char)local_164 + '\x01');
    local_16d = local_17c._2_1_;
    local_16c = local_17c._1_1_;
    (**(code **)(DAT_100255b4 + 0x20))(local_170);
    uVar5 = FUN_1004cf14(*(undefined4 *)(DAT_100255b8 + iVar3 * 4));
    FUN_101188d0(DAT_100255bc,uVar5,iVar3);
    FUN_1002544c();
    local_5c = 0;
    FUN_1011ea48(auStack_58,0,0x3c);
    FUN_1013d306(&local_5c,0,0x40,DAT_100255c0,iVar3);
    FUN_10052c38(2,1,&local_5c);
    while( true ) {
      do {
        if (*DAT_100255ac == local_1c) {
          return;
        }
        iVar3 = FUN_1013cdc0();
LAB_10025580:
      } while (iVar3 != 0xd);
      iVar3 = FUN_100871bc(param_1);
      if (iVar3 == 10) break;
      cVar1 = FUN_100871bc(param_1);
      if (cVar1 == '\x1b') {
        FUN_1002544c();
      }
    }
  } while( true );
}

