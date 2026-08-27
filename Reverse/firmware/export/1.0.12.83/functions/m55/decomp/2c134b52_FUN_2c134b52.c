/* FUN_2c134b52 @ 0x2c134b52 */

/* WARNING: Removing unreachable block (ram,0x2c134dba) */
/* WARNING: Removing unreachable block (ram,0x2c134daa) */
/* WARNING: Removing unreachable block (ram,0x2c134d4a) */
/* WARNING: Removing unreachable block (ram,0x2c134d6a) */
/* WARNING: Removing unreachable block (ram,0x2c134d22) */
/* WARNING: Removing unreachable block (ram,0x2c134cb2) */
/* WARNING: Removing unreachable block (ram,0x2c134cea) */
/* WARNING: Removing unreachable block (ram,0x2c134d80) */
/* WARNING: Removing unreachable block (ram,0x2c134dca) */
/* WARNING: Removing unreachable block (ram,0x2c134d3a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c134b52(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  byte *pbVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r6;
  int unaff_r7;
  bool in_ZR;
  bool in_CY;
  undefined8 uVar7;
  
  iVar5 = iRam2c134c80;
  if (!in_CY || in_ZR) {
    if (param_2 - 0xd < 2) {
      *(uint *)(iRam2c134c80 + 0x48) = *(uint *)(iRam2c134c80 + 0x48) & 0xfffffffe;
      *(uint *)(iVar5 + 0xc) = *(uint *)(iVar5 + 0xc) & 0xffff00ff;
      return 0;
    }
    *(uint *)(iRam2c134c80 + 0x48) = *(uint *)(iRam2c134c80 + 0x48) | 1;
    if (param_2 != 1) {
LAB_2c134b94:
      iVar5 = 0;
      pbVar3 = (byte *)(iRam2c134c84 + param_1 * 5);
      while (param_2 != *pbVar3) {
        iVar5 = iVar5 + 1;
        pbVar3 = pbVar3 + 1;
        if (iVar5 == 5) {
          return 3;
        }
      }
      uVar6 = (uint)*(byte *)(iRam2c134c88 + iVar5);
      goto LAB_2c134bb4;
    }
    uVar6 = 0;
    uVar2 = (param_1 & 7) << 2;
  }
  else {
    if (param_1 - 0x50 < 3) {
      if (param_2 == 1) {
        return 0;
      }
      uVar7 = FUN_2c13635c(uRam2c134c9c,param_2,param_1,param_2,param_4);
      uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
      *(int *)(int)uVar7 = (int)uVar7;
      *(undefined4 *)(extraout_r3 * 4) = unaff_r6;
      *(undefined4 *)(extraout_r3 * 2) = unaff_r4;
      *(undefined4 *)(((uint)(extraout_r3 * 2) & uVar6) * 2) = unaff_r6;
      *(undefined4 *)(unaff_r7 * 2) = unaff_r6;
      uVar2 = func_0x2c144860();
      puVar1 = _DAT_2c134dfc;
      if (uVar2 < 2) {
        *_DAT_2c134dfc = *_DAT_2c134dfc;
        *puVar1 = *puVar1;
        if (uVar6 == 1) {
          *puVar1 = *puVar1;
          return 0;
        }
        if (uVar6 == 2) {
          *puVar1 = *puVar1;
        }
        return 0;
      }
      if (uVar6 == 1) {
        uVar2 = 0x20000000;
      }
      else if (uVar6 == 2) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
      }
      *_DAT_2c134e08 = *_DAT_2c134e08 & 0xdfffffff | uVar2;
      return 0;
    }
    if (param_1 == 0x16) {
      if (param_2 == 8) {
        *(uint *)(iRam2c134c80 + 0xc) = *(uint *)(iRam2c134c80 + 0xc) & 0xf0ffffff | 0x7000000;
        return 0;
      }
LAB_2c134bfa:
      if (param_2 != 1) goto LAB_2c134b94;
      uVar6 = 0;
    }
    else {
      if (param_1 == 0x17) {
        if (param_2 == 9) {
          *(uint *)(iRam2c134c80 + 0xc) = *(uint *)(iRam2c134c80 + 0xc) & 0xfffffff | 0x70000000;
          return 0;
        }
        goto LAB_2c134bfa;
      }
      if (0x4f < param_1) {
        return 0;
      }
      if (param_2 != 1) goto LAB_2c134b94;
      uVar6 = 0;
LAB_2c134bb4:
      if (0x17 < param_1) {
        if (param_1 < 0x20) {
          uVar2 = (param_1 - 0x18 & 0xff) << 2;
          uVar6 = uVar6 << (uVar2 & 0xff);
          puVar4 = puRam2c134c8c;
        }
        else if (param_1 < 0x48) {
          uVar2 = (param_1 - 0x20 & 7) << 2;
          puVar4 = (uint *)(iRam2c134c94 + ((param_1 - 0x20 & 0xff) >> 3) * 4);
          uVar6 = uVar6 << uVar2;
        }
        else {
          uVar2 = (param_1 - 0x48 & 0xff) << 2;
          uVar6 = uVar6 << (uVar2 & 0xff);
          puVar4 = puRam2c134c98;
        }
        goto LAB_2c134bca;
      }
    }
    uVar2 = (param_1 & 7) << 2;
    uVar6 = uVar6 << uVar2;
  }
  puVar4 = (uint *)(iRam2c134c90 + (param_1 >> 3) * 4);
LAB_2c134bca:
  *puVar4 = *puVar4 & ~(0xf << (uVar2 & 0xff)) | uVar6;
  return 0;
}

