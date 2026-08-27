/* FUN_2c1dbcee @ 0x2c1dbcee */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c295c7a) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c1dbcee(uint param_1,int param_2,undefined4 param_3,uint *param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 extraout_r2;
  uint *extraout_r3;
  undefined4 *unaff_r4;
  uint unaff_r5;
  uint unaff_r6;
  uint unaff_r10;
  uint unaff_pc;
  uint *puVar7;
  undefined4 in_cr12;
  undefined8 uVar8;
  
  *(short *)(param_2 + 0x38) = (short)unaff_r4;
  uVar3 = unaff_r5 * 2;
  uVar1 = (undefined2)param_2;
  if (-1 < (int)uVar3) {
    *(uint *)(param_2 + 0xc) = unaff_r6 - (int)unaff_r4;
    *(undefined2 *)((int)unaff_r4 + 6) = uVar1;
    iVar2 = (unaff_r6 - (int)unaff_r4) * 2;
    *(int *)iVar2 = iVar2;
    puVar4 = *(undefined2 **)(iVar2 + 0xc);
    *puVar4 = uVar1;
    uVar5 = (int)puVar4 + 0xf1;
    if ((uVar5 & 0x100) != 0) {
      *(uint *)(uVar5 * 0x1000000 + 8) = unaff_r6 - 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(param_2 + 0x18) = unaff_r6 - 4;
    *(short *)(uVar3 + 4) = (short)_DAT_2c1dbea8;
    *(undefined2 *)(uVar5 * 0x8000000) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = param_1;
  param_4[1] = (uint)unaff_r4;
  param_4[2] = unaff_r5;
  param_4[3] = unaff_r6;
  puVar7 = param_4 + 4;
  param_1 = param_1 >> ((uint)unaff_r4 & 0xff);
  iVar2 = param_1 * 0x1000;
  uVar5 = (uint)*(ushort *)(iVar2 + 0x38);
  *(short *)(uVar5 + 0x10) = (short)iVar2;
  if (iVar2 == 0) {
    *(uint *)(param_2 + 0x68) = uVar5;
    if ((param_1 & 0x1ffff) != 0) {
      *(undefined4 *)(unaff_r6 * 8 + 4) = 0;
      SignedSaturate(unaff_r6 << 0x17,0);
      SignedDoesSaturate(unaff_r6 << 0x17,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *unaff_r4 = 0x70;
    _DAT_00000070 = 0;
    _DAT_00000006 = 0x70;
    uRam00000012 = 6;
    _BusFault = 0;
    _UsageFault = (undefined2)((uint)param_2 >> 0x10);
    coprocessor_storelong(0,in_cr12,0x3fc);
    software_interrupt(0xfc);
    _MasterStackPointer = 0;
    _DAT_0000000a = param_2;
    uRam0000000e = uVar3;
    uRam00000016 = uVar1;
    uVar8 = func_0x2c65df20();
    uVar6 = (undefined4)((ulonglong)uVar8 >> 0x20);
                    /* WARNING: Ignoring partial resolution of indirect */
    MasterStackPointer_3 = (char)param_2;
    *(undefined4 *)uVar8 = uVar6;
    ((undefined4 *)uVar8)[1] = extraout_r2;
    iVar2 = (int)extraout_r3 * 0x1001;
    *(int *)iVar2 = iVar2;
    *(undefined4 *)(iVar2 + 4) = uVar6;
    *(uint *)(iVar2 + 8) = unaff_r5;
    *(uint *)(iVar2 + 0xc) = (param_1 & 0xfffff) >> 0xd;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *extraout_r3 = unaff_r5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *puVar7 = uVar5;
  param_4[5] = uVar3;
  param_4[6] = (uint)puVar7;
  *(undefined2 *)(uVar5 * 0x10 + 8) = uVar1;
  *(char *)((int)unaff_r4 + unaff_r10 + uVar5 * 0x10 + 8) = (char)param_2;
  *(undefined2 *)(uVar3 + 0x28) = 0;
  *puVar7 = uVar3;
  param_4[5] = unaff_r10;
  param_4[6] = unaff_r6;
  iVar2 = CONCAT22(uRam00000016,_BusFault);
  uVar3 = unaff_pc & 0x18;
  *(uint *)uVar3 = uVar3;
  *(uint *)(iVar2 * 0x2000 + 8) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

