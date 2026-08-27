/* FUN_2c096834 @ 0x2c096834 */

void FUN_2c096834(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  int iVar2;
  uint unaff_r7;
  int unaff_r11;
  undefined4 in_cr0;
  undefined4 in_cr3;
  undefined4 in_cr11;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  coprocessor_function2(0,1,0,in_cr14,in_cr3,in_cr15);
  coprocessor_load(4,in_cr11,unaff_r11 + -0x194);
  iVar2 = (param_1 >> 0x14) << 2;
  coprocessor_function2(4,0xe,1,in_cr0,in_cr0,in_cr3);
  func_0x2cadc044(iVar2,*(undefined4 *)(param_2 + 0xae),iVar2,unaff_r7 >> 0x1f,param_2,param_3,
                  param_4);
  software_bkpt(0xff);
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xe0,0x2c0968b8);
  (*pcVar1)();
}

