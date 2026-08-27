/* FUN_2c52f554 @ 0x2c52f554 */

void FUN_2c52f554(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = param_3;
  uStack_c = param_2;
  iVar1 = func_0x2c52f34c();
  if (iVar1 != 0) {
    func_0x2c52f24c(param_1,iVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 != *(undefined4 **)(param_1 + 0xc)) {
    *puVar2 = uStack_c;
    puVar2[1] = uStack_10;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 8;
    return;
  }
  func_0x2c52f450(param_1 + 4,puVar2,&uStack_c,&uStack_10);
  return;
}

