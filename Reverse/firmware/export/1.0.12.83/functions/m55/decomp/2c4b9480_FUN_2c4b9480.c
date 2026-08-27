/* FUN_2c4b9480 @ 0x2c4b9480 */

undefined4 FUN_2c4b9480(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  uint local_3c;
  uint local_38;
  int local_34;
  
  local_34 = *DAT_2c4b9744;
  if (param_2 == 0) {
    uVar12 = *(uint *)(param_3 + 0x14);
    if ((uVar12 & 0xc) != 0) {
      if (param_3[8] == '\x02') {
        if (*(int *)(param_3 + 0xc) != 3) {
                    /* WARNING: Subroutine does not return */
          TRACE(4,0x18c6,DAT_2c4b9d34,DAT_2c4b9d30,DAT_2c4b9d2c,DAT_2c4b9d24,*(int *)(param_3 + 0xc)
               );
        }
        *(uint *)(DAT_2c4b9d10 + 0x44) = *(uint *)(DAT_2c4b9d10 + 0x44) | 1;
      }
      else {
        if (param_3[8] != '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b9d68,DAT_2c4b9d24);
        }
        if ((*(uint *)(param_3 + 0xc) & 0xfffffffc) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b9d64,DAT_2c4b9d24);
        }
        *(uint *)(DAT_2c4b9748 + 0x44) = *(uint *)(DAT_2c4b9748 + 0x44) & 0xfffffffe;
      }
      puVar8 = DAT_2c4b977c;
      iVar13 = *(int *)(param_3 + 0xc);
      *DAT_2c4b977c = 0;
      if (iVar13 << 0x1f < 0) {
        *puVar8 = 1;
      }
      if (iVar13 << 0x1e < 0) {
        uVar12 = *(uint *)(param_3 + 0x14);
        *puVar8 = *puVar8 | 2;
      }
      else {
        uVar12 = *(uint *)(param_3 + 0x14);
      }
    }
    if ((int)(uVar12 << 0x1f) < 0) {
      cVar1 = *param_3;
      if (cVar1 == '\x10') {
        *(uint *)(DAT_2c4b9d10 + 0x44) = *(uint *)(DAT_2c4b9d10 + 0x44) & 0xfffffff3 | 4;
        uVar12 = *(uint *)(param_3 + 0x14);
      }
      else if (cVar1 == '\x18') {
        *(uint *)(DAT_2c4b9d10 + 0x44) = *(uint *)(DAT_2c4b9d10 + 0x44) & 0xfffffff3;
        uVar12 = *(uint *)(param_3 + 0x14);
      }
      else {
        if (cVar1 != ' ') {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b9d78,DAT_2c4b9d24);
        }
        *(uint *)(DAT_2c4b9748 + 0x44) = *(uint *)(DAT_2c4b9748 + 0x44) & 0xfffffff3 | 8;
        uVar12 = *(uint *)(param_3 + 0x14);
      }
    }
    if ((int)(uVar12 << 0x1e) < 0) {
      iVar16 = *(int *)(param_3 + 4);
      iVar15 = 0;
      iVar13 = 0x210f;
      piVar9 = DAT_2c4b974c;
      while (iVar16 != iVar13) {
        iVar15 = iVar15 + 1;
        if (iVar15 == 0x13) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b9d54,DAT_2c4b9d24,iVar16);
        }
        piVar9 = piVar9 + 4;
        iVar13 = *piVar9;
      }
      bVar3 = *(byte *)((int)DAT_2c4b974c + iVar15 * 0x10 + 9);
      bVar2 = *(byte *)(DAT_2c4b974c + iVar15 * 4 + 2);
      if ((int)(short)((ushort)bVar2 / (ushort)bVar3) * (int)(short)(ushort)bVar3 - (uint)bVar2 != 0
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4b9d5c,DAT_2c4b9d24,iVar16,(uint)bVar2,bVar3);
      }
                    /* WARNING: Subroutine does not return */
      TRACE(4,0x1902,DAT_2c4b9754,DAT_2c4b975c,DAT_2c4b9758,DAT_2c4b9750,iVar16);
    }
    if ((int)(uVar12 << 0x1b) < 0) {
      FUN_2c4bfdb8((byte)param_3[0x10] >> 1);
      FUN_2c4b7844();
    }
  }
  else {
    uVar12 = *(uint *)(param_3 + 0x14);
    local_3c = 0;
    if ((uVar12 & 0xc) != 0) {
      local_3c = *(uint *)(param_3 + 0xc);
      *DAT_2c4b9a58 = local_3c;
      puVar8 = DAT_2c4b9a60;
      local_38 = 0;
      if ((local_3c & 0x10000) != 0) {
        local_3c = local_3c & 0xfffeffff;
        local_38 = 0x40;
      }
      if ((int)(local_3c << 0xe) < 0) {
        local_38 = local_38 | 0x80;
        local_3c = local_3c & 0xfffdffff;
      }
      *DAT_2c4b9a5c = local_38;
      if ((*puVar8 & 0xff) != 0) {
        local_3c = local_3c & ~*DAT_2c4b9a64;
        local_38 = local_38 | *puVar8;
      }
      FUN_2c4b773c(&local_3c,&local_38,DAT_2c4b9a5c);
      uVar12 = *(uint *)(param_3 + 0x14);
    }
    uVar12 = uVar12 & 1;
    if (uVar12 != 0) {
      cVar1 = *param_3;
      if (cVar1 != '\x10') {
        if (cVar1 == '\x18') {
          uVar12 = 2;
        }
        else {
          if (cVar1 != ' ') {
                    /* WARNING: Subroutine does not return */
            FUN_2c673ca8(DAT_2c4b9d6c,DAT_2c4b9d24);
          }
          uVar12 = 4;
        }
      }
      *(uint *)(DAT_2c4b9748 + 0x40) = uVar12 | *(uint *)(DAT_2c4b9748 + 0x40) & 0xfffffff8;
    }
    puVar11 = DAT_2c4b9784;
    puVar8 = DAT_2c4b9780;
    piVar9 = DAT_2c4b9770;
    bVar3 = 0;
    uVar12 = 0;
    do {
      if ((1 << (uVar12 & 0xff) & (*DAT_2c4b9784 | *DAT_2c4b9780)) != 0) {
        bVar3 = bVar3 + 1;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 8);
    if (bVar3 < (byte)param_3[8]) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4b9d58,DAT_2c4b9d24,0x19d8,*DAT_2c4b9d20,*DAT_2c4b9780,local_38,param_3[8],
                   bVar3);
    }
    iVar13 = *(int *)(param_3 + 0x14);
    if (iVar13 << 0x1e < 0) {
      iVar13 = *(int *)(param_3 + 4);
      uVar12 = 0;
      iVar15 = 0x210f;
      piVar10 = DAT_2c4b9770;
      while (iVar13 != iVar15) {
        uVar12 = uVar12 + 1;
        if (uVar12 == 0x12) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b9d38,DAT_2c4b9d24,iVar13);
        }
        piVar10 = piVar10 + 3;
        iVar15 = *piVar10;
      }
      uVar7 = (uint)*(byte *)(DAT_2c4b9770 + uVar12 * 3 + 2);
      bVar3 = *(byte *)((int)DAT_2c4b9770 + uVar12 * 0xc + 9);
      if ((int)(short)((ushort)*(byte *)(DAT_2c4b9770 + uVar12 * 3 + 2) / (ushort)bVar3) *
          (int)(short)(ushort)bVar3 - uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4b9d60,DAT_2c4b9d24,iVar13,uVar7,(uint)bVar3);
      }
      iVar5 = FUN_2c674568();
      iVar16 = DAT_2c4b9d88;
      iVar15 = DAT_2c4b9d10;
      if ((iVar5 != 0) && (piVar9[uVar12 * 3 + 1] != DAT_2c4b9d0c)) {
        if ((-1 < *(int *)(DAT_2c4b9d10 + 0xe4) << 0x16) || (*(byte *)(DAT_2c4b9d88 + 1) != uVar12))
        {
          *(char *)(DAT_2c4b9d88 + 1) = (char)uVar12;
          *(uint *)(iVar15 + 0xe4) = *(uint *)(iVar15 + 0xe4) & 0xfffffdff;
          FUN_2c673b08(2);
          uVar6 = FUN_2c674348();
          iVar15 = DAT_2c4b9d10;
          fVar18 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
          fVar19 = (float)VectorUnsignedToFloat
                                    (*(undefined4 *)
                                      (DAT_2c4b9d14 + (uint)*(byte *)(iVar16 + 1) * 0xc + 4),
                                     (byte)(in_fpscr >> 0x16) & 3);
          if (4.0 <= fVar18 / fVar19) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = VectorFloatToUnsigned((fVar18 / fVar19) * DAT_2c4b9d18,3);
          }
          *(undefined4 *)(DAT_2c4b9d10 + 0xf0) = uVar6;
          FUN_2c673b08(2);
          *(uint *)(iVar15 + 0xe4) = *(uint *)(iVar15 + 0xe4) | 0x200;
        }
        *(uint *)(DAT_2c4b9d10 + 0xe4) =
             ((byte)param_3[8] - 1) * 0x20 & 0xff | *(uint *)(DAT_2c4b9d10 + 0xe4) & 0xffffff1f;
      }
      iVar15 = DAT_2c4b9a44;
      uVar6 = DAT_2c4b975c;
      local_3c = *DAT_2c4b9774;
      if (local_3c != 0) {
        bVar3 = FUN_2c49ad00();
        uVar12 = 1 << (uint)bVar3;
        local_3c = local_3c & ~uVar12;
        if ((uVar12 & 0x30000) == 0x10000) {
          bVar2 = 6;
        }
        else if ((uVar12 & 0x30000) == 0x20000) {
          bVar2 = 7;
        }
        else {
          bVar2 = FUN_2c4b7634(uVar12,*DAT_2c4b9774,*puVar8);
          if ((5 < bVar2) && (bVar2 = FUN_2c4b7634(uVar12,*DAT_2c4b9d1c,*puVar11), 5 < bVar2)) {
                    /* WARNING: Subroutine does not return */
            FUN_2c673ca8(DAT_2c4b9d28,DAT_2c4b9d24,(uint)bVar3,*DAT_2c4b9d20,*puVar8);
          }
        }
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x1a21,DAT_2c4b9754,uVar6,DAT_2c4b9778,bVar2,0);
      }
      *(undefined4 *)(DAT_2c4b9a44 + 0xe8) = 0;
      *(uint *)(iVar15 + 0xe4) = *(uint *)(iVar15 + 0xe4) | 0x400;
      iVar15 = FUN_2c674568();
      if (iVar15 == 0) {
        iVar15 = *(int *)(DAT_2c4b9a4c + uVar12 * 0xc + 4);
        if (iVar15 == DAT_2c4b9a50) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b9d84,DAT_2c4b9d24,iVar13);
        }
        FUN_2c4b649c(iVar15,uVar7);
        FUN_2c4b7b04((uint)bVar3 << 1);
      }
      uVar7 = *puVar8;
      cVar1 = *(char *)(DAT_2c4b9a4c + uVar12 * 0xc + 10);
      if (cVar1 == '\x03') {
        uVar17 = 0;
      }
      else if (cVar1 == '\x06') {
        uVar17 = 0x10;
      }
      else {
        if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4b9d80,DAT_2c4b9d7c);
        }
        uVar17 = 0x20;
      }
      uVar14 = 0;
      puVar11 = DAT_2c4b9a54;
      do {
        if ((1 << (uVar14 & 0xff) & uVar7) != 0) {
          *puVar11 = *puVar11 & 0xffffffcf | uVar17;
        }
        uVar14 = uVar14 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar14 != 6);
      if ((int)(uVar7 << 0x19) < 0) {
        *(uint *)(DAT_2c4b9a44 + 0x9c) = *(uint *)(DAT_2c4b9a44 + 0x9c) & 0xffffffcf | uVar17;
      }
      if ((int)(uVar7 << 0x18) < 0) {
        *(uint *)(DAT_2c4b9a44 + 0xa0) = uVar17 | *(uint *)(DAT_2c4b9a44 + 0xa0) & 0xffffffcf;
      }
      uVar7 = *puVar8;
      cVar1 = *(char *)(DAT_2c4b9a4c + uVar12 * 0xc + 0xb);
      uVar12 = 0;
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          uVar12 = 0x40;
        }
        else if (cVar1 == '\x02') {
          uVar12 = 0xc0;
        }
        else {
          if (cVar1 != '\x03') {
                    /* WARNING: Subroutine does not return */
            FUN_2c673ca8(DAT_2c4b9d50,DAT_2c4b9d4c);
          }
          uVar12 = 0x1c0;
        }
      }
      uVar17 = 0;
      puVar8 = DAT_2c4b9a54;
      do {
        if ((1 << (uVar17 & 0xff) & uVar7) != 0) {
          *puVar8 = *puVar8 & 0xfffffe3f | uVar12;
        }
        uVar17 = uVar17 + 1;
        puVar8 = puVar8 + 1;
      } while (uVar17 != 6);
      if ((int)(uVar7 << 0x19) < 0) {
        *(uint *)(DAT_2c4b9a44 + 0x9c) = *(uint *)(DAT_2c4b9a44 + 0x9c) & 0xfffffe3f | uVar12;
      }
      if ((int)(uVar7 << 0x18) < 0) {
        *(uint *)(DAT_2c4b9a44 + 0xa0) = uVar12 | *(uint *)(DAT_2c4b9a44 + 0xa0) & 0xfffffe3f;
      }
      iVar13 = *(int *)(param_3 + 0x14);
    }
    if (iVar13 << 0x1b < 0) {
      local_3c = *DAT_2c4b9a58;
      while (local_3c != 0) {
        bVar3 = FUN_2c49ad00();
        uVar12 = 1 << (uint)bVar3;
        local_3c = local_3c & ~uVar12;
        uVar4 = FUN_2c4bfe00(uVar12);
        FUN_2c4b76d0(uVar12,uVar4);
      }
    }
  }
  if (*DAT_2c4b9a48 != local_34) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0;
}

