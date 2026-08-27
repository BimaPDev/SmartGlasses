/* FUN_2c611e18 @ 0x2c611e18 */

void FUN_2c611e18(uint *param_1,uint param_2,int param_3,uint param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint local_1c [2];
  
  uVar11 = param_1[2];
  bVar6 = (byte)*param_1;
  sVar1 = (short)param_3;
  local_1c[0] = param_4;
  if ((bVar6 & 0x1d) == 4) {
    uVar4 = FUN_2c614f2c(bVar6 & 0x1f);
    uVar3 = (uVar4 & 0x7ff) >> 3;
    puVar8 = (undefined1 *)
             (uVar3 * (int)(short)(ushort)((*param_1 << 0xb) >> 0x15) * (int)sVar1 +
              (int)(short)(ushort)(byte)((uVar4 << 0x15) >> 0x18) * (int)(short)param_2 + uVar11);
    if (uVar3 != 0) {
      puVar5 = local_1c;
      puVar9 = puVar8;
      do {
        puVar10 = puVar9 + 1;
        *puVar9 = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar9 = puVar10;
      } while (puVar10 != puVar8 + uVar3);
      return;
    }
  }
  else {
    bVar6 = bVar6 & 0x1f;
    if (bVar6 != 5) {
      if (bVar6 == 7) {
        iVar2 = param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 7) >> 3) + ((int)param_2 >> 3) + 8;
        uVar4 = 7 - (param_2 & 7);
        *(byte *)(uVar11 + iVar2) =
             *(byte *)(uVar11 + iVar2) & ~(byte)(1 << (uVar4 & 0xff)) |
             (byte)((param_4 & 1) << (uVar4 & 0xff));
        return;
      }
      if (bVar6 == 8) {
        param_4 = param_4 & 3;
        iVar2 = 3;
        iVar7 = param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 3) >> 2) + ((int)param_2 >> 2) +
                0x10;
        uVar4 = (param_2 & 3) * -2 + 6;
      }
      else {
        if (bVar6 != 9) {
          if (bVar6 != 10) {
            return;
          }
          *(char *)(uVar11 + (int)sVar1 * (int)(short)(ushort)((*param_1 << 0xb) >> 0x15) + param_2
                   + 0x400) = (char)param_4;
          return;
        }
        param_4 = param_4 & 0xf;
        iVar2 = 0xf;
        iVar7 = param_3 * ((int)(((*param_1 & 0x1fffff) >> 10) + 1) >> 1) + ((int)param_2 >> 1) +
                0x40;
        uVar4 = (param_2 & 1) * -4 + 4;
      }
      *(byte *)(uVar11 + iVar7) =
           *(byte *)(uVar11 + iVar7) & ~(byte)(iVar2 << (uVar4 & 0xff)) |
           (byte)(param_4 << (uVar4 & 0xff));
      return;
    }
    uVar4 = FUN_2c614f2c(5);
    uVar3 = (uVar4 & 0x7ff) >> 3;
    puVar8 = (undefined1 *)
             (uVar3 * (int)(short)(ushort)((*param_1 << 0xb) >> 0x15) * (int)sVar1 +
              (int)(short)(ushort)(byte)((uVar4 << 0x15) >> 0x18) * (int)(short)param_2 + uVar11);
    if (uVar3 != 1) {
      puVar5 = local_1c;
      puVar9 = puVar8;
      do {
        puVar10 = puVar9 + 1;
        *puVar9 = (char)*puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        puVar9 = puVar10;
      } while (puVar10 != puVar8 + (uVar3 - 1));
      return;
    }
  }
  return;
}

