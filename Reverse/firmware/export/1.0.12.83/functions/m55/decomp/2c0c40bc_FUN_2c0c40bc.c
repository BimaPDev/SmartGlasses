/* FUN_2c0c40bc @ 0x2c0c40bc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c0c40bc(undefined4 param_1,int *param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int unaff_r4;
  undefined1 unaff_r5;
  int unaff_r7;
  uint uVar8;
  undefined4 in_cr0;
  
  uVar8 = (uint)*(ushort *)(unaff_r4 + unaff_r7);
  *(undefined1 *)(param_4 + 0x1c) = unaff_r5;
  iVar4 = *param_2;
  uVar5 = param_2[1];
  iVar7 = uVar8 << 1;
  *(int *)(uVar8 + 0xc) = iVar7;
  software_bkpt(0xad);
  if (uVar8 != 0) {
    iVar7 = uVar8 << 2;
  }
  if ((uVar5 & 0x40000000) != 0) {
    coprocessor_store(1,in_cr0,iRam00000089 + 0x164);
    *(int *)(iRam00000085 + 0x54) = (iRam00000089 >> 0x1b) << 10;
    return CONCAT44(_DAT_2c0c4110,param_1);
  }
  *(char *)(iVar7 + (uVar8 + 0x59) * 2) = (char)iVar7;
  puVar6 = *(undefined4 **)(uVar5 * 4 + 0xc);
  *(undefined4 *)(iVar4 * 2 + 0x38) = 0xb;
  uVar3 = _DAT_2c0c3f10;
  uVar2 = uRam20000010;
  uVar1 = uRam20000004;
  *puVar6 = _DAT_2c0c41a4;
  puVar6[1] = uVar1;
  puVar6[2] = 0xad;
  puVar6[3] = puVar6;
  puVar6[4] = uVar3;
  puVar6[5] = uVar2;
  *puVar6 = 0xad;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

