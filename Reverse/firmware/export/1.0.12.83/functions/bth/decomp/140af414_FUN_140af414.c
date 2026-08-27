/* FUN_140af414 @ 0x140af414 */

void FUN_140af414(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint uVar3;
  uint extraout_r1_00;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined4 local_2c;
  undefined2 local_28;
  uint local_24;
  
  pcVar1 = DAT_140af4f8;
  local_24 = *DAT_140af4dc;
  if (*DAT_140af4f8 == '\0') {
    FUN_1402a6e8(4,0x68,DAT_140af4ec,DAT_140af4e8,DAT_140af4f4,DAT_140af4e0,DAT_140af4f8);
    uVar2 = 0xff;
    uVar3 = extraout_r1_00;
  }
  else {
    FUN_1402a6e8(4,0x56,DAT_140af4ec,DAT_140af4e8,DAT_140af4e4,DAT_140af4e0,DAT_140af4f8);
    iVar8 = *DAT_140af4f0;
    uVar9 = *(uint *)(iVar8 + 0x16c);
    uVar3 = extraout_r1;
    if (uVar9 == 0xffffffff) {
      uVar2 = 0xff;
    }
    else {
      if (uVar9 != 0) {
        uVar7 = 0;
        do {
          iVar5 = uVar7 * 0x118 + iVar8;
          uVar3 = *(uint *)(iVar5 + 0x174);
          local_2c = *(undefined4 *)(iVar5 + 0x170);
          local_28 = (short)uVar3;
          if (param_1 != 0) {
            pbVar6 = (byte *)(param_1 + -1);
            pbVar4 = (byte *)&local_2c;
            do {
              uVar3 = (uint)*pbVar4;
              pbVar6 = pbVar6 + 1;
              if (*pbVar6 != uVar3) goto LAB_140af49c;
              pbVar4 = pbVar4 + 1;
            } while (pbVar6 != (byte *)(param_1 + 5));
            uVar10 = FUN_140dc518(pcVar1,uVar7 * 0x118 + iVar8 + 0x18a);
            uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
            uVar2 = 0;
            if ((int)uVar10 == 0) goto LAB_140af4a6;
          }
LAB_140af49c:
          uVar7 = uVar7 + 1 & 0xff;
        } while (uVar7 < uVar9);
      }
      uVar2 = 1;
    }
  }
LAB_140af4a6:
  if ((*DAT_140af4dc ^ local_24) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar2,uVar3,*DAT_140af4dc ^ local_24,0);
}

