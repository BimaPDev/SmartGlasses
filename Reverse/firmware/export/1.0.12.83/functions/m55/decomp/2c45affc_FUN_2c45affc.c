/* FUN_2c45affc @ 0x2c45affc */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c45af2e) */
/* WARNING: Removing unreachable block (ram,0x2c45ae9e) */

void FUN_2c45affc(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  code *pcVar1;
  uint uVar2;
  int unaff_r4;
  uint unaff_r5;
  uint uVar3;
  undefined4 unaff_r7;
  undefined4 unaff_r9;
  undefined4 in_cr0;
  undefined4 in_cr15;
  undefined8 in_d20;
  undefined8 in_d22;
  uint in_stack_000000a4;
  int iStack00000160;
  
  uVar2 = param_3 - 0x67;
  *(short *)(param_3 - 0x45) = (short)unaff_r7;
  uVar3 = (uint)*(ushort *)(param_2 + 0x1a);
  if (uVar2 != 0) {
    if (param_3 < 0x67) {
      iRam000000c3 = param_4 * 0x20000;
      uRam000000c7 = unaff_r5;
      uRam000000cb = unaff_r7;
      *(undefined1 *)(param_4 + 9) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined4 *)(uVar3 + 0x58) = param_1;
    if ((CARRY4(unaff_r5,uVar2) && unaff_r5 + uVar2 != 0) &&
       ((int)(unaff_r5 + uVar2) < 0 == SCARRY4(unaff_r5,uVar2))) {
      *(char *)(uVar3 + 0x1e) = (char)unaff_r7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(uVar3 + 1) = 0;
  FloatVectorMult(in_d22,in_d20,2,0x20);
  iStack00000160 = (unaff_r4 << (param_2 & 0xff)) << 0x16;
  if (iStack00000160 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((in_stack_000000a4 >> 0x12 & 1) == 0) {
    *(undefined4 *)(param_3 - 0x57) = 7;
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0x88,0x2c45b236);
    (*pcVar1)();
  }
  coprocessor_moveto(7,5,2,unaff_r9,in_cr0,in_cr15);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

