/* FUN_2c437d90 @ 0x2c437d90 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4375de) */
/* WARNING: Removing unreachable block (ram,0x2c4375fe) */
/* WARNING: Removing unreachable block (ram,0x2c4374f6) */
/* WARNING: Removing unreachable block (ram,0x2c437d2e) */
/* WARNING: Removing unreachable block (ram,0x2c437c5a) */
/* WARNING: Removing unreachable block (ram,0x2c437c64) */
/* WARNING: Removing unreachable block (ram,0x2c437c6c) */
/* WARNING: Removing unreachable block (ram,0x2c437b84) */
/* WARNING: Removing unreachable block (ram,0x2c437bbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_2c437d90(undefined4 param_1,uint *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r2;
  uint *puVar7;
  undefined4 extraout_r3;
  int unaff_r4;
  uint unaff_r5;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r11;
  undefined4 in_cr6;
  int in_stack_00000240;
  
  software_interrupt(0x9f);
  uVar6 = *param_2;
  puVar7 = (uint *)param_2[1];
  uVar9 = param_2[2];
  uVar10 = param_2[3];
  *(short *)(uVar10 + 0x10) = (short)uVar10;
  if (!SBORROW4(unaff_r5,0xe4)) {
    if (SBORROW4(unaff_r5,0xe4)) {
      uVar5 = uVar6 + 0xb0;
      *puVar7 = uVar5;
      puVar7[1] = 0x89;
      puVar7[2] = uVar10;
      coprocessor_store(0xe,in_cr6,0x2c437898);
      uRam000000c5 = uVar10;
      if (0xffffff4f < uVar6 && uVar5 != 0) {
        puVar7[3] = uVar5;
        puVar7[4] = 0x89;
        puVar7[5] = unaff_r5;
        puVar7[6] = uVar9;
        puVar7[7] = uVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (unaff_r5 < 0xe4) {
    cVar2 = (char)unaff_r4;
    puVar8 = (undefined4 *)(uint)*(byte *)(cVar2 + 0x89);
    uVar4 = func_0x2cca8dae();
    *puVar8 = uVar4;
    puVar8[1] = extraout_r2;
    puVar8[2] = (int)cVar2;
    puVar8[3] = unaff_r5;
    puVar3 = _LAB_2c436ebc;
    *(undefined4 *)(&stack0x000001bc + unaff_r11) = extraout_r3;
    *(short *)(puVar8 + 7) = (short)cVar2;
    uVar4 = _DAT_2c436c44;
    *puVar3 = 0;
    puVar3[1] = puVar3;
    puVar3[2] = extraout_r3;
    puVar3[3] = uVar4;
    puVar3[4] = puVar8 + 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = uVar9;
  if (unaff_r4 == 0) {
    uVar6 = uVar9 - 0xfb;
    if (uVar6 == 0 || (int)uVar9 < 0xfb) {
      if (SBORROW4(uVar9,0xfb)) {
        _NMI = (uint)(ushort)puVar7[7];
        _MasterStackPointer = 0x2c437859;
        _Reset = 0;
        uVar9 = (uint)*(ushort *)((in_stack_00000240 + 2) * 0x100 + 0x12);
        software_hlt(0x31);
        _HardFault = uVar6;
        _MemManage = uVar10;
        goto LAB_2c43764a;
      }
      goto LAB_2c4375f6;
    }
    unaff_r5 = (uint)*(ushort *)(uVar9 - 0xf1);
  }
  else {
LAB_2c4375f6:
    puVar7 = (uint *)((uint)puVar7 & uVar6);
  }
  uVar9 = *puVar7;
  if (unaff_r5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x6e,0x2c437620);
    (*pcVar1)();
  }
LAB_2c43764a:
  return CONCAT44(param_1,uVar9);
}

