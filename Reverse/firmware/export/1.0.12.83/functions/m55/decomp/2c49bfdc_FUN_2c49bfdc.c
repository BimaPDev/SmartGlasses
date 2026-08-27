/* FUN_2c49bfdc @ 0x2c49bfdc */

void FUN_2c49bfdc(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_3a;
  undefined1 local_39;
  uint local_38;
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  
  piVar4 = DAT_2c49bf48;
  piVar3 = DAT_2c49bf44;
  iVar6 = DAT_2c49bf40;
  piVar2 = DAT_2c49bf3c;
  if (*(int *)(DAT_2c49bfec + 4) == 1) {
    return;
  }
  local_2c = *(undefined4 *)(DAT_2c49bf40 + 8);
  local_30 = local_30 & 0xf800 | 0x501;
  *DAT_2c49bf3c = *DAT_2c49bf3c + 1;
  iVar7 = *piVar3;
  local_24 = *DAT_2c49bf4c;
  *piVar4 = iVar6;
  local_28 = 0;
  if (iVar7 == 0) {
    iVar6 = FUN_2c4c2564(DAT_2c49bf80,0,0);
    *piVar3 = iVar6;
    FUN_2c673e28();
    FUN_2c673c48(DAT_2c49bf84);
    iVar6 = FUN_2c674658();
    uVar5 = DAT_2c49bf8c;
    uVar1 = DAT_2c49bf74;
    if (iVar6 == 0) {
      uVar1 = DAT_2c49bf78;
    }
    *DAT_2c49bf88 = (uint)(iVar6 == 0);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x365,DAT_2c49bf58,DAT_2c49bf64,uVar5,uVar1);
  }
  FUN_2c673bc8(DAT_2c49bf50,1);
  FUN_2c4c0248(0x58,1,0);
  FUN_2c6444fc(10);
  FUN_2c4c0248(0x58,1);
  FUN_2c4c0248(0x58,0,1);
  local_34 = DAT_2c49bf54;
  local_38 = 0x103;
  FUN_2c4c0370(0x58,&local_38);
  FUN_2c4bc9b4(*(undefined1 *)(iVar6 + 4),&local_30);
  iVar6 = FUN_2c49b3b8();
  if (iVar6 != 0) {
    if (*piVar2 < 2) {
      iVar6 = 9;
      FUN_2c4c0248(0x58,1,0);
      FUN_2c6444fc(10);
      do {
        iVar7 = FUN_2c49b3b8();
        if (iVar7 == 0) break;
        FUN_2c6444fc(10);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      FUN_2c4c0248(0x58,1);
      FUN_2c4c0248(0x58,0,1);
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x462,DAT_2c49bf58,DAT_2c49bf64,DAT_2c49bf7c,*piVar2);
    }
    uVar8 = FUN_2c49b3b8();
    if ((int)uVar8 != 0) {
      if (*piVar2 < 2) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x46b,DAT_2c49bfd4,DAT_2c49bfd0,DAT_2c49bfd8,*piVar2);
      }
      if ((*DAT_2c49bf4c ^ local_24) == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      stack_chk_fail(0xffffffed,(int)((ulonglong)uVar8 >> 0x20),*DAT_2c49bf4c ^ local_24,0);
    }
  }
  iVar6 = piVar4[2];
  if (iVar6 == 5) {
    local_3a = 0;
    local_39 = 0;
    local_38 = local_38 & 0xffffff00;
    FUN_2c49b2c0(0x10,0x7f);
    FUN_2c49b2c0(0x11,0x9f);
    FUN_2c49b2c0(0x12,8);
    FUN_2c49b2c0(0x13,0xcf);
    FUN_2c49b2c0(0x14,4);
    FUN_2c49b2c0(0x15,0x59);
    FUN_2c49b2c0(0x18,0x60);
    FUN_2c49b2c0(0x19,0xff);
    FUN_2c49b2c0(0x1b,0xab);
    FUN_2c49b2c0(0x1c,0);
    FUN_2c49b778(1,0);
    FUN_2c49b778(1);
    FUN_2c49b620(1);
    FUN_2c49b318(0x30,&local_3a);
    FUN_2c49b318(0x31,&local_39);
    FUN_2c49b318(0x32,&local_38);
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x30b,DAT_2c49bf58,DAT_2c49bf64,DAT_2c49bf60,DAT_2c49bf5c,local_3a,local_39,
          local_38 & 0xff);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x471,DAT_2c49bfd4,DAT_2c49bfd0,DAT_2c49bfcc,iVar6,5);
}

