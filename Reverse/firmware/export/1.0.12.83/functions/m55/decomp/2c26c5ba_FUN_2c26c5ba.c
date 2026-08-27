/* FUN_2c26c5ba @ 0x2c26c5ba */

int FUN_2c26c5ba(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int unaff_r4;
  undefined4 in_cr13;
  undefined4 in_cr14;
  undefined4 in_cr15;
  
  iVar1 = *(short *)((uint)*(byte *)(param_3 * 8 + 0x19) + unaff_r4) * 0x100;
  if (iVar1 < 0 != SBORROW4(param_3 * 8,6)) {
    iVar1 = *(int *)(iVar1 + 0x70);
  }
  coprocessor_function2(0,0xe,7,in_cr13,in_cr15,in_cr14);
  return iVar1;
}

