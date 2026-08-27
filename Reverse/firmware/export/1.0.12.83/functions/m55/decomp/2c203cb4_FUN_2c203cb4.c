/* FUN_2c203cb4 @ 0x2c203cb4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c203d24) */
/* WARNING: Removing unreachable block (ram,0x2c203ddc) */
/* WARNING: Removing unreachable block (ram,0x2c203de4) */
/* WARNING: Removing unreachable block (ram,0x2c203dd8) */
/* WARNING: Removing unreachable block (ram,0x2c203e14) */
/* WARNING: Removing unreachable block (ram,0x2c20c208) */
/* WARNING: Removing unreachable block (ram,0x2c20c210) */
/* WARNING: Removing unreachable block (ram,0x2c20c218) */
/* WARNING: Removing unreachable block (ram,0x2c20c21c) */
/* WARNING: Removing unreachable block (ram,0x2c20c220) */
/* WARNING: Removing unreachable block (ram,0x2c20c224) */
/* WARNING: Removing unreachable block (ram,0x2c203dec) */
/* WARNING: Removing unreachable block (ram,0x2c203df4) */
/* WARNING: Removing unreachable block (ram,0x2c203e04) */
/* WARNING: Removing unreachable block (ram,0x2c203e08) */
/* WARNING: Removing unreachable block (ram,0x2c203e18) */
/* WARNING: Removing unreachable block (ram,0x2c203e20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c203cb4(undefined4 param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint unaff_r4;
  int unaff_r6;
  int unaff_r7;
  int unaff_r11;
  undefined4 unaff_pc;
  undefined4 in_cr5;
  undefined4 in_cr13;
  undefined4 in_cr15;
  undefined8 in_d16;
  undefined8 in_d27;
  
  iVar2 = unaff_r7 << 3;
  if (iVar2 == 0) {
    VectorAdd(in_d27,in_d16,4,1);
    iVar2 = 0;
  }
  coprocessor_moveto(0,5,5,iVar2 << 0xc,in_cr13,in_cr5);
  iVar3 = param_2 << 5;
  iVar2 = iVar3;
  if (iVar3 == 0) {
    VectorAdd(in_d27,in_d16,4,1);
    iVar2 = 0;
  }
  coprocessor_moveto(0,5,5,iVar2 << 0xc,in_cr13,in_cr5);
  func_0x2c107da8(iVar2 << 0xc,param_2,iVar3,&stack0x000003b0);
  coprocessor_moveto(0,5,5,0,in_cr13,in_cr5);
  coprocessor_loadlong(0xf,in_cr15,unaff_pc);
  bVar1 = (unaff_r4 & 0x40000000) != 0;
                    /* WARNING: Could not recover jumptable at 0x2c203dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (unaff_r4 * 4 == 0) {
    (*(code *)(unaff_r6 << 0x18))();
    return;
  }
  software_interrupt(0xfa1a);
  if (bVar1) {
    software_interrupt(0);
  }
  if (0x7fffffff < unaff_r4 * 4) {
    software_interrupt(0xf00b00);
  }
                    /* WARNING: Could not recover jumptable at 0x2c203df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(unaff_r11 + 0x2c203e00 + (uint)bVar1))();
  return;
}

