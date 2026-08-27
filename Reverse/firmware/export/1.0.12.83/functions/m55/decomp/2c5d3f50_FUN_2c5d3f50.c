/* FUN_2c5d3f50 @ 0x2c5d3f50 */

void FUN_2c5d3f50(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x84);
  if (iVar1 != 0) {
    switch(*(undefined1 *)(param_1 + 0xe0)) {
    case 1:
      FUN_2c6072bc(iVar1,4,0x20,0xffffff9c);
      return;
    case 2:
      FUN_2c6072bc(iVar1,6,0xffffffe0,0xffffff9c);
      return;
    case 3:
      FUN_2c6072bc(iVar1,1,0x20);
      return;
    case 4:
      FUN_2c6072bc(iVar1,3,0xffffffe0,0x20);
      return;
    }
  }
  return;
}

