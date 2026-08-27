/* FUN_2c27b71a @ 0x2c27b71a */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c27b71a(undefined4 param_1,undefined1 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined2 *extraout_r1;
  uint extraout_r2;
  int iVar2;
  undefined4 *puVar3;
  int extraout_r3;
  int unaff_r4;
  int unaff_r5;
  uint unaff_r6;
  char in_NG;
  bool in_ZR;
  char in_OV;
  undefined1 auStack_c8 [188];
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  *param_2 = (char)unaff_r6;
  uVar1 = uRam2c27b314;
  if (!in_ZR && in_NG == in_OV) {
    unaff_r4 = 0;
  }
  uStack_c = param_1;
  uStack_8 = param_3;
  func_0x2c802b46(unaff_r6 >> 9,unaff_r6 >> 0x1b,param_3,unaff_r6 << 3);
  iVar2 = extraout_r3 * 0x80000;
  puVar3 = (undefined4 *)(unaff_r6 * 2);
  *(char *)(iVar2 + unaff_r5) = (char)unaff_r5;
  *(char *)((int)puVar3 + 0x15) = (char)(unaff_r6 << 1);
  *(char *)(iVar2 + unaff_r5) = (char)unaff_r5;
  *extraout_r1 = (short)uVar1;
  *puVar3 = uVar1;
  puVar3[unaff_r4 * 2] = uVar1;
  func_0x2bd7655c(extraout_r3 << 0x18,unaff_r4 * 8,iVar2,auStack_c8);
  software_interrupt(2);
  if ((extraout_r2 & 0x1000) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

