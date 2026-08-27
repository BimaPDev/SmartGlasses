/* FUN_14067034 @ 0x14067034 */

undefined4 FUN_14067034(uint param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = DAT_140670b0;
  piVar5 = *(int **)(DAT_140670b0 + 0x84);
  while( true ) {
    if (piVar5 == (int *)0x0) {
      return 1;
    }
    uVar6 = (uint)*(ushort *)(piVar5 + 1);
    if (param_2 < uVar6) {
      return 1;
    }
    bVar1 = *(byte *)((int)piVar5 + 6);
    if ((int)param_2 < (int)(uVar6 + bVar1)) break;
    piVar5 = (int *)*piVar5;
  }
  if (param_2 != uVar6) {
    return 1;
  }
  if (*(byte *)((int)piVar5 + 0xb) == param_1) {
    uVar4 = (int)*(char *)((int)piVar5 + 10) & 0xfffffff7;
    if (param_3 == 0) {
      uVar4 = uVar4 | 8;
    }
    if ((uVar4 & 0x1f) >> 4 == param_4) {
      bVar3 = (byte)uVar4 & 0xef;
      if (param_4 == 0) {
        bVar3 = bVar3 | 0x10;
      }
      *(byte *)((int)piVar5 + 10) = bVar3;
      *(undefined1 *)(iVar2 + 0x96) = 0;
      FUN_1405bc78(uVar6,(uVar6 - 1) + (uint)bVar1 & 0xffff);
      return 0;
    }
    *(byte *)((int)piVar5 + 10) = (byte)uVar4;
    return 0;
  }
  return 0x43;
}

