/* FUN_2c13b1a4 @ 0x2c13b1a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c13b1a4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_r12;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar6 = _DAT_2c13b1d8 + 0xc;
  puVar5 = _DAT_2c13b1d8;
  do {
    puVar7 = in_r12 + 4;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    uVar4 = puVar5[3];
    puVar8 = puVar5 + 4;
    puVar5 = puVar5 + 4;
    *in_r12 = uVar1;
    in_r12[1] = uVar2;
    in_r12[2] = uVar3;
    in_r12[3] = uVar4;
    in_r12 = puVar7;
  } while (puVar8 != puVar6);
  *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
  return;
}

