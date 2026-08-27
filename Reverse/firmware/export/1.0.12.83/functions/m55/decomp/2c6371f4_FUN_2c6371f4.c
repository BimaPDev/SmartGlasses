/* FUN_2c6371f4 @ 0x2c6371f4 */

void FUN_2c6371f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(short *)(param_1 + 0x2e) != param_2) {
    iVar2 = (int)*(short *)(param_1 + 0x32);
    if (param_2 <= *(short *)(param_1 + 0x32)) {
      iVar2 = param_2;
    }
    iVar1 = (int)*(short *)(param_1 + 0x30);
    if (*(short *)(param_1 + 0x30) < iVar2) {
      iVar1 = iVar2;
    }
    if (*(short *)(param_1 + 0x2e) != iVar1) {
      *(short *)(param_1 + 0x2e) = (short)iVar1;
      FUN_2c636890();
      return;
    }
  }
  return;
}

