/* FUN_2c49a4d4 @ 0x2c49a4d4 */

void FUN_2c49a4d4(int *param_1,undefined4 *param_2,undefined4 *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 unaff_r4;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr7;
  undefined4 in_cr8;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined4 *puStack_88;
  undefined4 *puStack_84;
  int iStack_80;
  
  uVar4 = param_4 >> 2;
  param_4 = param_4 & 3;
  iVar6 = param_1[2];
  iVar14 = iVar6 + 0x30;
  iVar13 = iVar6 + 0x10;
  iVar6 = iVar6 + 0x20;
  iStack_80 = *param_1;
  puStack_88 = param_2;
  puVar1 = (undefined4 *)param_1[1];
  do {
    puStack_84 = puVar1 + 4;
    uVar7 = *puVar1;
    uVar5 = puVar1[1];
    uVar10 = puVar1[2];
    uVar11 = puVar1[3];
    uVar12 = (undefined4)in_d7;
    puVar9 = param_3;
    if (uVar4 != 0) {
      uVar2 = uVar4;
      puVar8 = puStack_88;
      do {
        coprocessor_load(0xf,in_cr7,iVar13 + -0x10);
        coprocessor_load(0xf,in_cr15,iVar13);
        coprocessor_load(0xf,in_cr9,iVar13 + 0x30);
        uVar5 = puVar8[2];
        coprocessor_load(0xf,in_cr13,iVar6);
        coprocessor_load(0xf,in_cr1,iVar13 + 0x40);
        coprocessor_load(0xf,in_cr11,iVar14);
        uVar2 = uVar2 - 1;
        coprocessor_load(0xf,in_cr3,iVar13 + 0x50);
        coprocessor_load(0xf,in_cr5,iVar13 + 0x60);
        uVar7 = puVar8[3];
        coprocessor_function(0xe,3,3,in_cr6,in_cr7,in_cr2);
        coprocessor_function(0xe,3,2,in_cr6,in_cr15,in_cr1);
        coprocessor_function(0xe,3,2,in_cr6,in_cr13,in_cr8);
        coprocessor_function(0xe,3,2,in_cr6,in_cr11,in_cr14);
        coprocessor_function(0xe,3,2,in_cr6,in_cr9,in_cr12);
        coprocessor_function(0xe,3,2,in_cr6,in_cr1,in_cr7);
        coprocessor_function(0xe,3,2,in_cr6,in_cr3,in_cr5);
        coprocessor_function(0xe,3,2,in_cr6,in_cr5,in_cr6);
        coprocessor_store(0xf,in_cr7,puVar9);
        uVar10 = (undefined4)((ulonglong)in_d7 >> 0x20);
        puVar9 = puVar9 + 4;
        puVar8 = puVar8 + 4;
      } while (uVar2 != 0);
      puStack_88 = puStack_88 + uVar4 * 4;
      puVar9 = param_3 + uVar4 * 4;
      unaff_r4 = uVar7;
      uVar11 = uVar12;
    }
    uVar16 = unaff_r4;
    uVar3 = uVar10;
    if (param_4 != 0) {
      coprocessor_load(0xf,in_cr5,iVar13);
      coprocessor_load(0xf,in_cr13,iVar6);
      coprocessor_load(0xf,in_cr7,iVar13 + -0x10);
      uVar7 = *puStack_88;
      coprocessor_load(0xf,in_cr11,iVar14);
      coprocessor_load(0xf,in_cr9,iVar13 + 0x30);
      coprocessor_load(0xf,in_cr1,iVar13 + 0x40);
      coprocessor_load(0xf,in_cr3,iVar13 + 0x50);
      uVar3 = puStack_88[1];
      uVar15 = puStack_88[2];
      uVar16 = puStack_88[3];
      coprocessor_function(0xe,3,3,in_cr6,in_cr7,in_cr14);
      coprocessor_function(0xe,3,2,in_cr6,in_cr5,in_cr12);
      coprocessor_function(0xe,3,2,in_cr6,in_cr13,in_cr0);
      coprocessor_function(0xe,3,2,in_cr6,in_cr11,in_cr8);
      coprocessor_function(0xe,3,2,in_cr6,in_cr9,in_cr2);
      coprocessor_load(0xf,in_cr5,iVar13 + 0x60);
      coprocessor_function(0xe,3,2,in_cr6,in_cr1,in_cr1);
      coprocessor_function(0xe,3,2,in_cr6,in_cr3,in_cr5);
      coprocessor_function(0xe,3,2,in_cr6,in_cr5,in_cr6);
      uVar11 = (undefined4)in_d6;
      if (param_4 == 1) {
        *puVar9 = uVar11;
        uVar5 = unaff_r4;
        uVar3 = uVar11;
        uVar11 = uVar10;
      }
      else {
        uVar10 = (undefined4)((ulonglong)in_d6 >> 0x20);
        if (param_4 == 2) {
          *puVar9 = uVar11;
          puVar9[1] = uVar10;
          uVar5 = uVar7;
          uVar7 = uVar3;
          uVar3 = uVar10;
        }
        else {
          *puVar9 = uVar11;
          puVar9[1] = uVar10;
          puVar9[2] = uVar12;
          uVar5 = uVar3;
          uVar7 = uVar15;
          uVar3 = uVar12;
          uVar11 = uVar10;
        }
      }
    }
    iVar13 = iVar13 + 0x80;
    iVar6 = iVar6 + 0x80;
    iVar14 = iVar14 + 0x80;
    *puVar1 = uVar7;
    puVar1[1] = uVar5;
    puVar1[2] = uVar3;
    puVar1[3] = uVar11;
    iStack_80 = iStack_80 + -1;
    unaff_r4 = uVar16;
    puStack_88 = param_3;
    puVar1 = puStack_84;
  } while (iStack_80 != 0);
  return;
}

