/* FUN_2c2c3d26 @ 0x2c2c3d26 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c2c3884) */
/* WARNING: Removing unreachable block (ram,0x2c2c3886) */
/* WARNING: Removing unreachable block (ram,0x2c2c3888) */

void FUN_2c2c3d26(void)

{
  code *pcVar1;
  undefined2 unaff_r6;
  int unaff_r7;
  int iVar2;
  undefined4 in_cr1;
  undefined4 in_cr13;
  
  *(undefined2 *)(unaff_r7 + 0xe) = unaff_r6;
  iVar2 = coprocessor_movefromRt(0xd,1,6,in_cr1,in_cr13);
  *(undefined4 *)(iVar2 + 0x30) = 0x2c2c3bfc;
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xed,0x2c2c3850);
  (*pcVar1)();
}

