/* FUN_140664f0 @ 0x140664f0 */

byte FUN_140664f0(uint param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  
  piVar2 = *(int **)(DAT_14066540 + 0x84);
  if (piVar2 == (int *)0x0) {
    return 1;
  }
  while( true ) {
    uVar3 = (uint)*(ushort *)(piVar2 + 1);
    if (param_1 < uVar3) {
      return 1;
    }
    if ((int)param_1 < (int)(*(byte *)((int)piVar2 + 6) + uVar3)) break;
    piVar2 = (int *)*piVar2;
    if (piVar2 == (int *)0x0) {
      return 1;
    }
  }
  bVar1 = *(byte *)((int)piVar2 + 10);
  if ((bVar1 & 0x10) != 0) {
    return 1;
  }
  *param_3 = (int)piVar2 + (param_1 - uVar3) * 6 + 0xc;
  *param_2 = piVar2;
  return bVar1 & 0x10;
}

