/* FUN_2c113124 @ 0x2c113124 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c112b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c113124(int param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  int unaff_r4;
  int iVar2;
  int unaff_r6;
  uint unaff_r7;
  int unaff_r9;
  int in_r12;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined8 unaff_d9;
  undefined8 in_d30;
  
  *param_3 = _DAT_2c113368;
  param_3[1] = param_3;
  param_3[2] = unaff_r4;
  param_3[3] = unaff_r7;
  VectorAbsoluteDifference(unaff_d9,in_d30,1,1);
  *(int *)(unaff_r7 + 0x20) = unaff_r6 >> (unaff_r7 & 0xff);
  coprocessor_load(8,in_cr0,unaff_r9 + -0xf8);
  coprocessor_loadlong(0xc,in_cr9,param_1 * 0x8000000);
  iVar2 = param_1 * 0x8000000 + -0xf8;
  coprocessor_store(8,in_cr3,iVar2);
  coprocessor_load(3,in_cr11,in_r12 + -300);
  iVar2 = (int)*(short *)(unaff_r4 + iVar2);
  *(int *)(param_4 + param_1) = param_1;
  uRam000000f0 = (undefined2)param_4;
  if (!SBORROW4(param_1,param_1)) {
    puVar1 = (undefined4 *)coprocessor_movefromRt(0xb,2,0,in_cr10,in_cr6);
    *puVar1 = 0xe0;
    puVar1[1] = puVar1;
    puVar1[2] = 0;
    puVar1[3] = param_4;
    puVar1[4] = iVar2;
    puVar1[5] = iVar2 * 0x400;
    puVar1[6] = param_4 + iVar2 * -0x400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x2cd2f7f0(0xc800,(uint)&stack0xffffffe8 & 0xb6000000,0,uRam00000048 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

