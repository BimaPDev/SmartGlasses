/* FUN_10131274 @ 0x10131274 */

void FUN_10131274(int param_1)

{
  int iVar1;
  
  FUN_1011ea48(param_1,0,0x4a);
  iVar1 = FUN_1005e048();
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 4);
  iVar1 = FUN_1011bb2e();
  *(bool *)(param_1 + 1) = iVar1 == 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

