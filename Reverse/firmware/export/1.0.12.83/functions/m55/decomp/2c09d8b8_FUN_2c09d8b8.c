/* FUN_2c09d8b8 @ 0x2c09d8b8 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c09ddda) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c09d8b8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int unaff_r11;
  int unaff_lr;
  undefined4 unaff_pc;
  bool in_CY;
  undefined4 in_cr1;
  undefined8 in_d6;
  undefined8 in_d7;
  int in_stack_00000348;
  
  *(short *)(param_1 * 2) = (short)param_3;
  if (in_CY && param_4 * 99 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (undefined4 *)(uint)*(ushort *)(param_3 * 4 + 0x20);
  uVar7 = (int)*(short *)(param_3 * 8) + 0x34;
  iVar5 = *(int *)(param_4 + 0x2c);
  if (*(byte *)((int)puVar6 + 0x19) != 0) {
    if (iVar5 == 0) {
      unaff_lr = (int)*(short *)(unaff_r11 + 0x812);
      uVar2 = *(ushort *)((int)puVar6 + 0x1a);
      *(undefined4 *)(*(short *)(param_3 * 8) + 0x8c) = 0x52;
      iVar5 = 0;
      in_stack_00000348 = (uint)uVar2 << 0x11;
      uVar4 = uVar7 & 0x100;
      uVar7 = uVar7 * 0x1000000;
      if (uVar4 == 0 || uVar7 == 0) {
        iRam2c09db84 = in_stack_00000348;
        uRam0000001a = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *puVar6 = 0xb;
      puVar6[1] = (uint)*(byte *)((int)puVar6 + 0x19);
    }
    *(int *)(iVar5 + 0x2c09db50) = in_stack_00000348;
    *(int *)(uVar7 + 0x5c) = iVar5;
    coprocessor_moveto2(0xb,0,unaff_pc,unaff_lr,in_cr1);
    iVar5 = *(int *)(uVar7 * 2);
    *(undefined1 *)(*(byte *)(uVar7 + 2) + 0x1f) = 0xf;
    *(undefined4 *)(iVar5 * 8 + 0x24) = 0xf;
    iVar5 = iVar5 * 8;
    *(int *)iVar5 = iVar5;
    uVar1 = VectorGetElement(in_d6,1,4,0);
    auVar3._8_8_ = in_d7;
    auVar3._0_8_ = in_d6;
    VectorMultiply(auVar3,uVar1,4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

