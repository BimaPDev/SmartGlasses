/* FUN_2c444b2e @ 0x2c444b2e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c444c76) */
/* WARNING: Removing unreachable block (ram,0x2c444c88) */
/* WARNING: Removing unreachable block (ram,0x2c459180) */
/* WARNING: Removing unreachable block (ram,0x2c45918e) */
/* WARNING: Removing unreachable block (ram,0x2c45911e) */
/* WARNING: Removing unreachable block (ram,0x2c459192) */
/* WARNING: Removing unreachable block (ram,0x2c4591ae) */
/* WARNING: Removing unreachable block (ram,0x2c4591b0) */
/* WARNING: Removing unreachable block (ram,0x2c4591b6) */
/* WARNING: Removing unreachable block (ram,0x2c4591b8) */
/* WARNING: Removing unreachable block (ram,0x2c459c78) */
/* WARNING: Removing unreachable block (ram,0x2c4597de) */
/* WARNING: Removing unreachable block (ram,0x2c45980c) */
/* WARNING: Removing unreachable block (ram,0x2c459834) */
/* WARNING: Removing unreachable block (ram,0x2c4597f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c444b2e(undefined2 *param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *extraout_r3;
  uint *puVar6;
  uint uVar7;
  code *unaff_r6;
  uint *puVar8;
  uint *puVar9;
  char in_OV;
  undefined4 in_cr4;
  uint uStack_1c;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  
  puVar6 = &uStack_1c;
  uStack_1c = param_2;
  puStack_18 = param_3;
  uStack_14 = param_4;
  if (in_OV != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  do {
    puVar8 = puVar6 + 0xe2;
    puVar9 = puVar6;
    do {
      *param_1 = (short)puVar8;
      uVar1 = *(undefined1 *)(param_2 + 0xc);
      *(char *)(param_3 + 2) = (char)param_1;
      (*unaff_r6)(param_1,param_2,param_1[0x13],uVar1);
      _MasterStackPointer = 0;
      iVar3 = extraout_r3[1];
      puVar6 = (uint *)extraout_r3[4];
      uVar7 = extraout_r3[5];
      _Reset = puVar8;
      *(uint **)(iVar3 + 0x9c + *extraout_r3) = puVar6;
      iVar2 = _LAB_2c444dcc;
      iVar5 = puVar9[0xa1];
      if (iVar3 + 0x9c == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *puVar6;
        uVar7 = puVar6[1];
        puVar8 = (uint *)puVar6[2];
        puVar6 = puVar6 + 3;
      }
      puVar8[0x14] = uVar4;
      iVar3 = (int)uVar4 >> ((uint)puVar6 & 0xff);
      software_bkpt(0x73);
      if (puVar6 != (uint *)0xffffff6c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(int *)(uVar7 + 0xcc) = iVar3;
      puVar9[-1] = uVar7 + 200;
      puVar9[-2] = 0;
      puVar9[-3] = iVar2;
      puVar9[-4] = iVar5;
      puVar9[-5] = iVar3;
      puVar6 = puVar9 + -6;
      *puVar6 = iVar5 + -1;
      *(short *)((int)puVar8 + 0x1a) = (short)iVar5;
      param_2 = *(uint *)(iVar5 + 3);
      param_3 = *(undefined4 **)(iVar5 + 3);
      *(int *)(iVar5 + 0xf + param_2) = iVar5 + 0xf;
      if (((uint)param_3 >> 0x18 & 1) != 0 && (uint)param_3 >> 0x19 != 0) {
        *(undefined2 *)(iVar5 + 0x13) = 0x501c;
        coprocessor_load(1,in_cr4,unaff_r6 + -0x31c);
        do {
        } while( true );
      }
      param_2 = param_2 & 0xf8000000;
      param_1 = (undefined2 *)*param_3;
      unaff_r6 = (code *)param_3[2];
      puVar8 = (uint *)param_3[3];
      param_3 = param_3 + 4;
      puVar9[0xe5] = param_2;
      puVar9 = puVar6;
    } while (puVar8 != (uint *)0x0);
    unaff_r6 = *(code **)(*(int *)(unaff_r6 + 0x54) + 8);
    param_2 = (uint)*(ushort *)(unaff_r6 + 2);
  } while( true );
}

