/* FUN_10000a70 @ 0x10000a70 */

void FUN_10000a70(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int local_14;
  
  puVar6 = DAT_10000ad4;
  piVar3 = DAT_10000948;
  puVar2 = DAT_10000944;
  puVar1 = DAT_10000940;
  if (param_1 == 0) {
    uVar8 = *DAT_10000ad4;
    *DAT_10000ad8 = 0x100;
    *puVar6 = 0x3840;
    for (local_14 = 0x1e; local_14 != 0; local_14 = local_14 + -1) {
    }
    *DAT_10000adc = 0x100;
    FUN_100007c0(0x96);
    *puVar6 = uVar8;
    return;
  }
  iVar9 = DAT_10000ad0 + -0xcdda3f4;
  if (*(int *)(DAT_10000ad0 + 0x34) == iVar9) {
    uVar8 = 0x20;
    uVar7 = 1;
  }
  else {
    uVar8 = 0xf0;
    uVar7 = 6;
  }
  uVar11 = *DAT_10000940;
  uVar10 = *DAT_10000944;
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
  *DAT_10000964 = uVar7;
  puVar6[2] = 2;
  puVar6[-3] = 0xc0;
  puVar6[-2] = 2;
  if (*(int *)(DAT_10000950 + 0x34) == iVar4) {
    puVar6[-9] = 0;
    puVar6[-9] = uVar8;
  }
  else {
    puVar6[-9] = uVar8;
    puVar6[-9] = 0;
  }
  FUN_100007c0(1,uVar8,0,puVar6 + -9,iVar9);
  do {
  } while (-1 < *DAT_10000968 << 0x1f);
  *DAT_10000968 = 1;
  puVar6[-2] = 0;
  *DAT_10000940 = uVar11;
  *puVar2 = uVar10;
  return;
}

