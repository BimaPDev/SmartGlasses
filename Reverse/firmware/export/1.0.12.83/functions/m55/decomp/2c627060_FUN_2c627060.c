/* FUN_2c627060 @ 0x2c627060 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c627060(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  
  func_0x2c62e12c(_LAB_2c6270f4);
  puVar3 = PTR_LAB_2c636eac_1_2c6270fc;
  puVar2 = _LAB_2c6270f8;
  puVar1 = _LAB_2c6270f4;
  *_LAB_2c6270f4 = 0x41;
  uVar12 = _LAB_2c627128;
  uVar11 = _LAB_2c627124;
  uVar10 = _LAB_2c627120;
  uVar9 = _LAB_2c62711c;
  puVar7 = PTR_LAB_2c637008_1_2c627110;
  puVar6 = PTR_LAB_2c636e40_1_2c62710c;
  puVar5 = PTR_LAB_2c636e54_1_2c627108;
  puVar4 = PTR_LAB_2c636e94_1_2c627104;
  *(undefined **)(puVar1 + 0x14) = PTR_LAB_2c636e7c_1_2c627100;
  puVar8 = PTR_LAB_2c636dac_1_2c627114;
  *(undefined **)(puVar1 + 0x20) = puVar3;
  *(undefined **)(puVar1 + 0x10) = puVar4;
  *(undefined **)(puVar1 + 0x28) = puVar8;
  *(undefined2 *)(puVar1 + 2) = 0;
  *(undefined4 *)(puVar1 + 8) = uVar9;
  *(undefined4 *)(puVar1 + 0xc) = uVar10;
  *(undefined4 *)(puVar1 + 0x18) = uVar11;
  *(undefined **)(puVar1 + 0x1c) = puVar5;
  *(undefined **)(puVar1 + 0x2c) = puVar6;
  *(undefined **)(puVar1 + 0x24) = puVar7;
  *(undefined4 *)(puVar1 + 0x30) = uVar12;
  FUN_2c62e134();
  func_0x2c62e12c(puVar2);
  puVar4 = PTR_LAB_2c636e7c_1_2c627100;
  puVar3 = PTR_LAB_2c636eac_1_2c6270fc;
  *(undefined **)(puVar2 + 0x10) = PTR_LAB_2c636e94_1_2c627104;
  puVar8 = PTR_LAB_2c636dac_1_2c627114;
  *(undefined2 *)(puVar2 + 2) = 0;
  *(undefined **)(puVar2 + 0x20) = puVar3;
  *(undefined **)(puVar2 + 0x1c) = puVar5;
  *(undefined **)(puVar2 + 0x2c) = puVar6;
  *(undefined **)(puVar2 + 0x24) = puVar7;
  *(undefined **)(puVar2 + 0x28) = puVar8;
  *(undefined **)(puVar2 + 0x14) = puVar4;
  *(undefined4 *)(puVar2 + 0x18) = uVar11;
  *(undefined4 *)(puVar2 + 0x30) = _LAB_2c627118;
  *(undefined4 *)(puVar2 + 8) = uVar9;
  *(undefined4 *)(puVar2 + 0xc) = uVar10;
  *puVar2 = 0x42;
  puVar13 = (undefined4 *)FUN_2c62c938(DAT_2c62e144,puVar3,puVar8,in_r3,unaff_r4,unaff_lr);
  if (puVar13 != (undefined4 *)0x0) {
    *puVar13 = puVar2;
  }
  return;
}

