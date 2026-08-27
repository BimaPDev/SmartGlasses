/* FUN_2c4da7c0 @ 0x2c4da7c0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c4daa64) */
/* WARNING: Removing unreachable block (ram,0x2c4daa7c) */
/* WARNING: Removing unreachable block (ram,0x2c4daa9a) */

void FUN_2c4da7c0(int param_1,int param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr3;
  undefined4 in_cr4;
  undefined4 in_cr5;
  undefined4 in_cr9;
  undefined4 in_cr11;
  undefined4 extraout_s4;
  undefined1 extraout_var [12];
  undefined8 unaff_d10;
  undefined8 unaff_d11;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_9c [3];
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  undefined4 local_6c;
  undefined1 auVar3 [16];
  
  uVar2 = param_2 >> 1;
  local_6c = *DAT_2c4daaa0;
  local_9c[2] = param_2 + -2;
  local_9c[0] = param_2 + -1;
  local_9c[1] = 0;
  local_88 = 0;
  local_90 = 1;
  local_8c = 1;
  coprocessor_load(0xf,in_cr3,local_9c);
  coprocessor_load(0xf,in_cr5,&local_8c);
  local_bc = *DAT_2c4daaa4;
  uStack_b8 = DAT_2c4daaa4[1];
  uStack_b4 = DAT_2c4daaa4[2];
  uStack_b0 = DAT_2c4daaa4[3];
  coprocessor_load(0xf,in_cr9,&local_bc);
  local_ac = *DAT_2c4daaa8;
  uStack_a8 = DAT_2c4daaa8[1];
  uStack_a4 = DAT_2c4daaa8[2];
  uStack_a0 = DAT_2c4daaa8[3];
  coprocessor_load(0xf,in_cr11,&local_ac);
  if (1 < (int)uVar2) {
    coprocessor_load(0xf,in_cr0,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((uVar2 & 1) == 0) {
    local_84 = local_9c[0];
    local_80 = local_9c[2];
    FUN_2c4d94e8(uVar2,param_1,param_3);
    auVar3._4_12_ = extraout_var;
    auVar3._0_4_ = extraout_s4;
    coprocessor_load(0xf,in_cr3,local_9c);
    coprocessor_load(0xf,in_cr4,param_1);
    *(int *)(param_1 + (param_2 + 0x3fffffff) * 4) = -*(int *)(param_1 + 4);
    coprocessor_load(0xf,in_cr1,&local_8c);
    coprocessor_load(0xf,in_cr11,&local_bc);
    coprocessor_load(0xf,in_cr9,&local_ac);
    if ((int)(uVar2 + 1) < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    auVar1._8_8_ = unaff_d11;
    auVar1._0_8_ = unaff_d10;
    VectorAdd(auVar3,auVar1,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  coprocessor_load(0xf,in_cr0,param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

