/* FUN_2c49d6ac @ 0x2c49d6ac */

int FUN_2c49d6ac(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  byte local_30 [4];
  int local_2c;
  
  iVar5 = DAT_2c49d998;
  local_2c = *DAT_2c49d99c;
  iVar4 = FUN_2c49c6a0(DAT_2c49d998,0,&local_49,0);
  if (iVar4 < 0) {
LAB_2c49d7d8:
    if (*DAT_2c49d99c == local_2c) {
      return iVar4;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  *(uint *)(iVar5 + 0x10) = (uint)local_49;
  if (local_49 != 0xa0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x4e2,DAT_2c49d9ac,DAT_2c49d9a8,DAT_2c49d9c8);
  }
  FUN_2c49d4c8(iVar5);
  iVar4 = FUN_2c49c6a0(iVar5,8,&local_49);
  if (-1 < iVar4) {
    if ((local_49 & 0xf0) != 0) {
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x471,DAT_2c49d9ac,DAT_2c49d9a8,DAT_2c49d9b4,8,local_49,0);
    }
    iVar4 = FUN_2c49c6a0(iVar5,0xb,&local_49);
    if (-1 < iVar4) {
      if (-1 < (char)local_49) {
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x47a,DAT_2c49d9ac,DAT_2c49d9a8,DAT_2c49d9c4,0xb,local_49,local_49 | 0x80);
      }
      uVar7 = 0xffffffc0;
      pbVar6 = DAT_2c49d9a0;
      do {
        iVar4 = FUN_2c49c6a0(iVar5,uVar7 + 0x50 & 0xff,&local_49);
        if (iVar4 < 0) goto LAB_2c49d91a;
        if ((local_49 != *pbVar6) && (2 < uVar7)) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x48e,DAT_2c49d9ac,DAT_2c49d9a8,DAT_2c49d9a4);
        }
        uVar7 = uVar7 + 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar7 != 0x10);
      iVar5 = FUN_2c49c8c4(0xb,0xe5);
      if (((-1 < iVar5) && (iVar5 = FUN_2c49c8c4(10,0x40), -1 < iVar5)) &&
         (iVar5 = FUN_2c49c8c4(0xc,200), -1 < iVar5)) {
        FUN_2c49c8c4(0xd,0x14);
      }
      uVar3 = DAT_2c49d9d0;
      uVar2 = DAT_2c49d9a8;
      iVar5 = DAT_2c49d998;
      pbVar6 = &local_49;
      local_49 = 0;
      local_48 = *DAT_2c49d9b8;
      uStack_44 = DAT_2c49d9b8[1];
      uStack_40 = DAT_2c49d9b8[2];
      uStack_3c = DAT_2c49d9b8[3];
      local_38 = DAT_2c49d9b8[4];
      uStack_34 = DAT_2c49d9b8[5];
      local_30[0] = (byte)DAT_2c49d9b8[6];
      do {
        FUN_2c6444fc(7);
        pbVar6 = pbVar6 + 1;
        bVar1 = *pbVar6;
        iVar4 = FUN_2c49c6a0(iVar5,bVar1,&local_49);
        if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x17e,DAT_2c49d9ac,uVar2,uVar3,bVar1,local_49);
        }
      } while (pbVar6 != local_30);
      iVar4 = 0;
      goto LAB_2c49d7d8;
    }
  }
LAB_2c49d91a:
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x4ea,DAT_2c49d9ac,DAT_2c49d9a8,DAT_2c49d9c0);
}

