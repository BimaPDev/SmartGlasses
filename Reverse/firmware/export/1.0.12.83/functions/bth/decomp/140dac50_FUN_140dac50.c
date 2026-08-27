/* FUN_140dac50 @ 0x140dac50 */

void FUN_140dac50(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_140dac38();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar2 = *DAT_140dacb8;
    *(undefined4 *)(param_1 + 0x28) = DAT_140dacbc;
    if (iVar2 == param_1) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    uVar1 = FUN_140dacc0(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_140dacc0(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_140dacc0(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_140daba0(*(undefined4 *)(param_1 + 4),4,0);
    FUN_140daba0(*(undefined4 *)(param_1 + 8),9,1);
    FUN_140daba0(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  FUN_140db624(DAT_140dac4c);
  return;
}

