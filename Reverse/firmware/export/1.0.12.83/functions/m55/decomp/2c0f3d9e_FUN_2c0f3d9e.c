/* FUN_2c0f3d9e @ 0x2c0f3d9e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c0f3d9e(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int unaff_r4;
  undefined4 *puVar8;
  int unaff_r7;
  undefined4 unaff_r9;
  undefined4 in_cr2;
  undefined8 in_d6;
  undefined8 unaff_d9;
  
  iVar6 = iRam2c0f3dc0;
  piVar7 = (int *)(unaff_r7 >> 0x1f);
  iVar3 = 0xf0 << ((uint)piVar7 & 0xff);
  *piVar7 = iVar3;
  piVar7[1] = iVar3 << 8;
  piVar7[2] = 0;
  piVar7[3] = iVar6;
  iVar6 = unaff_r4 * 8;
  *(int *)iVar6 = iVar6;
  *(undefined4 *)(iVar6 + 4) = 0x2c0f3de4;
  *(undefined4 *)(iVar6 + 8) = 0x581e7;
  _MasterStackPointer = 0;
  *(int *)(unaff_r4 * 0x20) = unaff_r4 * 0x10;
  uVar5 = unaff_r4 * 0xc;
  *(undefined1 *)(uVar5 + 0x10) = 0xe0;
  uVar4 = uVar5 | 0xe0;
  *(uint *)uVar4 = uVar4;
  *(undefined4 *)(uVar4 + 4) = 0x2c0f3ea4;
  *(uint *)(uVar4 + 8) = uVar5;
  *(undefined4 *)(uVar4 + 0xc) = 0x581e7;
  iVar6 = (int)sRam2c0f3ea4;
  *(uint *)uVar5 = uVar5;
  *(undefined4 *)(uVar5 + 4) = 0x2c0f3da5;
  iVar3 = (int)sRam00000180;
  *(char *)((iVar3 - (0xc0 - iVar6)) + 0x58107) = (char)(iVar3 << 4);
  uVar2 = _DAT_2c0f42e8;
  coprocessor_loadlong(0,in_cr2,unaff_r9);
  uVar1 = VectorGetElement(unaff_d9,0,4,0);
  VectorMultiplyAccumulate(in_d6,uVar1,4,1);
  iVar6 = -(0xc0 - iVar6 >> 3);
  puVar8 = (undefined4 *)(iVar6 + 0xc0);
  *(undefined1 *)(iVar6 + 0xd0) = 0xe0;
  uVar5 = (uint)puVar8 | 0xe0;
  *(uint *)uVar5 = uVar5;
  *(uint *)(uVar5 + 4) = (uint)&stack0x00000140 & 0xb6000000;
  *(undefined4 **)(uVar5 + 8) = puVar8;
  *(undefined4 *)(uVar5 + 0xc) = uVar2;
  software_interrupt(0x21);
  *puVar8 = _DAT_2c0f4368;
  puVar8 = (undefined4 *)(iVar3 * 0x100000 - (int)puVar8);
  *(undefined1 *)(puVar8 + 4) = 0xe8;
  uVar5 = (uint)puVar8 | 0xe8;
  *(uint *)uVar5 = uVar5;
  *(int *)(uVar5 + 4) = iVar3 << 0x18;
  *(undefined4 **)(uVar5 + 8) = puVar8;
  *(undefined4 *)(uVar5 + 0xc) = uVar2;
  if ((int)puVar8 < 0) {
    *puVar8 = _DAT_2c0f4390;
    uVar4 = iVar3 * 0x100000 - (int)puVar8;
    *(undefined1 *)(uVar4 + 0x10) = 0xe8;
    uVar5 = uVar4 | 0xe8;
    *(uint *)uVar5 = uVar5;
    *(int *)(uVar5 + 4) = iVar3 << 0x18;
    *(uint *)(uVar5 + 8) = uVar4;
    *(undefined4 *)(uVar5 + 0xc) = uVar2;
    iVar6 = _DAT_2c0f43b8;
    uVar4 = _DAT_2c0f43b8 * 0x10000 - (uVar4 + 8);
    *(undefined1 *)(uVar4 + 0x10) = 0xe0;
    uVar5 = uVar4 | 0xe0;
    *(uint *)uVar5 = uVar5;
    *(int *)(uVar5 + 4) = iVar6;
    *(uint *)(uVar5 + 8) = uVar4;
    *(undefined4 *)(uVar5 + 0xc) = uVar2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

