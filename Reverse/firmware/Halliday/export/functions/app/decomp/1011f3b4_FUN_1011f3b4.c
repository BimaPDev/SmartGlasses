/* FUN_1011f3b4 @ 0x1011f3b4 */

undefined4 FUN_1011f3b4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x10);
  iVar1 = FUN_10112e84(**(undefined4 **)(param_1 + 4));
  *piVar3 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffea;
  }
  else {
    uVar2 = 0;
    *(byte *)(piVar3 + 2) = *(byte *)(piVar3 + 2) & 0xfc;
    *(byte *)(piVar3 + 0x204) = *(byte *)(piVar3 + 0x204) & 0xfc;
  }
  return uVar2;
}

