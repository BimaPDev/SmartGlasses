/* FUN_2c07a440 @ 0x2c07a440 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x2c07a504) overlaps instruction at (ram,0x2c07a502)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c07a440(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  undefined4 uVar6;
  uint *unaff_r4;
  int unaff_r5;
  int unaff_r6;
  int iVar7;
  undefined1 *puVar8;
  char in_OV;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  undefined4 in_cr12;
  undefined4 in_cr15;
  
  puVar8 = &stack0xfffffff8;
  *(int *)(param_2 + 0x60) = unaff_r6;
  pbVar1 = (byte *)(unaff_r6 + 5);
  if (param_1 != 0) {
    bVar2 = (byte)((uint)param_4 >> 0x18);
    bVar4 = bVar2 >> 4;
    if (in_OV == '\0') {
      unaff_r6 = *(int *)(iRam2c07a4d4 + 4);
      coprocessor_function(1,0xc,0,in_cr0,in_cr12,in_cr8);
      if (((int)unaff_r4 >> 5) + (int)unaff_r4 < 0 == SCARRY4((int)unaff_r4 >> 5,(int)unaff_r4)) {
        param_2 = unaff_r6 * 0x200;
        puVar8 = (undefined1 *)(param_2 * (uint)*pbVar1);
        bVar4 = (byte)unaff_r4;
      }
      else {
        param_2 = 0;
        bVar4 = bVar2 >> 4;
      }
    }
    bVar2 = *(byte *)((int)unaff_r4 + 0x1b);
    coprocessor_moveto(10,7,1,param_2,in_cr0,in_cr1);
    iVar7 = *(int *)(unaff_r6 + 8);
    coprocessor_moveto(5,6,0,(uint)(ushort)unaff_r4[2],in_cr15,in_cr1);
    *(ushort *)(iVar7 + 4) = (ushort)unaff_r4[2] + 0xf4;
    iVar3 = _DAT_2c07a914;
    pcVar5 = (char *)((param_2 + (int)unaff_r4 >> 0xc) + 0x44);
    *pcVar5 = bVar4 - (char)iVar7;
    uVar6 = *(undefined4 *)((int)puVar8 * 2 + 0x18);
    *unaff_r4 = (uint)bVar2;
    iVar7 = (int)pcVar5 * 4;
    *(short *)(iVar7 + 0x10) = (short)uVar6;
    *(undefined1 *)(iVar3 * 0x100000 + 0x14) = 0;
    *(undefined2 *)(iVar7 + 0xe) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iRam000000dc = -(unaff_r6 >> 0x1f);
  *(undefined2 *)(iRam000000dc + 0x10) = 0xd0;
  iRam000000e0 = unaff_r5 * 0x4000000;
  uRam000000d4 = 0xd0;
  uRam000000e8 = 0;
  iRam000000d0 = param_2;
  uRam000000d8 = param_4;
  iRam000000e4 = unaff_r6;
  *(int *)(iRam000000e0 + 0x6c) = param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

