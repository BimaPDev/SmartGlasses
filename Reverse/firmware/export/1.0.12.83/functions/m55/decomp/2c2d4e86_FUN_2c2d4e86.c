/* FUN_2c2d4e86 @ 0x2c2d4e86 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_2c2d4e86(uint param_1,uint param_2)

{
  undefined4 unaff_r4;
  bool in_CY;
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 in_q13 [16];
  undefined1 in_q15 [16];
  
  bVar1 = param_1 == 0;
  if (in_CY && !bVar1) {
    bVar1 = param_1 >> 0x10 == 0;
  }
  if (bVar1) {
    *(undefined4 *)(param_2 ^ uRam2c2d4f18) = unaff_r4;
    auVar2 = VectorAdd(in_q15,in_q13,1,1);
    SatQ(auVar2,1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

