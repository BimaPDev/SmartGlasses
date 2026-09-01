/* FUN_1010e9a0 @ 0x1010e9a0 */

undefined4 FUN_1010e9a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_1010e9c0;
  uVar2 = 0;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar2 = 0x400;
    }
    else {
      uVar2 = 0x800;
    }
  }
  *(undefined4 *)(DAT_1010e9c0 + 0x758) = uVar2;
  *(int *)(iVar1 + 0x75c) = param_2 << 0xc;
  return 0;
}

