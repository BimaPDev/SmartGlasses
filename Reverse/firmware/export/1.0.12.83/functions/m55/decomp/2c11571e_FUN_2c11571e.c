/* FUN_2c11571e @ 0x2c11571e */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c11571e(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int unaff_r4;
  int unaff_r5;
  undefined2 unaff_r6;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr0;
  undefined4 in_cr5;
  undefined4 in_cr6;
  undefined4 in_cr8;
  undefined4 in_cr12;
  int iStack00000088;
  int *piStack_c;
  
  piVar1 = _DAT_2c115b08;
  if (!in_CY || in_ZR) {
    *(undefined4 *)(*param_2 + 0x54) = 0x2c1158f4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  piVar2 = param_2;
  if (!in_CY || in_ZR) {
    param_1 = param_2[0x10];
    software_bkpt(0x95);
    unaff_r5 = param_1 + unaff_r4;
    unaff_r6 = 0;
    *(int *)(param_1 + 100) = param_3;
    piVar2 = piVar1;
  }
  *(undefined2 *)(param_1 + 0x10) = unaff_r6;
  coprocessor_function(0,0xd,1,in_cr0,in_cr8,in_cr5);
  coprocessor_function2(5,0xe,1,in_cr12,in_cr0,in_cr6);
  iStack00000088 = unaff_r5;
  piStack_c = param_2;
                    /* WARNING: Could not recover jumptable at 0x2c1157a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&piStack_c)(param_1,piVar2,param_3 + 0xb6,(param_1 + unaff_r4) * 0x20000000);
  return;
}

