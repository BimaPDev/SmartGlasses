/* FUN_101191b4 @ 0x101191b4 */

void FUN_101191b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_1011919c();
  if (*(int *)(param_1 + 0x18) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    iVar2 = *DAT_1011921c;
    *(undefined4 *)(param_1 + 0x28) = DAT_10119220;
    if (iVar2 == param_1) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
    uVar1 = FUN_10119224(param_1);
    *(undefined4 *)(param_1 + 4) = uVar1;
    uVar1 = FUN_10119224(param_1);
    *(undefined4 *)(param_1 + 8) = uVar1;
    uVar1 = FUN_10119224(param_1);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    FUN_10119130(*(undefined4 *)(param_1 + 4),4,0);
    FUN_10119130(*(undefined4 *)(param_1 + 8),9,1);
    FUN_10119130(*(undefined4 *)(param_1 + 0xc),0x12,2);
    *(undefined4 *)(param_1 + 0x18) = 1;
  }
  FUN_10068ca0(DAT_101191b0);
  return;
}

