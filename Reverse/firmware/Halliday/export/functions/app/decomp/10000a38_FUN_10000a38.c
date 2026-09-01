/* FUN_10000a38 @ 0x10000a38 */

void FUN_10000a38(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  
  if (*(int *)(DAT_10000a6c + 0x34) == DAT_10000a6c + -0xcdda3f4) {
    return;
  }
  uVar7 = FUN_1000096c(4);
  piVar3 = DAT_10000948;
  puVar2 = DAT_10000944;
  puVar1 = DAT_10000940;
  uVar7 = uVar7 & 0xffffffe7;
  if (param_1 != 0) {
    uVar7 = uVar7 | 8;
  }
  uVar10 = *DAT_10000940;
  uVar9 = *DAT_10000944;
  *DAT_10000940 = *DAT_10000940 | 0x8000;
  iVar4 = DAT_1000094c;
  do {
  } while (-1 < *piVar3 << 0x1e);
  *puVar1 = *puVar1 & 0x3fffffff;
  *puVar1 = *puVar1 & 0xffffffcf;
  *puVar1 = *puVar1 | 0x30;
  uVar5 = DAT_10000958;
  if (*(int *)(DAT_10000950 + 0x34) == iVar4) {
    *puVar2 = DAT_10000954;
    *DAT_10000960 = uVar5;
  }
  else {
    *puVar2 = DAT_1000095c;
  }
  puVar6 = DAT_10000964;
  *DAT_10000964 = 4;
  puVar6[2] = 2;
  puVar6[-3] = 0xc0;
  puVar6[-2] = 2;
  if (*(int *)(DAT_10000950 + 0x34) == iVar4) {
    uVar8 = uVar7 >> 8;
    uVar7 = uVar7 & 0xff;
    puVar6[-9] = uVar8;
    puVar6[-9] = uVar7;
  }
  else {
    uVar8 = 0;
    puVar6[-9] = uVar7;
    puVar6[-9] = 0;
  }
  FUN_100007c0(1,uVar7,uVar8,puVar6 + -9,extraout_r3,unaff_r4);
  do {
  } while (-1 < *DAT_10000968 << 0x1f);
  *DAT_10000968 = 1;
  puVar6[-2] = 0;
  *DAT_10000940 = uVar10;
  *puVar2 = uVar9;
  return;
}

