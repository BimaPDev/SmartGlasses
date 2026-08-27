/* FUN_2c45a8dc @ 0x2c45a8dc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c45a8dc(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int unaff_r5;
  uint *unaff_r6;
  int iVar7;
  uint uVar8;
  int unaff_lr;
  char in_NG;
  char in_CY;
  undefined4 in_cr3;
  undefined4 in_cr7;
  uint in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000110;
  uint in_stack_00000114;
  
  if (in_NG != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar3 = param_1 + -0x58;
  *param_1 = param_4;
  param_1[1] = unaff_lr + 0x6d5;
  uVar8 = in_stack_00000030 >> 0x10 & 0xff;
  if (in_CY != '\0') {
    if ((in_CY == '\0') && (param_2 != 0)) {
      uVar6 = *(uint *)(param_4 + 0x50);
      *unaff_r6 = (uint)piVar3;
      unaff_r6[1] = uVar6;
      unaff_r6[2] = (uint)&stack0x000001bc;
      unaff_r6[3] = (uint)unaff_r6;
      if (uVar6 != 0) {
        iVar7 = *(int *)(unaff_r5 + -0x22);
        iVar4 = (((uint)piVar3 & 0xff) << 8 | (uint)piVar3 >> 8 & 0xff) * 0x10000;
        *(undefined2 *)(iVar4 + 0x20) = 0;
        *(undefined4 *)(iVar4 + 0x54) = in_stack_00000110;
        *(short *)(iVar7 + 0xc) = (short)&stack0x00000047;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      puVar2 = (undefined4 *)-(int)&stack0x00000014;
      _MemManage = in_stack_00000114 >> 0x10 & 0xff;
      _Reserved2 = (uint)&stack0x00000014 >> 0xc;
      _HardFault = 0x2c45ab08;
      _BusFault = 0xc;
      _UsageFault = 0x2c45a9e1;
      _Reserved1 = 0x2c45ab2c;
      uRam2c45aa3d = 0x2c45a9e1;
      _MasterStackPointer = &stack0x000001bc;
      _Reset = unaff_r5 + -0x2a;
      _NMI = uVar8;
      *puVar2 = 0x2c45ab08;
      puVar5 = (undefined4 *)((uint)&stack0x00000014 >> 0x1e);
      *puVar5 = 0xc;
      puVar5[1] = puVar5;
      puVar5[2] = puVar2 + 1;
      coprocessor_moveto(8,0,6,0xc,in_cr7,in_cr3);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)((int)unaff_r6 + 0x1e) = (char)unaff_r5;
  uVar6 = (uint)*(byte *)((int)param_1 + -0x15d);
  if (unaff_r6 != (uint *)0x0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((int)(uVar6 - 0x86) < 0) {
    *(uint *)(uVar8 + 0x10) = uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _NMI = 0;
  in_stack_00000048._3_4_ = in_stack_00000048._3_4_ & 0xffffff00;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0x7a,0x2c45aac6);
  _MasterStackPointer = (undefined1 *)param_3;
  _Reset = uVar6;
  _HardFault = uVar8;
  (*pcVar1)();
}

