/* FUN_2c510790 @ 0x2c510790 */

void FUN_2c510790(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int local_1774;
  int local_1770;
  int local_1754;
  int local_1750 [64];
  int local_1650;
  undefined2 local_164c;
  char local_164a;
  undefined1 auStack_1648 [5632];
  undefined1 local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_34;
  
  local_34 = *DAT_2c510a2c;
  piVar14 = &local_1754;
  local_1650 = param_1 + 0x1dc;
  local_164c = 0;
  local_164a = '\0';
  do {
    piVar14 = piVar14 + 1;
    *piVar14 = 0;
  } while (local_1750 + 0x3f != piVar14);
LAB_2c5107d8:
  iVar2 = FUN_2c50f11c(param_1 + 0x40,&local_1754);
  if (iVar2 == 0) {
    FUN_2c62c0d8(param_1 + 0x40,local_1750,0x108);
    bVar1 = *(byte *)(param_1 + 0x40c);
    if (bVar1 != 0) {
      iVar2 = 0;
      do {
        iVar4 = iVar2 * 4;
        iVar2 = (int)(char)((char)iVar2 + '\x01');
        *(undefined4 *)(param_1 + iVar4 + 0x30c) = 0;
      } while (iVar2 < (int)(uint)bVar1);
    }
    *(undefined1 *)(param_1 + 0x40c) = 0;
    *(undefined4 *)(param_1 + 0x410) = 0;
    *(undefined4 *)(param_1 + 0x414) = 0;
    FUN_2c50f9b8(param_1);
    FUN_2c607df0(param_1);
    uVar3 = FUN_2c607588(param_1);
    if ((*DAT_2c510a2c ^ local_34) != 0) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail(uVar3,*DAT_2c510a2c ^ local_34,0);
    }
    return;
  }
  local_1770 = 0;
  puVar7 = *(undefined4 **)(local_1754 + 0x128);
  local_1774 = 0;
  puVar13 = puVar7 + 1;
  do {
    iVar2 = local_1754;
    uVar3 = FUN_2c6033b4(*puVar7,0,0x57);
    iVar11 = local_1774 * 0x94 + iVar2;
    *(undefined4 *)(iVar11 + 0x5c) = uVar3;
    iVar4 = iVar2 + local_1770;
    if (puVar7[0xb11] == local_1754) {
      if ('\0' < *(char *)(iVar11 + 0x90)) {
        iVar12 = 0;
        puVar10 = (undefined4 *)(iVar4 + -4);
        do {
          while( true ) {
            iVar6 = *(int *)(iVar11 + 0x58);
            puVar10 = puVar10 + 1;
            bVar1 = *(byte *)(iVar6 + 0x90);
            if (bVar1 != 0x24) break;
            FUN_2c62bea8();
            iVar12 = iVar12 + 1;
            *puVar10 = 0;
            if (*(char *)(iVar11 + 0x90) <= iVar12) goto LAB_2c510994;
          }
          *(undefined4 *)(iVar6 + (uint)bVar1 * 4) = *puVar10;
          iVar12 = iVar12 + 1;
          *(byte *)(iVar6 + 0x90) = bVar1 + 1;
          *puVar10 = 0;
        } while (iVar12 < *(char *)(iVar11 + 0x90));
      }
LAB_2c510994:
      *(undefined1 *)(local_1774 * 0x94 + iVar2 + 0x90) = 0;
      FUN_2c51035c(*(undefined4 *)(local_1754 + 0x128),puVar13,iVar4);
    }
    else {
      local_44 = 0;
      local_48 = (undefined1)local_1774;
      local_40 = 0;
      local_3c = 0;
      if ('\0' < *(char *)(iVar11 + 0x90)) {
        iVar12 = 0;
        piVar14 = (int *)(iVar4 + -4);
        do {
          piVar14 = piVar14 + 1;
          iVar9 = *piVar14;
          FUN_2c62c0d8(auStack_1648 + local_40 * 4,iVar9 + 8,*(int *)(iVar9 + 4) << 2);
          local_40 = local_40 + *(int *)(iVar9 + 4);
          local_3c = local_3c + *(int *)(iVar9 + 4);
          local_44 = local_44 + *(int *)(iVar9 + 4);
          iVar6 = *(int *)(iVar11 + 0x58);
          bVar1 = *(byte *)(iVar6 + 0x90);
          if (bVar1 == 0x24) {
            FUN_2c62bea8(iVar9);
            *piVar14 = 0;
            if ((int)*(char *)(iVar11 + 0x90) <= iVar12 + 1) break;
          }
          else {
            *(int *)(iVar6 + (uint)bVar1 * 4) = iVar9;
            *(byte *)(iVar6 + 0x90) = bVar1 + 1;
            *piVar14 = 0;
            if ((int)*(char *)(iVar11 + 0x90) <= iVar12 + 1) break;
          }
          iVar12 = iVar12 + 1;
        } while( true );
      }
      *(undefined1 *)(local_1774 * 0x94 + iVar2 + 0x90) = 0;
      FUN_2c51035c(*(undefined4 *)(local_1754 + 0x128),auStack_1648,iVar4);
    }
    local_1770 = local_1770 + 0x94;
    puVar13 = puVar13 + 0x585;
    if (local_1774 != 0) break;
    local_1774 = 1;
  } while( true );
  uVar5 = (uint)(byte)local_164c;
  uVar8 = uVar5 + 1 & 0x3f;
  if (local_164c._1_1_ != uVar8) {
    local_164c = CONCAT11(local_164c._1_1_,(char)uVar8);
    local_164a = local_164a + '\x01';
    local_1750[uVar5] = local_1754;
  }
  goto LAB_2c5107d8;
}

