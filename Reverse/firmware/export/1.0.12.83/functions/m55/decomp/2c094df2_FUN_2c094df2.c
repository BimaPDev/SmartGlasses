/* FUN_2c094df2 @ 0x2c094df2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c094db2) */
/* WARNING: Removing unreachable block (ram,0x2c094db4) */
/* WARNING: Removing unreachable block (ram,0x2c094de8) */
/* WARNING: Removing unreachable block (ram,0x2c094e3c) */
/* WARNING: Removing unreachable block (ram,0x2c094dea) */
/* WARNING: Removing unreachable block (ram,0x2c094e44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c094df2(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r5;
  int unaff_r6;
  int iVar4;
  int unaff_r9;
  int in_r12;
  char in_CY;
  char in_OV;
  undefined4 in_cr10;
  undefined4 in_cr11;
  undefined4 in_cr12;
  undefined4 in_cr15;
  undefined4 in_stack_00000018;
  uint in_stack_00000044;
  undefined1 in_stack_00000054;
  undefined2 in_stack_0000005c;
  int in_stack_00000084;
  ushort in_stack_00000098;
  uint in_stack_000000c8;
  uint in_stack_00000100;
  int in_stack_00000108;
  int in_stack_0000010c;
  int in_stack_000001cc;
  uint in_stack_00000350;
  undefined4 *in_stack_00000390;
  int in_stack_00000394;
  
  bVar1 = *(byte *)(unaff_r5 + 0x1b);
  *(undefined4 *)(unaff_r6 + 0x10) = param_2;
  if (in_CY == '\0') {
    in_CY = CARRY4(param_3,in_stack_00000100);
    in_OV = SCARRY4(param_3,in_stack_00000100);
    software_bkpt(0xd8);
  }
  if (in_CY == '\0') {
    software_bkpt(0xd8);
    if (in_OV == '\0') {
      *(char *)((int)*(short *)(param_4 * 2) + (uint)bVar1) = (char)in_stack_00000390;
      *(undefined4 *)(in_stack_00000108 + 0x6c) = in_stack_00000018;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = (int)*(short *)((uint)bVar1 + param_4);
    *(char *)(in_stack_00000100 + param_3) = (char)in_stack_00000100;
    iVar4 = iVar2 + in_stack_00000100;
    param_1 = (int)*(short *)(param_4 * 2);
    if (SCARRY4(iVar2,in_stack_00000100)) {
      *(uint *)(in_stack_00000100 + 0x5c) = in_stack_00000044;
      if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      software_bkpt(0xd8);
      *(uint *)(in_stack_00000394 + 0x7c) = in_stack_00000350 & 0xffff;
      *(char *)(iVar4 + in_stack_00000100 + 5) = (char)(iVar4 + in_stack_00000100);
      *(int *)((int)&stack0x00000350 * 2) = iVar4 >> 9;
      bVar1 = *(byte *)(iVar4 + in_stack_0000010c);
      *(undefined4 *)(in_stack_0000010c + 0x5c) = 0x2c094fcc;
      *(undefined1 *)((uint)bVar1 + in_stack_0000010c + 0x1b) =
           *(undefined1 *)(in_stack_000001cc + 0x1b);
      uVar3 = *in_stack_00000390;
      iVar2 = in_stack_00000390[5];
      software_bkpt(0xed);
      *(undefined2 *)(in_stack_00000390[4] + 0xc) = in_stack_0000005c;
      *(undefined1 *)((int)in_stack_00000390 + 5) = in_stack_00000054;
      *(short *)((iVar2 >> 0x18) * 2) = (short)uVar3;
      *(short *)((iVar2 >> 0x18) + 10) = (short)in_stack_00000390;
      coprocessor_load(1,in_cr15,in_stack_00000390 + 0x3e);
      coprocessor_load(1,in_cr10,unaff_r9 + 0x1b8);
      coprocessor_load(0xc,in_cr11,in_r12 + 0x178);
      coprocessor_load(6,in_cr12,in_r12 + 0xf8);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    software_bkpt(0xe9);
    in_stack_00000098 = *(ushort *)(in_stack_000000c8 + 0x36);
    in_stack_00000390 = (undefined4 *)(-0xe8 - (uint)!CARRY4(in_stack_00000044,in_stack_000000c8));
    *(char *)(in_stack_00000100 + in_stack_00000098) = (char)in_stack_00000098;
  }
  software_bkpt(0xed);
  *(ushort *)(in_stack_00000390 + 9) = in_stack_00000098;
  *(char *)(in_stack_00000084 + 0x12) = (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

