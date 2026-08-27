/* FUN_2c434d3c @ 0x2c434d3c */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c434d5c) overlaps instruction at (ram,0x2c434d5a)
    */
/* WARNING: Removing unreachable block (ram,0x2c434ddc) */
/* WARNING: Removing unreachable block (ram,0x2c434dea) */
/* WARNING: Removing unreachable block (ram,0x2c434df0) */

void FUN_2c434d3c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r5;
  undefined4 *unaff_r7;
  code *unaff_r9;
  code *unaff_r11;
  char cVar4;
  bool bVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 in_stack_00000284;
  uint in_stack_00000394;
  
  uVar1 = (uint)*(ushort *)(param_4 + 0x2a);
  *unaff_r7 = param_1;
  unaff_r7[1] = uVar1;
  unaff_r7[2] = param_4;
  *(short *)((int)(unaff_r7 + 3) + uVar1) = (short)param_1;
  cVar6 = SBORROW4(unaff_r5,0x40);
  bVar5 = (int)uVar1 >> 0xe == 0;
  cVar4 = '\0';
  uVar3 = param_3[1];
  uVar1 = param_3[2];
  (*unaff_r9)(param_1,*param_3,param_3 + 3,0x2c434f14);
  if (!bVar5 && cVar4 == cVar6) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  unaff_r7[0x1a] = uVar3;
  iVar2 = (int)(unaff_r7 + 3) >> 6;
  if (uVar1 >> 0x1c != 0) {
    do {
      func_0x2cd7c518(in_stack_00000284,iVar2);
      while( true ) {
        uVar1 = (uint)*(byte *)(unaff_r5 + 4);
        if (-0xaa < (int)in_stack_00000394) break;
        if ((int)in_stack_00000394 < -0xa9) {
          while( true ) {
            *(short *)(uVar1 + 0x32) = (short)unaff_r5;
            if (in_stack_00000394 == 0xffffff57) {
              halt_baddata();
            }
            if (in_stack_00000394 < 0xffffff57) {
              *(char *)(uVar1 + 0x1e) = (char)&stack0x0000026c;
              software_hlt(5);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if ((int)in_stack_00000394 < -0xa9) {
              uRam00000002 = 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (&stack0x0000026c == (undefined1 *)0x0) break;
            uVar1 = (uint)*(ushort *)(in_stack_00000394 + 0x2c434fa1);
            uRam2c434f08 = 0x2c43508c;
          }
          software_interrupt(0xe1);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      *(undefined1 *)(in_stack_00000394 + 0x2c434fa1) = 0xf8;
      cVar6 = '\0';
      cVar4 = '\0';
      uVar7 = (*unaff_r11)();
      iVar2 = (int)((ulonglong)uVar7 >> 0x20);
      in_stack_00000284 = (undefined4)uVar7;
    } while (cVar6 == '\0');
    if (cVar4 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

