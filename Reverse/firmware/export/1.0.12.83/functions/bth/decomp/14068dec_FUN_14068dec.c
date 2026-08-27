/* FUN_14068dec @ 0x14068dec */

void FUN_14068dec(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined1 uVar14;
  uint local_48;
  uint local_3c;
  ushort local_2e;
  uint local_2c;
  
  local_2c = *DAT_14069038;
  iVar13 = *(int *)(DAT_1406903c + (param_1 + 0x22) * 4);
  bVar1 = *(byte *)(param_3 + 0x11);
  uVar6 = (uint)*(ushort *)(param_3 + 0x14);
  uVar11 = (uint)*(ushort *)(iVar13 + 0x50);
  uVar7 = bVar1 & 7;
  local_2e = *(ushort *)(iVar13 + 0x50);
  if ((int)((uint)bVar1 << 0x1d) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x42,DAT_14069048,0x478,DAT_14069044);
  }
  uVar2 = *(ushort *)(DAT_14069040 + uVar7 * 2);
  if (*(byte *)(param_3 + 0x10) == 0xff) {
    if (param_2 != 0xff) {
      uVar4 = 1 << (param_2 & 0xff);
      uVar11 = uVar4 & 0xffff;
      local_2e = (ushort)uVar4;
    }
    bVar8 = *(byte *)(iVar13 + 0x54);
    param_2 = (uint)bVar8 << 0x1e;
    if (-1 < (int)param_2) {
LAB_14068fec:
      bVar9 = *(char *)(iVar13 + 0x56) + 1;
      uVar10 = (uint)bVar9;
      if (9 < uVar10) {
        bVar8 = 0;
      }
      *(byte *)(iVar13 + 0x56) = bVar9;
      uVar4 = uVar11;
      if (9 < uVar10) {
        *(byte *)(iVar13 + 0x56) = bVar8;
      }
      goto LAB_14068e44;
    }
    uVar4 = uVar11 & 0xfffffffe;
    bVar8 = 0;
    if (uVar4 == 0) goto LAB_14068fec;
    bVar8 = *(char *)(iVar13 + 0x56) + 1;
    uVar10 = (uint)bVar8;
    local_2e = (ushort)uVar4;
    *(byte *)(iVar13 + 0x56) = bVar8;
    if (9 < uVar10) {
      *(undefined1 *)(iVar13 + 0x56) = 0;
    }
LAB_14068e48:
    uVar11 = 0xff;
    local_3c = 0;
    local_48 = 0;
    do {
      while( true ) {
        uVar14 = (undefined1)uVar11;
        uVar10 = -(1 << (uVar10 & 0xff)) & uVar4;
        if (uVar10 == 0) {
          bVar9 = (byte)uVar4;
          bVar8 = (byte)(uVar4 >> 8);
          uVar4 = (uint)(byte)((((((((bVar9 & 1) << 1 | bVar9 >> 1 & 1) << 1 | bVar9 >> 2 & 1) << 1
                                  | bVar9 >> 3 & 1) << 1 | bVar9 >> 4 & 1) << 1 | bVar9 >> 5 & 1) <<
                                1 | bVar9 >> 6 & 1) << 1 | bVar9 >> 7) << 0x18 |
                  (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1) << 1
                                  | bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) <<
                                1 | bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 0x10;
        }
        else {
          bVar9 = (byte)uVar10;
          bVar8 = (byte)(uVar10 >> 8);
          uVar4 = (uint)(byte)((((((((bVar9 & 1) << 1 | bVar9 >> 1 & 1) << 1 | bVar9 >> 2 & 1) << 1
                                  | bVar9 >> 3 & 1) << 1 | bVar9 >> 4 & 1) << 1 | bVar9 >> 5 & 1) <<
                                1 | bVar9 >> 6 & 1) << 1 | bVar9 >> 7) << 0x18 |
                  (uint)(byte)((((((((bVar8 & 1) << 1 | bVar8 >> 1 & 1) << 1 | bVar8 >> 2 & 1) << 1
                                  | bVar8 >> 3 & 1) << 1 | bVar8 >> 4 & 1) << 1 | bVar8 >> 5 & 1) <<
                                1 | bVar8 >> 6 & 1) << 1 | bVar8 >> 7) << 0x10;
        }
        uVar10 = LZCOUNT(uVar4);
        iVar12 = *(int *)(iVar13 + uVar10 * 4);
        param_2 = (uint)*(byte *)((int)&local_2e + (uVar10 >> 3)) & ~(1 << (uVar10 & 7));
        *(char *)((int)&local_2e + (uVar10 >> 3)) = (char)param_2;
        if ((iVar12 == 0) ||
           (param_2 = (uint)*(ushort *)(iVar12 + 0xe), (*(ushort *)(iVar12 + 0xe) & uVar2) != 0))
        break;
        uVar4 = FUN_14071620(param_1,param_2 & 0x3f);
        param_2 = (uint)*(ushort *)(iVar12 + 0xc);
        if (param_2 <= uVar4) {
          uVar4 = param_2;
        }
        uVar4 = uVar4 & 0xffff;
        if (uVar11 == 0xff) {
LAB_14068ee4:
          local_48 = uVar4;
          local_3c = param_2;
          uVar11 = uVar10;
          if (uVar6 <= uVar4) {
LAB_14068f7e:
            bVar8 = *(byte *)(param_3 + 0x11);
LAB_14068f84:
            uVar14 = (undefined1)uVar11;
            if ((int)((uint)bVar8 << 0x18) < 0) {
LAB_14068f88:
              uVar14 = (undefined1)uVar11;
              if (param_2 < param_4) break;
              goto LAB_14068f3e;
            }
            goto LAB_14068f04;
          }
        }
        else {
          if (uVar6 <= local_48) {
            if (*(char *)(param_3 + 0x11) < '\0') {
              if (uVar6 <= uVar4) {
                if (param_2 <= local_3c) goto LAB_14068f7e;
LAB_14068fa2:
                bVar8 = *(byte *)(param_3 + 0x11);
                uVar11 = uVar10;
                local_48 = uVar4;
                local_3c = param_2;
                goto LAB_14068f84;
              }
              goto LAB_14068f88;
            }
            goto LAB_14068f3e;
          }
          if (local_48 < uVar4) goto LAB_14068ee4;
          if ((-1 < *(char *)(param_3 + 0x11)) || (uVar4 < uVar6)) break;
          if (local_3c < param_2) goto LAB_14068fa2;
        }
        uVar4 = (uint)local_2e;
        param_2 = local_3c;
        if (uVar4 == 0) goto LAB_14068ef8;
      }
      uVar4 = (uint)local_2e;
    } while (uVar4 != 0);
