/* FUN_2c45f26a @ 0x2c45f26a */

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_2c45f26a(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 unaff_r4;
  uint uVar6;
  int iVar7;
  undefined4 unaff_r5;
  uint *puVar8;
  int iVar9;
  int unaff_r11;
  undefined4 in_cr0;
  undefined4 in_cr2;
  undefined4 in_cr4;
  undefined1 *puStack00000030;
  undefined1 uStack0000016b;
  
  puStack00000030 = &stack0x0000014c;
  puVar1 = (undefined4 *)*param_3;
  puVar8 = (uint *)((int)puStack00000030 * 0x100000);
  uStack0000016b = 0;
  puVar5 = (undefined4 *)puVar1[1];
  *(undefined4 *)(puVar1[2] + 0x5c) = *puVar1;
  uVar6 = (int)&stack0x00000150 >> 0x1f;
  if (uVar6 < 0xed) {
    uVar3 = *puVar8 & ~(uint)(puVar8 + 4);
    *(char *)(uVar6 + 0x1e) = (char)puVar5;
    if (uVar3 == 0 || (int)uVar3 < 0 != SBORROW4(uVar6,0xed)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *(short *)(*puVar8 + 8) = (short)(puVar8 + 4);
    iVar9 = (int)puVar8 + -0xc1;
    uVar2 = *puVar5;
    piVar4 = (int *)puVar5[1];
    coprocessor_movefromRt(0xd,0,1,in_cr4,in_cr2);
    coprocessor_load(0xe,in_cr0,unaff_r11 + 0x394);
    puVar1 = (undefined4 *)*piVar4;
    iVar7 = piVar4[2];
    if (-0x74 < iVar9) {
      if (iVar9 == -0x73) {
        uVar2 = func_0x2c52f450(iVar7 + 4,puVar1,&stack0xfffffff0,&stack0xffffffec);
        return uVar2;
      }
      *puVar1 = unaff_r5;
      puVar1[1] = unaff_r4;
      *(int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 8;
      return uVar2;
    }
    if (SCARRY4(iVar9,0x73)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (piVar4[1] != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

