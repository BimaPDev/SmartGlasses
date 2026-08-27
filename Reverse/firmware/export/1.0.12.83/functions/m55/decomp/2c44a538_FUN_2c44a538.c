/* FUN_2c44a538 @ 0x2c44a538 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c44a538(uint param_1,undefined4 param_2,undefined1 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  int unaff_r4;
  undefined4 unaff_pc;
  uint uVar3;
  undefined4 in_cr2;
  
  *(undefined1 *)(unaff_r4 + 6) = param_3;
  uVar3 = param_4 + 0xc;
  bVar2 = (param_1 >> 0x10 & 1) != 0;
  param_1 = param_1 >> 0x11;
  if ((param_1 <= uVar3 && (uint)bVar2 <= param_1 - uVar3 || param_1 - uVar3 == (uint)!bVar2) &&
     (param_4 << 0x1e < 0 == (SBORROW4(param_1,uVar3) != SBORROW4(param_1 - uVar3,(uint)!bVar2)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xa8,0x2c44a550);
    (*pcVar1)();
  }
  coprocessor_loadlong(2,in_cr2,unaff_pc);
  func_0x2cd82394(*(undefined4 *)(param_4 + 0x2c44a88c));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

