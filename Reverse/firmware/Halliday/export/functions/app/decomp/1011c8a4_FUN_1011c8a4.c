/* FUN_1011c8a4 @ 0x1011c8a4 */

bool FUN_1011c8a4(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  for (iVar2 = 0; (char)iVar2 < param_2; iVar2 = iVar2 + 1) {
    uVar1 = uVar1 | *(uint *)(param_1 + iVar2 * 4);
  }
  return uVar1 == 0;
}

