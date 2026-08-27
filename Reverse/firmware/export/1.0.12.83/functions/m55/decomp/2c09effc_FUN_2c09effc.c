/* FUN_2c09effc @ 0x2c09effc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c09effc(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined2 *puVar4;
  uint uVar5;
  char *pcVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int unaff_r6;
  int iVar12;
  undefined4 uVar13;
  undefined4 in_cr2;
  undefined4 in_cr3;
  undefined4 *puStack00000078;
  int iStack000001c8;
  uint uStack_18;
  int iStack_14;
  
  *(int *)(unaff_r6 + 0x10) = unaff_r6;
  *(int *)(param_1 + 0x38) = param_4;
  uVar11 = *(uint *)(param_4 + 0x6c);
  uVar5 = uVar11 >> 0x1b;
  *(short *)(param_3 + 0x2e) = (short)uVar11;
  iVar12 = _DAT_2c09f314;
  pcVar6 = (char *)(uVar5 * 8);
  puVar8 = (undefined4 *)(uVar11 * 0x20);
  puStack00000078 = puVar8 + uVar5 * -2;
  cRam00000019 = (char)pcVar6;
  pcVar6[(int)puVar8] = cRam00000019;
  iVar9 = (int)*(short *)(uVar5 << 4);
  do {
    iVar10 = (int)pcVar6 * iVar9;
    iVar9 = 0;
  } while (iVar10 == 0);
  iVar12 = iVar12 >> 5;
  cVar2 = *pcVar6;
  *puVar8 = pcVar6;
  *(short *)(cVar2 + 0x1a) = (short)iVar12;
  puVar4 = puRam2c09f070;
  uStack_18 = (uint)*(ushort *)(0x38 - cVar2);
  uRam0000000f = SUB41(puStack00000078,0);
  *puRam2c09f070 = 0;
  uVar5 = (int)puVar4 + 3;
  *(uint *)-uStack_18 = uVar5;
  *(undefined2 *)(uVar5 * 2) = 0;
  uVar11 = uVar5 >> 0x11;
  *(uint *)(iVar12 + uVar5) = uVar5;
  iVar9 = uVar11 * 0x40000000;
  iStack000001c8 = uVar11 * -0x2000;
  *(short *)(iVar9 + uVar5) = (short)((uint)puVar4 >> 8);
  puVar7 = puVar4 + 3;
  *(short *)(uVar11 * 0x3fffe000) = (short)puVar7;
  *(undefined2 *)((int)puVar7 * 2) = 0;
  *(undefined2 **)(iVar12 + (int)puVar7) = puVar7;
  uVar13 = *(undefined4 *)(puVar7 + uVar11 * 0x20000000);
  iVar10 = *(int *)(puVar7 + uVar11 * 0x20000000);
  *(short *)(iVar10 + iVar9) = (short)iVar10;
  *(int *)((iVar10 >> 0x10) + 0x24) = iVar9;
  *(char *)((int)puVar4 + 0x13) = (char)uVar13;
  bVar1 = *(byte *)((ushort)puVar4[5] + 0x1a);
  if (SBORROW4(iVar12,0xa2)) {
    puVar8 = (undefined4 *)(bVar1 + 0xf0);
    bVar3 = (bool)hasExclusiveAccess(puVar8);
    if (bVar3) {
      *puVar8 = &uStack_18;
    }
    iVar9 = coprocessor_movefromRt(0,5,2,in_cr2,in_cr3);
    puVar8 = (undefined4 *)((int)puVar7 * 0x8000000);
    *(short *)((int)puVar8 + 0x2a) = (short)(int *)(iVar12 + -0xa2);
    *(int *)(iVar12 + -0xa2) = (int)&stack0x0000003c;
    *(undefined4 **)(iVar12 + -0x9e) = puVar8;
    iStack_14 = param_4;
    func_0x2c7b20e4(iVar9 + (uint)bVar1,*puVar8,puVar8[1],puVar8[2]);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

