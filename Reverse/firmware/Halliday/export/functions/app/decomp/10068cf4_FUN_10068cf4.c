/* FUN_10068cf4 @ 0x10068cf4 */

void FUN_10068cf4(ushort *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint extraout_r1;
  undefined4 extraout_r2;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  puVar4 = (ushort *)0x0;
  for (puVar5 = param_1 + 2; puVar5 != DAT_10068da0; puVar5 = (ushort *)(puVar5[2] + 0x2ff18000)) {
    if (uVar3 <= *puVar5) {
      if (*puVar5 <= uVar3) goto LAB_10068d50;
      break;
    }
    puVar4 = puVar5;
  }
  uVar1 = param_1[1];
  if (7 < uVar1) {
    uVar2 = *param_1;
    uVar7 = (uint)uVar2;
    puVar5 = (ushort *)(uVar7 + 0x2ff18000);
    *puVar5 = (ushort)uVar3;
    uVar3 = uVar7 + 8;
    *(undefined2 *)(uVar7 + 0x2ff18002) = 0;
    *(undefined2 *)(&DAT_2ff18004 + uVar7) = 0;
    *param_1 = (ushort)uVar3;
    param_1[1] = uVar1 - 8;
    if (uVar7 != 0) {
      if (puVar4 != (ushort *)0x0) {
        *(ushort *)(&DAT_2ff18004 + uVar7) = puVar4[2];
        puVar4[2] = uVar2;
      }
LAB_10068d50:
      do {
        uVar7 = (uint)puVar5[1];
        uVar3 = *puVar5 + 0x10;
        if (uVar7 != 0) {
          puVar5[1] = *(ushort *)(uVar7 + 0x2ff1800e);
LAB_10068d64:
          iVar6 = uVar7 + 0x2ff18000;
          FUN_1011ea70(iVar6);
          *(short *)(uVar7 + 0x2ff1800e) = (short)puVar5 + -0x8000;
          uVar3 = extraout_r1;
          param_3 = extraout_r2;
          goto LAB_10068d16;
        }
        if (uVar3 <= param_1[1]) {
          uVar7 = (uint)*param_1;
          *param_1 = *param_1 + (short)uVar3;
          param_1[1] = param_1[1] - (short)uVar3;
          goto LAB_10068d64;
        }
        puVar4 = puVar5 + 2;
        puVar5 = (ushort *)(*puVar4 + 0x2ff18000);
      } while (*puVar4 != 0);
    }
  }
  iVar6 = 0;
LAB_10068d16:
                    /* WARNING: Could not recover jumptable at 0x10068d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar6,uVar3,param_3,param_4);
  return;
}

