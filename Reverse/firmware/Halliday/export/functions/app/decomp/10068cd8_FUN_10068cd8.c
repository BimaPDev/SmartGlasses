/* FUN_10068cd8 @ 0x10068cd8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10068cd8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  short sVar2;
  ushort uVar3;
  int extraout_r1;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  uint uVar8;
  
  FUN_10068b84(uRam10068cf0,0x1d,param_3,param_4,param_4);
  uVar3 = uRam00000003;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0);
  }
  software_interrupt(2);
  uVar4 = extraout_r1 + 0x1fU & 0xffffffe0;
  puVar5 = (ushort *)0x0;
  for (puVar6 = (ushort *)&DAT_00000007; puVar6 != DAT_10068da0;
      puVar6 = (ushort *)(puVar6[2] + 0x2ff18000)) {
    if (uVar4 <= *puVar6) {
      if (*puVar6 <= uVar4) goto LAB_10068d50;
      break;
    }
    puVar5 = puVar6;
  }
  if (7 < _DAT_00000005) {
    uVar8 = (uint)uRam00000003;
    _DAT_00000005 = _DAT_00000005 - 8;
    puVar6 = (ushort *)(uVar8 + 0x2ff18000);
    *puVar6 = (ushort)uVar4;
    uRam00000003 = uRam00000003 + 8;
    *(undefined2 *)(uVar8 + 0x2ff18002) = 0;
    *(undefined2 *)(&DAT_2ff18004 + uVar8) = 0;
    if (uVar8 != 0) {
      if (puVar5 != (ushort *)0x0) {
        *(ushort *)(&DAT_2ff18004 + uVar8) = puVar5[2];
        puVar5[2] = uVar3;
      }
LAB_10068d50:
      do {
        uVar4 = (uint)puVar6[1];
        if (uVar4 != 0) {
          puVar6[1] = *(ushort *)(uVar4 + 0x2ff1800e);
LAB_10068d64:
          iVar7 = uVar4 + 0x2ff18000;
          FUN_1011ea70(iVar7);
          *(short *)(uVar4 + 0x2ff1800e) = (short)puVar6 + -0x8000;
          goto LAB_10068d16;
        }
        if (*puVar6 + 0x10 <= (uint)_DAT_00000005) {
          uVar4 = (uint)uRam00000003;
          sVar2 = (short)(*puVar6 + 0x10);
          _DAT_00000005 = _DAT_00000005 - sVar2;
          uRam00000003 = uRam00000003 + sVar2;
          goto LAB_10068d64;
        }
        puVar5 = puVar6 + 2;
        puVar6 = (ushort *)(*puVar5 + 0x2ff18000);
      } while (*puVar5 != 0);
    }
  }
  iVar7 = 0;
LAB_10068d16:
                    /* WARNING: Could not recover jumptable at 0x10068d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x10068ce3)(iVar7);
  return;
}