LAB_14068ef8:
    uVar14 = (undefined1)uVar11;
    if (uVar11 != 0xff) {
      bVar8 = *(byte *)(param_3 + 0x11);
LAB_14068f04:
      if (((bVar8 != 0x20) || (uVar6 <= local_48)) ||
         (*(undefined1 *)(param_3 + 0x11) = 0x28, -1 < (int)((uint)*(byte *)(iVar13 + 0x54) << 0x1f)
         )) {
LAB_14068f3e:
        *(undefined1 *)(param_3 + 0x10) = uVar14;
        uVar3 = FUN_14064228();
        *(undefined2 *)(param_3 + 0x14) = uVar3;
        param_2 = *(uint *)(iVar13 + (uint)*(byte *)(param_3 + 0x10) * 4);
        uVar2 = uVar2 | *(ushort *)(param_2 + 0xe);
        *(ushort *)(param_2 + 0xe) = uVar2;
        if (uVar7 == 2) {
          uVar5 = 1;
          *(undefined2 *)(param_2 + 10) = *(undefined2 *)(param_3 + 0x14);
          *(ushort *)(param_2 + 0xe) = uVar2 | 0x4000;
          *(undefined1 *)(iVar13 + 0x56) = uVar14;
        }
        else {
          if ((bVar1 & 7) == 0) {
            uVar3 = *(undefined2 *)(param_3 + 0x14);
            *(ushort *)(param_2 + 0xe) = ~((ushort)~(ushort)(((uint)uVar2 << 0x11) >> 0x10) >> 1);
            *(undefined2 *)(param_2 + 8) = uVar3;
          }
          uVar5 = 1;
          *(undefined1 *)(iVar13 + 0x56) = uVar14;
        }
        goto LAB_14068f1e;
      }
    }
  }
  else {
    uVar11 = 1 << (uint)*(byte *)(param_3 + 0x10);
    local_2e = (ushort)uVar11;
    uVar10 = param_2;
    uVar4 = uVar11 & 0xffff;
LAB_14068e44:
    if (uVar4 != 0) goto LAB_14068e48;
  }
  uVar5 = 0;
LAB_14068f1e:
  if ((*DAT_14069038 ^ local_2c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc(uVar5,param_2,*DAT_14069038 ^ local_2c,0);
}

